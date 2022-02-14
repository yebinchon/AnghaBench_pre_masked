
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct strparser {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {struct strparser* data; } ;
struct TYPE_5__ {TYPE_1__ arg; } ;
typedef TYPE_2__ read_descriptor_t ;


 int FUNC_0 (TYPE_2__*,struct sk_buff*,unsigned int,size_t,size_t,long) ;

int FUNC_1(struct strparser *VAR_0, struct sk_buff *VAR_1,
   unsigned int VAR_2, size_t VAR_3,
   size_t VAR_4, long VAR_5)
{
 read_descriptor_t VAR_6;

 VAR_6.arg.data = VAR_0;

 return FUNC_0(&VAR_6, VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_5);
}
