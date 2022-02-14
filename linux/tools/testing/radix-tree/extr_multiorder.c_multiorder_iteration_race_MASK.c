
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xarray {int dummy; } ;
typedef int pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xarray*) ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int *,struct xarray*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct xarray *VAR_3)
{
 const int VAR_4 = FUNC_3(VAR_0);
 pthread_t VAR_5[VAR_4];
 int VAR_6;

 FUNC_1(&VAR_5[0], ((void*)0), &VAR_1, VAR_3);
 for (VAR_6 = 1; VAR_6 < VAR_4; VAR_6++)
  FUNC_1(&VAR_5[VAR_6], ((void*)0), &VAR_2, VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  FUNC_2(VAR_5[VAR_6], ((void*)0));

 FUNC_0(VAR_3);
}
