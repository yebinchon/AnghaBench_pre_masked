
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_xml ;
typedef int fz_context ;


 char* FUNC_0 (int *,size_t) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (char*,char const*,size_t) ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static char *FUNC_6(fz_context *VAR_0, fz_xml *VAR_1)
{
 fz_xml *VAR_2;
 size_t VAR_3 = 0, VAR_4 = 1;
 char *VAR_5;
 for (VAR_2 = FUNC_1(VAR_1); VAR_2; VAR_2 = FUNC_2(VAR_2))
 {
  const char *VAR_6 = FUNC_3(VAR_2);
  VAR_4 += VAR_6 ? FUNC_5(VAR_6) : 0;
 }
 VAR_5 = FUNC_0(VAR_0, VAR_4);
 for (VAR_2 = FUNC_1(VAR_1); VAR_2; VAR_2 = FUNC_2(VAR_2))
 {
  const char *VAR_7 = FUNC_3(VAR_2);
  if (VAR_7)
  {
   VAR_4 = FUNC_5(VAR_7);
   FUNC_4(VAR_5+VAR_3, VAR_7, VAR_4);
   VAR_3 += VAR_4;
  }
 }
 VAR_5[VAR_3] = 0;
 return VAR_5;
}
