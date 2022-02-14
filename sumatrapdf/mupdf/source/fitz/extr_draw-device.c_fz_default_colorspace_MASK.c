
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_default_colorspaces ;
typedef int fz_context ;
typedef int fz_colorspace ;





 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;

__attribute__((used)) static fz_colorspace *FUNC_7(fz_context *VAR_0, fz_default_colorspaces *VAR_1, fz_colorspace *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 if (VAR_1 == ((void*)0))
  return VAR_2;

 switch (FUNC_0(VAR_0, VAR_2))
 {
 case 129:
  if (VAR_2 == FUNC_5(VAR_0))
   return FUNC_2(VAR_0, VAR_1);
  break;
 case 128:
  if (VAR_2 == FUNC_6(VAR_0))
   return FUNC_3(VAR_0, VAR_1);
  break;
 case 130:
  if (VAR_2 == FUNC_4(VAR_0))
   return FUNC_1(VAR_0, VAR_1);
  break;
 default:
  break;
 }
 return VAR_2;
}
