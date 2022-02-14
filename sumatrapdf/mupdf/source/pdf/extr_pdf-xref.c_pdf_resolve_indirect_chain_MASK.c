
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 int FUNC_0 (int *,char*,int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

pdf_obj *
FUNC_4(fz_context *VAR_0, pdf_obj *VAR_1)
{
 int VAR_2 = 10;

 while (FUNC_1(VAR_0, VAR_1))
 {
  if (--VAR_2 == 0)
  {
   FUNC_0(VAR_0, "too many indirections (possible indirection cycle involving %d 0 R)", FUNC_3(VAR_0, VAR_1));
   return ((void*)0);
  }

  VAR_1 = FUNC_2(VAR_0, VAR_1);
 }

 return VAR_1;
}
