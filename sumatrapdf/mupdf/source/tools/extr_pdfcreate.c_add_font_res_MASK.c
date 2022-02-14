
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_font ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *) ;
 unsigned char* FUNC_2 (int ,char*,int*) ;
 int * FUNC_3 (int ,int *,char*,int ,int ) ;
 int * FUNC_4 (int ,char*,unsigned char const*,int,int ,int ) ;
 int * FUNC_5 (int ,int ,int *,int) ;
 int * FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int ,int *,int ,int *) ;
 int FUNC_8 (int ,int *,char*,int *) ;
 int FUNC_9 (int ,int *) ;
 int * FUNC_10 (int ,int ,int) ;
 int FUNC_11 (char*,char*) ;

__attribute__((used)) static void FUNC_12(pdf_obj *VAR_6, char *VAR_7, char *VAR_8, char *VAR_9)
{
 const unsigned char *VAR_10;
 int VAR_11, VAR_12;
 fz_font *VAR_13;
 pdf_obj *VAR_14, *VAR_15;

 VAR_10 = FUNC_2(VAR_4, VAR_8, &VAR_11);
 if (VAR_10)
  VAR_13 = FUNC_4(VAR_4, VAR_8, VAR_10, VAR_11, 0, 0);
 else
  VAR_13 = FUNC_3(VAR_4, ((void*)0), VAR_8, 0, 0);

 VAR_14 = FUNC_6(VAR_4, VAR_6, FUNC_0(VAR_0));
 if (!VAR_14)
 {
  VAR_14 = FUNC_10(VAR_4, VAR_5, 10);
  FUNC_7(VAR_4, VAR_6, FUNC_0(VAR_0), VAR_14);
 }

 VAR_12 = VAR_3;
 if (VAR_9)
 {
  if (!FUNC_11(VAR_9, "Latin") || !FUNC_11(VAR_9, "Latn"))
   VAR_12 = VAR_3;
  else if (!FUNC_11(VAR_9, "Greek") || !FUNC_11(VAR_9, "Grek"))
   VAR_12 = VAR_2;
  else if (!FUNC_11(VAR_9, "Cyrillic") || !FUNC_11(VAR_9, "Cyrl"))
   VAR_12 = VAR_1;
 }

 VAR_15 = FUNC_5(VAR_4, VAR_5, VAR_13, VAR_12);
 FUNC_8(VAR_4, VAR_14, VAR_7, VAR_15);
 FUNC_9(VAR_4, VAR_15);

 FUNC_1(VAR_4, VAR_13);
}
