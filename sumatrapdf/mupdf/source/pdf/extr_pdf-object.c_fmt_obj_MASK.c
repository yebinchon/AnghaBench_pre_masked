
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmt {scalar_t__ ascii; scalar_t__ crypt; } ;
typedef int pdf_obj ;
typedef int fz_context ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *,struct fmt*,int *) ;
 int FUNC_1 (int *,struct fmt*,int *) ;
 int FUNC_2 (int *,struct fmt*,int *) ;
 int FUNC_3 (int *,struct fmt*,int *) ;
 int FUNC_4 (int *,struct fmt*,char*) ;
 int FUNC_5 (int *,struct fmt*,int *) ;
 int FUNC_6 (char*,int,char*,int ,...) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 scalar_t__ FUNC_11 (int *,int *) ;
 scalar_t__ FUNC_12 (int *,int *) ;
 scalar_t__ FUNC_13 (int *,int *) ;
 scalar_t__ FUNC_14 (int *,int *) ;
 scalar_t__ FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *,int *) ;
 scalar_t__ FUNC_20 (int *,int *) ;

__attribute__((used)) static void FUNC_21(fz_context *VAR_3, struct fmt *VAR_4, pdf_obj *VAR_5)
{
 char VAR_6[256];

 if (VAR_5 == VAR_1)
  FUNC_4(VAR_3, VAR_4, "null");
 else if (VAR_5 == VAR_2)
  FUNC_4(VAR_3, VAR_4, "true");
 else if (VAR_5 == VAR_0)
  FUNC_4(VAR_3, VAR_4, "false");
 else if (FUNC_11(VAR_3, VAR_5))
 {
  FUNC_6(VAR_6, sizeof VAR_6, "%d %d R", FUNC_18(VAR_3, VAR_5), FUNC_16(VAR_3, VAR_5));
  FUNC_4(VAR_3, VAR_4, VAR_6);
 }
 else if (FUNC_12(VAR_3, VAR_5))
 {
  FUNC_6(VAR_6, sizeof VAR_6, "%d", FUNC_17(VAR_3, VAR_5));
  FUNC_4(VAR_3, VAR_4, VAR_6);
 }
 else if (FUNC_14(VAR_3, VAR_5))
 {
  FUNC_6(VAR_6, sizeof VAR_6, "%g", FUNC_19(VAR_3, VAR_5));
  FUNC_4(VAR_3, VAR_4, VAR_6);
 }
 else if (FUNC_15(VAR_3, VAR_5))
 {
  unsigned char *VAR_7 = (unsigned char *)FUNC_20(VAR_3, VAR_5);
  if (VAR_4->crypt
   || (VAR_4->ascii && FUNC_7(VAR_3, VAR_5))
   || (VAR_7[0]==0xff && VAR_7[1]==0xfe)
   || (VAR_7[0]==0xfe && VAR_7[1] == 0xff)
   || FUNC_8(VAR_3, VAR_5)
   )
   FUNC_2(VAR_3, VAR_4, VAR_5);
  else
   FUNC_5(VAR_3, VAR_4, VAR_5);
 }
 else if (FUNC_13(VAR_3, VAR_5))
  FUNC_3(VAR_3, VAR_4, VAR_5);
 else if (FUNC_9(VAR_3, VAR_5))
  FUNC_0(VAR_3, VAR_4, VAR_5);
 else if (FUNC_10(VAR_3, VAR_5))
  FUNC_1(VAR_3, VAR_4, VAR_5);
 else
  FUNC_4(VAR_3, VAR_4, "<unknown object>");
}
