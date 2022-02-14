
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_md {scalar_t__ data_end; scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct xdp_md*,void*,void*) ;

int FUNC_1(struct xdp_md *VAR_1)
{
 FUNC_0(VAR_1, (void *)(long)VAR_1->data,
   (void *)(long)VAR_1->data_end);
 return VAR_0;
}
