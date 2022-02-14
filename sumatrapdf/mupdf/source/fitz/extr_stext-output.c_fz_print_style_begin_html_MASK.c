
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_output ;
typedef int fz_font ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,char*,int,int,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,char*,...) ;
 int FUNC_6 (int *,int *,char*) ;

__attribute__((used)) static void
FUNC_7(fz_context *VAR_0, fz_output *VAR_1, fz_font *VAR_2, float VAR_3, int VAR_4, int VAR_5)
{
 char VAR_6[80];

 int VAR_7 = FUNC_1(VAR_0, VAR_2);
 int VAR_8 = FUNC_2(VAR_0, VAR_2);
 int VAR_9 = FUNC_4(VAR_0, VAR_2);
 int VAR_10 = FUNC_3(VAR_0, VAR_2);

 FUNC_0(VAR_0, VAR_2, VAR_6, sizeof VAR_6, VAR_10, VAR_9);

 if (VAR_4) FUNC_6(VAR_0, VAR_1, "<sup>");
 if (VAR_10) FUNC_6(VAR_0, VAR_1, "<tt>");
 if (VAR_7) FUNC_6(VAR_0, VAR_1, "<b>");
 if (VAR_8) FUNC_6(VAR_0, VAR_1, "<i>");
 FUNC_5(VAR_0, VAR_1, "<span style=\"font-family:%s;font-size:%gpt", VAR_6, VAR_3);
 if (VAR_5 != 0)
  FUNC_5(VAR_0, VAR_1, ";color:#%06x", VAR_5);
 FUNC_5(VAR_0, VAR_1, "\">");
}
