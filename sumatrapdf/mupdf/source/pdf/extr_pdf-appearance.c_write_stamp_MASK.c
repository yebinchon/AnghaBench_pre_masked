
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_font ;
typedef int fz_context ;
typedef int fz_buffer ;


 int FUNC_0 (int *,int *,char*,int,...) ;
 int FUNC_1 (int *,int *,char*) ;
 float FUNC_2 (int *,int *,char const*) ;
 int FUNC_3 (int *,int *,int *,char const*) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0, fz_buffer *VAR_1, fz_font *VAR_2, const char *VAR_3, float VAR_4, float VAR_5)
{
 float VAR_6 = FUNC_2(VAR_0, VAR_2, VAR_3) * VAR_5;
 FUNC_1(VAR_0, VAR_1, "BT\n");
 FUNC_0(VAR_0, VAR_1, "/Times %g Tf\n", VAR_5);
 FUNC_0(VAR_0, VAR_1, "%g %g Td\n", (190-VAR_6)/2, VAR_4);
 FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_1(VAR_0, VAR_1, " Tj\n");
 FUNC_1(VAR_0, VAR_1, "ET\n");
}
