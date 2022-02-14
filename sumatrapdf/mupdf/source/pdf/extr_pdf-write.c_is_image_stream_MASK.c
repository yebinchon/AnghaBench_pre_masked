
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_4(fz_context *VAR_7, pdf_obj *VAR_8)
{
 pdf_obj *VAR_9;
 if ((VAR_9 = FUNC_2(VAR_7, VAR_8, FUNC_0(VAR_4)), FUNC_3(VAR_7, VAR_9, FUNC_0(VAR_6))))
  if ((VAR_9 = FUNC_2(VAR_7, VAR_8, FUNC_0(VAR_3)), FUNC_3(VAR_7, VAR_9, FUNC_0(VAR_2))))
   return 1;
 if (VAR_9 = FUNC_2(VAR_7, VAR_8, FUNC_0(VAR_0)), FUNC_1(VAR_7, VAR_9))
  return 1;
 if (FUNC_2(VAR_7, VAR_8, FUNC_0(VAR_5)) != ((void*)0) && FUNC_2(VAR_7, VAR_8, FUNC_0(VAR_1)) != ((void*)0))
  return 1;
 return 0;
}
