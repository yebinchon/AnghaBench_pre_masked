
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xarray {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct xarray*,int) ;
 int FUNC_1 (struct xarray*) ;
 int FUNC_2 (struct xarray*,int ) ;
 scalar_t__ FUNC_3 (struct xarray*,int ,int ) ;
 int * FUNC_4 (struct xarray*,int ,char*,int ) ;

__attribute__((used)) static void FUNC_5(struct xarray *VAR_1, char *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1, !FUNC_1(VAR_1));

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  FUNC_0(VAR_1, FUNC_4(VAR_1, 0, VAR_2 + VAR_3, VAR_0) != ((void*)0));
  FUNC_2(VAR_1, 0);
 }

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  FUNC_0(VAR_1, FUNC_3(VAR_1, 0, VAR_0) != 0);
  FUNC_0(VAR_1, FUNC_4(VAR_1, 0, VAR_2 + VAR_3, 0) != ((void*)0));
  FUNC_2(VAR_1, 0);
 }

 FUNC_0(VAR_1, !FUNC_1(VAR_1));
}
