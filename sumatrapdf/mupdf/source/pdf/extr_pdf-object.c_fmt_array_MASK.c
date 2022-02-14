
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmt {int col; int indent; scalar_t__ tight; } ;
typedef int pdf_obj ;
typedef int fz_context ;


 int FUNC_0 (int *,struct fmt*) ;
 int FUNC_1 (int *,struct fmt*,int ) ;
 int FUNC_2 (int *,struct fmt*,char) ;
 int FUNC_3 (int *,struct fmt*) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static void FUNC_6(fz_context *VAR_0, struct fmt *VAR_1, pdf_obj *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = FUNC_5(VAR_0, VAR_2);
 if (VAR_1->tight) {
  FUNC_2(VAR_0, VAR_1, '[');
  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
   FUNC_1(VAR_0, VAR_1, FUNC_4(VAR_0, VAR_2, VAR_3));
   FUNC_3(VAR_0, VAR_1);
  }
  FUNC_2(VAR_0, VAR_1, ']');
 }
 else {
  FUNC_2(VAR_0, VAR_1, '[');
  VAR_1->indent ++;
  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
   if (VAR_1->col > 60) {
    FUNC_2(VAR_0, VAR_1, '\n');
    FUNC_0(VAR_0, VAR_1);
   } else {
    FUNC_2(VAR_0, VAR_1, ' ');
   }
   FUNC_1(VAR_0, VAR_1, FUNC_4(VAR_0, VAR_2, VAR_3));
  }
  VAR_1->indent --;
  FUNC_2(VAR_0, VAR_1, ' ');
  FUNC_2(VAR_0, VAR_1, ']');
  FUNC_3(VAR_0, VAR_1);
 }
}
