
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int backslashResult ;
typedef int PsqlScanState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char const*,char*,int,int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,int,int) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*,int,int) ;
 int FUNC_10 () ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (char*,int,int) ;
 int FUNC_15 (char*,int,int) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*,int,int) ;
 int FUNC_19 (char*,int) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (char*,int) ;
 int FUNC_23 (char*,int) ;
 int FUNC_24 (char*,int) ;
 int FUNC_25 (char*,int,int) ;
 int FUNC_26 (char const*,char*,int) ;
 int FUNC_27 (char*) ;
 int FUNC_28 (char*,int,int) ;
 int FUNC_29 (char*,int) ;
 int FUNC_30 (char*,int) ;
 int FUNC_31 (char*,int) ;
 int FUNC_32 (char*,int) ;
 int FUNC_33 (char const*,char*,int,int) ;
 int FUNC_34 (char*,int) ;
 int FUNC_35 (char*,int) ;
 int FUNC_36 (char*) ;
 char* FUNC_37 (int ,int ,int *,int) ;
 scalar_t__ FUNC_38 (char const*,char) ;
 int FUNC_39 (char const*,char*,int) ;

__attribute__((used)) static backslashResult
FUNC_40(PsqlScanState VAR_4, bool VAR_5, const char *VAR_6)
{
 backslashResult VAR_7 = VAR_2;
 bool VAR_8 = 1;

 if (VAR_5)
 {
  char *VAR_9;
  bool VAR_10,
     VAR_11;


  VAR_9 = FUNC_37(VAR_4,
           VAR_0, ((void*)0), 1);

  VAR_10 = FUNC_38(VAR_6, '+') ? 1 : 0;
  VAR_11 = FUNC_38(VAR_6, 'S') ? 1 : 0;

  switch (VAR_6[1])
  {
   case '\0':
   case '+':
   case 'S':
    if (VAR_9)
     VAR_8 = FUNC_7(VAR_9, VAR_10, VAR_11);
    else

     VAR_8 = FUNC_33("tvmsE", ((void*)0), VAR_10, VAR_11);
    break;
   case 'A':
    VAR_8 = FUNC_0(VAR_9, VAR_10);
    break;
   case 'a':
    VAR_8 = FUNC_1(VAR_9, VAR_10, VAR_11);
    break;
   case 'b':
    VAR_8 = FUNC_8(VAR_9, VAR_10);
    break;
   case 'c':
    VAR_8 = FUNC_15(VAR_9, VAR_10, VAR_11);
    break;
   case 'C':
    VAR_8 = FUNC_13(VAR_9, VAR_10);
    break;
   case 'd':
    if (FUNC_39(VAR_6, "ddp", 3) == 0)
     VAR_8 = FUNC_17(VAR_9);
    else
     VAR_8 = FUNC_35(VAR_9, VAR_11);
    break;
   case 'D':
    VAR_8 = FUNC_18(VAR_9, VAR_10, VAR_11);
    break;
   case 'f':
    switch (VAR_6[2])
    {
     case '\0':
     case '+':
     case 'S':
     case 'a':
     case 'n':
     case 'p':
     case 't':
     case 'w':
      VAR_8 = FUNC_2(&VAR_6[2], VAR_9, VAR_10, VAR_11);
      break;
     default:
      VAR_7 = VAR_3;
      break;
    }
    break;
   case 'g':

    VAR_8 = FUNC_5(VAR_9, VAR_10, VAR_11);
    break;
   case 'l':
    VAR_8 = FUNC_10();
    break;
   case 'L':
    VAR_8 = FUNC_25(VAR_9, VAR_10, VAR_11);
    break;
   case 'n':
    VAR_8 = FUNC_28(VAR_9, VAR_10, VAR_11);
    break;
   case 'o':
    VAR_8 = FUNC_3(VAR_9, VAR_10, VAR_11);
    break;
   case 'O':
    VAR_8 = FUNC_14(VAR_9, VAR_10, VAR_11);
    break;
   case 'p':
    VAR_8 = FUNC_36(VAR_9);
    break;
   case 'P':
    {
     switch (VAR_6[2])
     {
      case '\0':
      case '+':
      case 't':
      case 'i':
      case 'n':
       VAR_8 = FUNC_26(&VAR_6[2], VAR_9, VAR_10);
       break;
      default:
       VAR_7 = VAR_3;
       break;
     }
    }
    break;
   case 'T':
    VAR_8 = FUNC_9(VAR_9, VAR_10, VAR_11);
    break;
   case 't':
   case 'v':
   case 'm':
   case 'i':
   case 's':
   case 'E':
    VAR_8 = FUNC_33(&VAR_6[1], VAR_9, VAR_10, VAR_11);
    break;
   case 'r':
    if (VAR_6[2] == 'd' && VAR_6[3] == 's')
    {
     char *VAR_12 = ((void*)0);

     if (VAR_9)
      VAR_12 = FUNC_37(VAR_4,
                VAR_0, ((void*)0), 1);
     VAR_8 = FUNC_16(VAR_9, VAR_12);

     if (VAR_12)
      FUNC_11(VAR_12);
    }
    else
     VAR_7 = VAR_3;
    break;
   case 'R':
    switch (VAR_6[2])
    {
     case 'p':
      if (VAR_10)
       VAR_8 = FUNC_4(VAR_9);
      else
       VAR_8 = FUNC_27(VAR_9);
      break;
     case 's':
      VAR_8 = FUNC_6(VAR_9, VAR_10);
      break;
     default:
      VAR_7 = VAR_3;
    }
    break;
   case 'u':
    VAR_8 = FUNC_5(VAR_9, VAR_10, VAR_11);
    break;
   case 'F':
    switch (VAR_6[2])
    {
     case '\0':
     case '+':
      VAR_8 = FUNC_29(VAR_9, VAR_10);
      break;
     case 'p':
      VAR_8 = FUNC_31(VAR_9, VAR_10);
      break;
     case 'd':
      VAR_8 = FUNC_30(VAR_9, VAR_10);
      break;
     case 't':
      VAR_8 = FUNC_32(VAR_9, VAR_10);
      break;
     default:
      VAR_7 = VAR_3;
      break;
    }
    break;
   case 'e':
    switch (VAR_6[2])
    {
     case 's':
      VAR_8 = FUNC_23(VAR_9, VAR_10);
      break;
     case 'u':
      VAR_8 = FUNC_34(VAR_9, VAR_10);
      break;
     case 'w':
      VAR_8 = FUNC_22(VAR_9, VAR_10);
      break;
     case 't':
      VAR_8 = FUNC_24(VAR_9, VAR_10);
      break;
     default:
      VAR_7 = VAR_3;
      break;
    }
    break;
   case 'x':
    if (VAR_10)
     VAR_8 = FUNC_20(VAR_9);
    else
     VAR_8 = FUNC_21(VAR_9);
    break;
   case 'y':
    VAR_8 = FUNC_19(VAR_9, VAR_10);
    break;
   default:
    VAR_7 = VAR_3;
  }

  if (VAR_9)
   FUNC_11(VAR_9);
 }
 else
  FUNC_12(VAR_4);

 if (!VAR_8)
  VAR_7 = VAR_1;

 return VAR_7;
}
