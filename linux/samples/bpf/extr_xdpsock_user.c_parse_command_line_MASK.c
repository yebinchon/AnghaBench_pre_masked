
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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
 void* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int,char**,char*,int ,int*) ;
 int FUNC_4 (char*) ;
 int VAR_11 ;
 int VAR_12 ;
 char* VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 char* VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(int VAR_28, char **VAR_29)
{
 int VAR_30, VAR_31;

 VAR_26 = 0;

 for (;;) {
  VAR_31 = FUNC_3(VAR_28, VAR_29, "Frtli:q:psSNn:czf:mu",
    VAR_11, &VAR_30);
  if (VAR_31 == -1)
   break;

  switch (VAR_31) {
  case 'r':
   VAR_12 = VAR_1;
   break;
  case 't':
   VAR_12 = VAR_2;
   break;
  case 'l':
   VAR_12 = VAR_0;
   break;
  case 'i':
   VAR_13 = VAR_25;
   break;
  case 'q':
   VAR_19 = FUNC_0(VAR_25);
   break;
  case 'p':
   VAR_18 = 1;
   break;
  case 'S':
   VAR_23 |= VAR_6;
   VAR_22 |= VAR_4;
   break;
  case 'N':
   VAR_23 |= VAR_5;
   break;
  case 'n':
   VAR_15 = FUNC_0(VAR_25);
   break;
  case 'z':
   VAR_22 |= VAR_10;
   break;
  case 'c':
   VAR_22 |= VAR_4;
   break;
  case 'u':
   VAR_20 |= VAR_8;
   VAR_21 = 1;
   VAR_16 = VAR_3;
   break;
  case 'F':
   VAR_23 &= ~VAR_7;
   break;
  case 'f':
   VAR_24 = FUNC_0(VAR_25);
  case 'm':
   VAR_17 = 0;
   VAR_22 &= ~VAR_9;
   break;

  default:
   FUNC_5(FUNC_1(VAR_29[0]));
  }
 }

 VAR_14 = FUNC_4(VAR_13);
 if (!VAR_14) {
  FUNC_2(VAR_27, "ERROR: interface \"%s\" does not exist\n",
   VAR_13);
  FUNC_5(FUNC_1(VAR_29[0]));
 }

 if ((VAR_24 & (VAR_24 - 1)) &&
     !VAR_21) {
  FUNC_2(VAR_27, "--frame-size=%d is not a power of two\n",
   VAR_24);
  FUNC_5(FUNC_1(VAR_29[0]));
 }
}
