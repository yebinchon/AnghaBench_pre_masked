
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (float,float,float) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(CAN_FIFOMailBox_TypeDef *VAR_6) {

  int VAR_7 = 1;
  int VAR_8 = FUNC_0(VAR_6);



  if (VAR_8 == 0x488) {
    float VAR_9 = ((FUNC_1(VAR_6, 0) & 0x7F) << 8) + FUNC_1(VAR_6, 1);
    float VAR_10 = (VAR_9 * 0.1) - 1638.35;
    bool VAR_11 = 0;
    int VAR_12 = FUNC_1(VAR_6, 2) & 0x40;

    if (VAR_12 == 0) {

      VAR_4 = VAR_10;
    } else if (VAR_3) {

      float VAR_13 = FUNC_3(VAR_1, VAR_5) + 1.;
      float VAR_14 = FUNC_3(VAR_0, VAR_5) + 1.;
      float VAR_15 = VAR_4 + ((VAR_4 > 0.) ? VAR_13 : VAR_14);
      float VAR_16 = VAR_4 - ((VAR_4 > 0.) ? VAR_14 : VAR_13);
      float VAR_17 = FUNC_3(VAR_2, VAR_5) + 1.;


      VAR_11 |= FUNC_2(VAR_10, VAR_17, -VAR_17);


      VAR_11 |= FUNC_2(VAR_10, VAR_15, VAR_16);

      if (VAR_11) {
        VAR_3 = 0;
        VAR_7 = 0;
      }
      VAR_4 = VAR_10;
    } else {
      VAR_7 = 0;
    }
  }
  return VAR_7;
}
