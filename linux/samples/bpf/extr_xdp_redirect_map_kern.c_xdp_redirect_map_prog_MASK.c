
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct xdp_md {scalar_t__ data; scalar_t__ data_end; } ;
struct ethhdr {int dummy; } ;


 int VAR_0 ;
 long* FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int,int ) ;
 int VAR_1 ;
 int FUNC_2 (void*) ;
 int VAR_2 ;

int FUNC_3(struct xdp_md *VAR_3)
{
 void *VAR_4 = (void *)(long)VAR_3->data_end;
 void *VAR_5 = (void *)(long)VAR_3->data;
 struct ethhdr *VAR_6 = VAR_5;
 int VAR_7 = VAR_0;
 int VAR_8, VAR_9 = 0, VAR_10 = 0;
 long *VAR_11;
 u32 VAR_12 = 0;
 u64 VAR_13;

 VAR_13 = sizeof(*VAR_6);
 if (VAR_5 + VAR_13 > VAR_4)
  return VAR_7;


 VAR_8 = 0;


 VAR_11 = FUNC_0(&VAR_1, &VAR_12);
 if (VAR_11)
  *VAR_11 += 1;

 FUNC_2(VAR_5);


 return FUNC_1(&VAR_2, VAR_8, 0);
}
