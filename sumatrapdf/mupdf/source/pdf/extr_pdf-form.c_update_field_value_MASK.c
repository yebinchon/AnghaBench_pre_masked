
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int pdf_document ;
typedef int fz_context ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ,char const*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(fz_context *VAR_1, pdf_document *VAR_2, pdf_obj *VAR_3, const char *VAR_4)
{
 pdf_obj *VAR_5;

 if (!VAR_4)
  VAR_4 = "";



 VAR_5 = FUNC_1(VAR_1, VAR_3);
 if (VAR_5)
  VAR_3 = VAR_5;

 FUNC_2(VAR_1, VAR_3, FUNC_0(VAR_0), VAR_4);

 FUNC_3(VAR_1, VAR_3);
}
