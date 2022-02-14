
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xps_document ;
typedef int fz_context ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, xps_document *VAR_1, char *VAR_2, char *VAR_3, int VAR_4)
{
 char *VAR_5, *VAR_6;
 VAR_5 = FUNC_2(VAR_3, '/');
 VAR_6 = VAR_5 ? VAR_5 + 1 : VAR_3;
 FUNC_1(VAR_2, VAR_3, VAR_4);
 VAR_5 = FUNC_2(VAR_2, '/');
 if (VAR_5) *VAR_5 = 0;
 FUNC_0(VAR_2, "/_rels/", VAR_4);
 FUNC_0(VAR_2, VAR_6, VAR_4);
 FUNC_0(VAR_2, ".rels", VAR_4);
}
