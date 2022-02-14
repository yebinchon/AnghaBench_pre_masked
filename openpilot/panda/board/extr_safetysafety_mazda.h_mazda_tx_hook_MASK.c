
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ CNT; } ;
typedef int CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_1__* VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (int,int,int *,int,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (int,int,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_6 (int,int,int ) ;

__attribute__((used)) static int FUNC_7(CAN_FIFOMailBox_TypeDef *VAR_18) {
  int VAR_19 = 1;
  int VAR_20 = FUNC_0(VAR_18);
  int VAR_21 = FUNC_1(VAR_18);


  if (VAR_21 == VAR_4) {
    if ((VAR_20 == VAR_3) && !VAR_14){
      VAR_14 = 1;
    }
    if ((VAR_20 == VAR_2) && !VAR_13){
      VAR_13 = 1;
    }


    if (VAR_20 == VAR_3) {
      int VAR_22 = (((FUNC_2(VAR_18, 0) & 0x0f) << 8) | FUNC_2(VAR_18, 1)) - VAR_8;
      bool VAR_23 = 0;
      uint32_t VAR_24 = VAR_10->CNT;

      if (VAR_11) {


 VAR_23 |= FUNC_5(VAR_22, VAR_8, -VAR_8);


 int VAR_25 = VAR_12;
 VAR_23 |= FUNC_3(VAR_22, VAR_25, &VAR_16,
     VAR_8, VAR_6, VAR_5,
     VAR_0, VAR_1);

 VAR_12 = VAR_22;


 VAR_23 |= FUNC_6(VAR_22, VAR_15, VAR_7);


 uint32_t VAR_26 = FUNC_4(VAR_24, VAR_17);
 if (VAR_26 > ((uint32_t) VAR_9)) {
   VAR_15 = VAR_22;
   VAR_17 = VAR_24;
 }
      }


      if (!VAR_11 && (VAR_22 != 0)) {
 VAR_23 = 1;
      }


      if (VAR_23 || !VAR_11) {
 VAR_12 = 0;
 VAR_15 = 0;
 VAR_17 = VAR_24;
      }

      if (VAR_23) {
 VAR_19 = 0;
      }
    }
  }
  return VAR_19;
}
