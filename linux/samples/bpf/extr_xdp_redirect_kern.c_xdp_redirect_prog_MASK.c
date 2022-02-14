
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct xdp_md {scalar_t__ data; scalar_t__ data_end; } ;
struct ethhdr {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int *,int*) ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int FUNC_2 (void*) ;
 int VAR_2 ;

int FUNC_3(struct xdp_md *VAR_3)
{
 void *VAR_4 = (void *)(long)VAR_3->data_end;
 void *VAR_5 = (void *)(long)VAR_3->data;
 struct ethhdr *VAR_6 = VAR_5;
 int VAR_7 = VAR_0;
 int *VAR_8, VAR_9 = 0;
 long *VAR_10;
 u32 VAR_11 = 0;
 u64 VAR_12;

 VAR_12 = sizeof(*VAR_6);
 if (VAR_5 + VAR_12 > VAR_4)
  return VAR_7;

 VAR_8 = FUNC_0(&VAR_2, &VAR_9);
 if (!VAR_8)
  return VAR_7;

 VAR_10 = FUNC_0(&VAR_1, &VAR_11);
 if (VAR_10)
  *VAR_10 += 1;

 FUNC_2(VAR_5);
 return FUNC_1(*VAR_8, 0);
}
