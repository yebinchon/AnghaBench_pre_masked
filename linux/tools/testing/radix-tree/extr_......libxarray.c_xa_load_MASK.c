
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xarray {int dummy; } ;


 int FUNC_0 (int ,struct xarray*,unsigned long) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (void*) ;
 int VAR_0 ;
 void* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,void*) ;

void *FUNC_6(struct xarray *VAR_1, unsigned long VAR_2)
{
 FUNC_0(VAR_0, VAR_1, VAR_2);
 void *VAR_3;

 FUNC_1();
 do {
  VAR_3 = FUNC_4(&VAR_0);
  if (FUNC_3(VAR_3))
   VAR_3 = ((void*)0);
 } while (FUNC_5(&VAR_0, VAR_3));
 FUNC_2();

 return VAR_3;
}
