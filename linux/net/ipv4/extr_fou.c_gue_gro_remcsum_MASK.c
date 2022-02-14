
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int remcsum_offload; } ;
struct guehdr {int dummy; } ;
struct gro_remcsum {int dummy; } ;
typedef int __be16 ;
struct TYPE_2__ {int csum_valid; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 size_t FUNC_1 (int ) ;
 struct guehdr* FUNC_2 (struct sk_buff*,void*,unsigned int,size_t,size_t,size_t,struct gro_remcsum*,int) ;

__attribute__((used)) static struct guehdr *FUNC_3(struct sk_buff *VAR_0, unsigned int VAR_1,
          struct guehdr *VAR_2, void *VAR_3,
          size_t VAR_4, struct gro_remcsum *VAR_5,
          bool VAR_6)
{
 __be16 *VAR_7 = VAR_3;
 size_t VAR_8 = FUNC_1(VAR_7[0]);
 size_t VAR_9 = FUNC_1(VAR_7[1]);

 if (VAR_0->remcsum_offload)
  return VAR_2;

 if (!FUNC_0(VAR_0)->csum_valid)
  return ((void*)0);

 VAR_2 = FUNC_2(VAR_0, (void *)VAR_2, VAR_1, VAR_4,
      VAR_8, VAR_9, VAR_5, VAR_6);

 VAR_0->remcsum_offload = 1;

 return VAR_2;
}
