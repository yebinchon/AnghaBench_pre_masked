
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct re_guts {int * strip; int * sets; } ;
typedef int states ;
typedef size_t sopno ;
typedef int sop ;
typedef int onestate ;
typedef int cset ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,size_t) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int) ;
 int const FUNC_8 (int ) ;

 int FUNC_9 (int ) ;






 int FUNC_10 (char*) ;

__attribute__((used)) static states
FUNC_11(struct re_guts *VAR_5,
    sopno VAR_6,
    sopno VAR_7,
    states VAR_8,
    int VAR_9,
    states VAR_10)
{
 cset *VAR_11;
 sop VAR_12;
 sopno VAR_13;
 onestate VAR_14;
 sopno VAR_15;
 int VAR_16;

 for (VAR_13 = VAR_6, FUNC_4(VAR_14, VAR_13); VAR_13 != VAR_7; VAR_13++, FUNC_3(VAR_14)) {
  VAR_12 = VAR_5->strip[VAR_13];
  switch (FUNC_8(VAR_12)) {
  case 140:
   break;
  case 142:

   if (!FUNC_7(VAR_9) || VAR_9 != (char)FUNC_9(VAR_12)) {
    if (VAR_9 == (char)FUNC_9(VAR_12))
     FUNC_2(VAR_10, VAR_8, 1);
   }
   break;
  case 144:
   if (VAR_9 == VAR_0 || VAR_9 == VAR_1)
    FUNC_2(VAR_10, VAR_8, 1);
   break;
  case 139:
   if (VAR_9 == VAR_3 || VAR_9 == VAR_1)
    FUNC_2(VAR_10, VAR_8, 1);
   break;
  case 143:
   if (VAR_9 == VAR_2)
    FUNC_2(VAR_10, VAR_8, 1);
   break;
  case 138:
   if (VAR_9 == VAR_4)
    FUNC_2(VAR_10, VAR_8, 1);
   break;
  case 147:
   if (!FUNC_7(VAR_9))
    FUNC_2(VAR_10, VAR_8, 1);
   break;
  case 146:
   VAR_11 = &VAR_5->sets[FUNC_9(VAR_12)];
   if (!FUNC_7(VAR_9) && FUNC_1(VAR_11, VAR_9))
    FUNC_2(VAR_10, VAR_8, 1);
   break;
  case 145:
  case 131:
   FUNC_2(VAR_10, VAR_10, 1);
   break;
  case 134:
   FUNC_2(VAR_10, VAR_10, 1);
   break;
  case 129:
   FUNC_2(VAR_10, VAR_10, 1);
   VAR_16 = FUNC_5(VAR_10, FUNC_9(VAR_12));
   FUNC_0(VAR_10, VAR_10, FUNC_9(VAR_12));
   if (!VAR_16 && FUNC_5(VAR_10, FUNC_9(VAR_12))) {

    VAR_13 -= FUNC_9(VAR_12) + 1;
    FUNC_4(VAR_14, VAR_13);
   }
   break;
  case 133:
   FUNC_2(VAR_10, VAR_10, 1);
   FUNC_2(VAR_10, VAR_10, FUNC_9(VAR_12));
   break;
  case 128:
   FUNC_2(VAR_10, VAR_10, 1);
   break;
  case 137:
  case 132:
   FUNC_2(VAR_10, VAR_10, 1);
   break;
  case 141:
   FUNC_2(VAR_10, VAR_10, 1);
   if ((FUNC_8(VAR_5->strip[VAR_13+FUNC_9(VAR_12)]) != 135)) {
    break;
   }
   FUNC_2(VAR_10, VAR_10, FUNC_9(VAR_12));
   break;
  case 136:
   if (FUNC_6(VAR_10, VAR_14)) {
    for (VAR_15 = 1;
      FUNC_8(VAR_12 = VAR_5->strip[VAR_13+VAR_15]) != 130;
      VAR_15 += FUNC_9(VAR_12)) {
       if (FUNC_8(VAR_12) != 135) {
        break;
       }
      }
    FUNC_2(VAR_10, VAR_10, VAR_15);
   }
   break;
  case 135:
   FUNC_2(VAR_10, VAR_10, 1);
   if (FUNC_8(VAR_5->strip[VAR_13+FUNC_9(VAR_12)]) != 130) {
    if (FUNC_8(VAR_5->strip[VAR_13+FUNC_9(VAR_12)]) == 135) {
     FUNC_2(VAR_10, VAR_10, FUNC_9(VAR_12));
    }
   }
   break;
  case 130:
   FUNC_2(VAR_10, VAR_10, 1);
   break;
  default:
   FUNC_10 ("ops in regex.c\n");
   break;
  }
 }

 return(VAR_10);
}
