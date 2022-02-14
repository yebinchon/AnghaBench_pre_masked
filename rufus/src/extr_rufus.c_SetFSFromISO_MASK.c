
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {scalar_t__ has_4GB_file; } ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__) ;
 scalar_t__ FUNC_6 (TYPE_1__) ;
 scalar_t__ FUNC_7 (TYPE_1__) ;
 scalar_t__ FUNC_8 (TYPE_1__) ;
 scalar_t__ FUNC_9 (TYPE_1__) ;
 scalar_t__ FUNC_10 (TYPE_1__) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_12 (TYPE_1__) ;
 int FUNC_13 (int ,int ,int,int) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int * VAR_15 ;
 TYPE_1__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;

__attribute__((used)) static void FUNC_14(void)
{
 int VAR_20, VAR_21, VAR_22 = VAR_5;
 uint32_t VAR_23 = VAR_3 | VAR_4;
 BOOL VAR_24 = (VAR_14 & VAR_8) && (VAR_11 == VAR_0) && FUNC_10(VAR_16) &&
  (FUNC_1(FUNC_4(VAR_13, VAR_7)) == 1);

 if (VAR_15 == ((void*)0))
  return;


 for (VAR_20=0; VAR_20<FUNC_0(VAR_12); VAR_20++) {
  VAR_21 = (int)FUNC_2(VAR_12, VAR_20);
  VAR_23 |= 1<<VAR_21;
 }

 if ((VAR_22 == VAR_5) && (VAR_17 != VAR_5)) {

  if (VAR_23 & (1 << VAR_17)) {
   VAR_22 = VAR_17;
  }
 }

 if (VAR_22 == VAR_5) {

  if ((FUNC_8(VAR_16)) || (FUNC_7(VAR_16)) || FUNC_6(VAR_16) ||
   (FUNC_12(VAR_16) && (VAR_19 == VAR_9) && (!VAR_24))) {
   if (VAR_23 & (1 << VAR_3)) {
    VAR_22 = VAR_3;
   } else if ((VAR_23 & (1 << VAR_2)) && !FUNC_6(VAR_16)) {
    VAR_22 = VAR_2;
   }
  } else if ((VAR_24) || FUNC_5(VAR_16) || FUNC_9(VAR_16)) {
   if (VAR_23 & (1 << VAR_4)) {
    VAR_22 = VAR_4;
   }
  }
 }


 if (VAR_16.has_4GB_file && (VAR_23 & (1 << VAR_4))) {
  VAR_22 = VAR_4;
 }


 for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_12); VAR_20++) {
  VAR_21 = (int)FUNC_2(VAR_12, VAR_20);
  if (VAR_21 == VAR_22) {
   FUNC_11(FUNC_3(VAR_12, VAR_20));
   break;
  }
 }
 if (VAR_18 == VAR_5)
  VAR_18 = VAR_22;

 FUNC_13(VAR_13, VAR_10, (VAR_1<<16) | VAR_6,
  FUNC_1(VAR_12));
}
