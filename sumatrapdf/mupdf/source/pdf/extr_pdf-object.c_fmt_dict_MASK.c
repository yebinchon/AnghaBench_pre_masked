
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmt {int indent; scalar_t__ tight; } ;
typedef int pdf_obj ;
typedef int fz_context ;


 int FUNC_0 (int *,struct fmt*) ;
 int FUNC_1 (int *,struct fmt*,int *) ;
 int FUNC_2 (int *,struct fmt*,char) ;
 int FUNC_3 (int *,struct fmt*,char*) ;
 int FUNC_4 (int *,struct fmt*) ;
 int * FUNC_5 (int *,int *,int) ;
 int * FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;

__attribute__((used)) static void FUNC_10(fz_context *VAR_0, struct fmt *VAR_1, pdf_obj *VAR_2)
{
 int VAR_3, VAR_4;
 pdf_obj *VAR_5, *VAR_6;

 VAR_4 = FUNC_7(VAR_0, VAR_2);
 if (VAR_1->tight) {
  FUNC_3(VAR_0, VAR_1, "<<");
  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
   FUNC_1(VAR_0, VAR_1, FUNC_5(VAR_0, VAR_2, VAR_3));
   FUNC_4(VAR_0, VAR_1);
   FUNC_1(VAR_0, VAR_1, FUNC_6(VAR_0, VAR_2, VAR_3));
   FUNC_4(VAR_0, VAR_1);
  }
  FUNC_3(VAR_0, VAR_1, ">>");
 }
 else {
  FUNC_3(VAR_0, VAR_1, "<<\n");
  VAR_1->indent ++;
  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
   VAR_5 = FUNC_5(VAR_0, VAR_2, VAR_3);
   VAR_6 = FUNC_6(VAR_0, VAR_2, VAR_3);
   FUNC_0(VAR_0, VAR_1);
   FUNC_1(VAR_0, VAR_1, VAR_5);
   FUNC_2(VAR_0, VAR_1, ' ');
   if (!FUNC_9(VAR_0, VAR_6) && FUNC_8(VAR_0, VAR_6))
    VAR_1->indent ++;
   FUNC_1(VAR_0, VAR_1, VAR_6);
   FUNC_2(VAR_0, VAR_1, '\n');
   if (!FUNC_9(VAR_0, VAR_6) && FUNC_8(VAR_0, VAR_6))
    VAR_1->indent --;
  }
  VAR_1->indent --;
  FUNC_0(VAR_0, VAR_1);
  FUNC_3(VAR_0, VAR_1, ">>");
 }
}
