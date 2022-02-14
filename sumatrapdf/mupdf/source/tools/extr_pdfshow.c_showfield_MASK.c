
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int * FUNC_0 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_1 (int ,int ,char*,...) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_28 ;
 int * FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int ,int *) ;
 int * FUNC_5 (int ,int *,int *) ;
 int * FUNC_6 (int ,int *,int *) ;
 char* FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (int ,int *,char*) ;
 int FUNC_9 (int ,int *) ;
 char* FUNC_10 (int ,int *) ;
 char const* FUNC_11 (int ,int *) ;
 char const* FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,char*) ;

__attribute__((used)) static void FUNC_14(pdf_obj *VAR_29)
{
 pdf_obj *VAR_30, *VAR_31, *VAR_32;
 const char *VAR_33;
 char *VAR_34;
 int VAR_35;
 int VAR_36, VAR_37;

 VAR_34 = FUNC_10(VAR_27, VAR_29);
 VAR_33 = FUNC_7(VAR_27, VAR_29, FUNC_0(VAR_25));
 VAR_31 = FUNC_6(VAR_27, VAR_29, FUNC_0(VAR_2));
 VAR_35 = FUNC_9(VAR_27, VAR_29);
 VAR_32 = FUNC_5(VAR_27, VAR_29, FUNC_0(VAR_24));

 FUNC_1(VAR_27, VAR_28, "field %d\n", FUNC_12(VAR_27, VAR_29));
 FUNC_1(VAR_27, VAR_28, "    Type: %s\n", FUNC_11(VAR_27, VAR_31));
 if (VAR_35)
 {
  FUNC_1(VAR_27, VAR_28, "    Flags:");
  if (VAR_35 & VAR_15) FUNC_2(VAR_27, VAR_28, " readonly");
  if (VAR_35 & VAR_16) FUNC_2(VAR_27, VAR_28, " required");
  if (VAR_35 & VAR_14) FUNC_2(VAR_27, VAR_28, " noExport");
  if (VAR_31 == FUNC_0(VAR_0))
  {
   if (VAR_35 & VAR_4) FUNC_2(VAR_27, VAR_28, " noToggleToOff");
   if (VAR_35 & VAR_6) FUNC_2(VAR_27, VAR_28, " radio");
   if (VAR_35 & VAR_5) FUNC_2(VAR_27, VAR_28, " pushButton");
   if (VAR_35 & VAR_7) FUNC_2(VAR_27, VAR_28, " radiosInUnison");
  }
  if (VAR_31 == FUNC_0(VAR_26))
  {
   if (VAR_35 & VAR_21) FUNC_2(VAR_27, VAR_28, " multiline");
   if (VAR_35 & VAR_22) FUNC_2(VAR_27, VAR_28, " password");
   if (VAR_35 & VAR_20) FUNC_2(VAR_27, VAR_28, " fileSelect");
   if (VAR_35 & VAR_19) FUNC_2(VAR_27, VAR_28, " dontSpellCheck");
   if (VAR_35 & VAR_18) FUNC_2(VAR_27, VAR_28, " dontScroll");
   if (VAR_35 & VAR_17) FUNC_2(VAR_27, VAR_28, " comb");
   if (VAR_35 & VAR_23) FUNC_2(VAR_27, VAR_28, " richText");
  }
  if (VAR_31 == FUNC_0(VAR_1))
  {
   if (VAR_35 & VAR_8) FUNC_2(VAR_27, VAR_28, " combo");
   if (VAR_35 & VAR_11) FUNC_2(VAR_27, VAR_28, " edit");
   if (VAR_35 & VAR_13) FUNC_2(VAR_27, VAR_28, " sort");
   if (VAR_35 & VAR_12) FUNC_2(VAR_27, VAR_28, " multiSelect");
   if (VAR_35 & VAR_10) FUNC_2(VAR_27, VAR_28, " dontSpellCheck");
   if (VAR_35 & VAR_9) FUNC_2(VAR_27, VAR_28, " commitOnSelChange");
  }
  FUNC_2(VAR_27, VAR_28, "\n");
 }
 FUNC_1(VAR_27, VAR_28, "    Name: %(\n", VAR_34);
 if (*VAR_33)
  FUNC_1(VAR_27, VAR_28, "    Label: %q\n", VAR_33);
 if (VAR_32)
  FUNC_1(VAR_27, VAR_28, "    Parent: %d\n", FUNC_12(VAR_27, VAR_32));

 FUNC_13(FUNC_8(VAR_27, VAR_29, "A"), "Action");

 FUNC_13(FUNC_8(VAR_27, VAR_29, "AA/K"), "Keystroke");
 FUNC_13(FUNC_8(VAR_27, VAR_29, "AA/V"), "Validate");
 FUNC_13(FUNC_8(VAR_27, VAR_29, "AA/F"), "Format");
 FUNC_13(FUNC_8(VAR_27, VAR_29, "AA/C"), "Calculate");

 FUNC_13(FUNC_8(VAR_27, VAR_29, "AA/E"), "Enter");
 FUNC_13(FUNC_8(VAR_27, VAR_29, "AA/X"), "Exit");
 FUNC_13(FUNC_8(VAR_27, VAR_29, "AA/D"), "Down");
 FUNC_13(FUNC_8(VAR_27, VAR_29, "AA/U"), "Up");
 FUNC_13(FUNC_8(VAR_27, VAR_29, "AA/Fo"), "Focus");
 FUNC_13(FUNC_8(VAR_27, VAR_29, "AA/Bl"), "Blur");

 FUNC_2(VAR_27, VAR_28, "\n");

 VAR_30 = FUNC_5(VAR_27, VAR_29, FUNC_0(VAR_3));
 VAR_37 = FUNC_4(VAR_27, VAR_30);
 for (VAR_36 = 0; VAR_36 < VAR_37; ++VAR_36)
  FUNC_14(FUNC_3(VAR_27, VAR_30, VAR_36));
}
