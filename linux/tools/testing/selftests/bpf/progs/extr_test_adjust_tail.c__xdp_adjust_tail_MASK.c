
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_md {scalar_t__ data; scalar_t__ data_end; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct xdp_md*,scalar_t__) ;

int FUNC_1(struct xdp_md *VAR_2)
{
 void *VAR_3 = (void *)(long)VAR_2->data_end;
 void *VAR_4 = (void *)(long)VAR_2->data;
 int VAR_5 = 0;

 if (VAR_3 - VAR_4 == 54)
  VAR_5 = 256;
 else
  VAR_5 = 20;
 if (FUNC_0(VAR_2, 0 - VAR_5))
  return VAR_0;
 return VAR_1;
}
