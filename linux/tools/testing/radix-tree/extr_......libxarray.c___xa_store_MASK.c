
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xarray {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,struct xarray*,unsigned long) ;
 void* VAR_2 ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (struct xarray*) ;
 int VAR_3 ;
 int FUNC_6 (int *,int ) ;
 void* FUNC_7 (int *,void*) ;
 void* FUNC_8 (int *,void*) ;

void *FUNC_9(struct xarray *VAR_4, unsigned long VAR_5, void *VAR_6, gfp_t VAR_7)
{
 FUNC_2(VAR_3, VAR_4, VAR_5);
 void *VAR_8;

 if (FUNC_0(FUNC_4(VAR_6)))
  return FUNC_1(-VAR_0);
 if (FUNC_5(VAR_4) && !VAR_6)
  VAR_6 = VAR_2;

 do {
  VAR_8 = FUNC_8(&VAR_3, VAR_6);
  if (FUNC_5(VAR_4))
   FUNC_6(&VAR_3, VAR_1);
 } while (FUNC_3(&VAR_3, VAR_7));

 return FUNC_7(&VAR_3, VAR_8);
}
