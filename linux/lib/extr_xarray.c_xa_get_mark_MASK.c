
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xa_mark_t ;
struct xarray {int dummy; } ;


 int FUNC_0 (int ,struct xarray*,unsigned long) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int VAR_0 ;
 void* FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 void* FUNC_7 (int *) ;

bool FUNC_8(struct xarray *VAR_1, unsigned long VAR_2, xa_mark_t VAR_3)
{
 FUNC_0(VAR_0, VAR_1, VAR_2);
 void *VAR_4;

 FUNC_1();
 VAR_4 = FUNC_7(&VAR_0);
 while (FUNC_6(&VAR_0, VAR_3)) {
  if (!FUNC_3(VAR_4))
   goto found;
  VAR_4 = FUNC_5(&VAR_0, FUNC_4(VAR_4));
 }
 FUNC_2();
 return 0;
 found:
 FUNC_2();
 return 1;
}
