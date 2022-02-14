
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int fz_stream ;
struct TYPE_3__ {int member_2; int member_3; void* y1; void* x1; void* y0; void* x0; int member_1; int member_0; } ;
typedef TYPE_1__ fz_rect ;
typedef int fz_buffer ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*,char*,char*) ;
 int FUNC_1 (int *,char*,char*,char*) ;
 int FUNC_2 (int *,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int *,char) ;
 int FUNC_4 (int ,int *,char*) ;
 void* FUNC_5 (char*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int * FUNC_8 (int ,int) ;
 int * FUNC_9 (int ,char*) ;
 scalar_t__ FUNC_10 (int ,int *,char*,int) ;
 char* FUNC_11 (char**,char*) ;
 int FUNC_12 (int ,int ,char*) ;
 int * FUNC_13 (int ,int ,TYPE_1__,int,int *,int *) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int ,int ,int,int *) ;
 int * FUNC_16 (int ,int ,int) ;
 int FUNC_17 (char*,char*) ;

__attribute__((used)) static void FUNC_18(char *VAR_3)
{
 fz_rect VAR_4 = { 0, 0, 595, 842 };
 int VAR_5 = 0;

 char VAR_6[4096];
 char *VAR_7, *VAR_8;
 fz_stream *VAR_9;

 fz_buffer *VAR_10;
 pdf_obj *VAR_11;
 pdf_obj *VAR_12;

 VAR_11 = FUNC_16(VAR_1, VAR_2, 2);
 VAR_10 = FUNC_8(VAR_1, 1024);

 VAR_9 = FUNC_9(VAR_1, VAR_3);
 while (FUNC_10(VAR_1, VAR_9, VAR_6, sizeof VAR_6))
 {
  if (VAR_6[0] == '%' && VAR_6[1] == '%')
  {
   VAR_8 = VAR_6;
   VAR_7 = FUNC_11(&VAR_8, " ");
   if (!FUNC_17(VAR_7, "%%MediaBox"))
   {
    VAR_4.x0 = FUNC_5(FUNC_11(&VAR_8, " "));
    VAR_4.y0 = FUNC_5(FUNC_11(&VAR_8, " "));
    VAR_4.x1 = FUNC_5(FUNC_11(&VAR_8, " "));
    VAR_4.y1 = FUNC_5(FUNC_11(&VAR_8, " "));
   }
   else if (!FUNC_17(VAR_7, "%%Rotate"))
   {
    VAR_5 = FUNC_5(FUNC_11(&VAR_8, " "));
   }
   else if (!FUNC_17(VAR_7, "%%Font"))
   {
    char *VAR_13 = FUNC_11(&VAR_8, " ");
    char *VAR_14 = FUNC_11(&VAR_8, " ");
    char *VAR_15 = FUNC_11(&VAR_8, " ");
    if (!VAR_13 || !VAR_14)
     FUNC_12(VAR_1, VAR_0, "Font directive missing arguments");
    FUNC_1(VAR_11, VAR_13, VAR_14, VAR_15);
   }
   else if (!FUNC_17(VAR_7, "%%CJKFont"))
   {
    char *VAR_16 = FUNC_11(&VAR_8, " ");
    char *VAR_17 = FUNC_11(&VAR_8, " ");
    char *VAR_18 = FUNC_11(&VAR_8, " ");
    char *VAR_19 = FUNC_11(&VAR_8, " ");
    if (!VAR_16 || !VAR_17)
     FUNC_12(VAR_1, VAR_0, "CJKFont directive missing arguments");
    FUNC_0(VAR_11, VAR_16, VAR_17, VAR_18, VAR_19);
   }
   else if (!FUNC_17(VAR_7, "%%Image"))
   {
    char *VAR_20 = FUNC_11(&VAR_8, " ");
    char *VAR_21 = FUNC_11(&VAR_8, " ");
    if (!VAR_20 || !VAR_21)
     FUNC_12(VAR_1, VAR_0, "Image directive missing arguments");
    FUNC_2(VAR_11, VAR_20, VAR_21);
   }
  }
  else
  {
   FUNC_4(VAR_1, VAR_10, VAR_6);
   FUNC_3(VAR_1, VAR_10, '\n');
  }
 }
 FUNC_7(VAR_1, VAR_9);

 VAR_12 = FUNC_13(VAR_1, VAR_2, VAR_4, VAR_5, VAR_11, VAR_10);
 FUNC_15(VAR_1, VAR_2, -1, VAR_12);
 FUNC_14(VAR_1, VAR_12);

 FUNC_6(VAR_1, VAR_10);
 FUNC_14(VAR_1, VAR_11);
}
