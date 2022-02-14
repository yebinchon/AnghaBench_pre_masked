
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_font ;
typedef int fz_context ;


 char* FUNC_0 (int *,int *) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char const*,int) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0, fz_font *VAR_1, char *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 const char *VAR_6 = FUNC_0(VAR_0, VAR_1);
 char *VAR_7;
 FUNC_2(VAR_2, VAR_6, VAR_3);
 VAR_7 = FUNC_3(VAR_2, '-');
 if (VAR_7)
  *VAR_7 = 0;
 if (VAR_4)
  FUNC_1(VAR_2, ",monospace", VAR_3);
 else
  FUNC_1(VAR_2, VAR_5 ? ",serif" : ",sans-serif", VAR_3);
}
