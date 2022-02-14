
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xarray {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,struct xarray*,unsigned long) ;
 void* VAR_3 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (struct xarray*) ;
 int VAR_4 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,void*) ;

int FUNC_10(struct xarray *VAR_5, unsigned long VAR_6, void *VAR_7, gfp_t VAR_8)
{
 FUNC_1(VAR_4, VAR_5, VAR_6);
 void *VAR_9;

 if (FUNC_0(FUNC_3(VAR_7)))
  return -VAR_1;
 if (!VAR_7)
  VAR_7 = VAR_3;

 do {
  VAR_9 = FUNC_7(&VAR_4);
  if (!VAR_9) {
   FUNC_9(&VAR_4, VAR_7);
   if (FUNC_4(VAR_5))
    FUNC_5(&VAR_4, VAR_2);
  } else {
   FUNC_8(&VAR_4, -VAR_0);
  }
 } while (FUNC_2(&VAR_4, VAR_8));

 return FUNC_6(&VAR_4);
}
