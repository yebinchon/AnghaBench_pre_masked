
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ i2c_status_t ;
typedef int buf ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ,scalar_t__*,int,int ) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__* VAR_4 ;

__attribute__((used)) static int FUNC_3(int VAR_5) {
  uint8_t VAR_6[5];
  i2c_status_t VAR_7 = FUNC_1(FUNC_0(VAR_5), VAR_6, sizeof(VAR_6), VAR_1);
  if (VAR_7 != VAR_0)
    return 1;

  if (VAR_6[0] != VAR_3)
    return 2;

  int VAR_8 = VAR_5 ? VAR_2 : 0;
  uint8_t *VAR_9 = &VAR_4[VAR_8];
  FUNC_2(VAR_9, &VAR_6[1], 4);
  return 0;
}
