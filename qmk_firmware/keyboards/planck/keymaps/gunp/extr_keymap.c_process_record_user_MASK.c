
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,TYPE_2__*) ;

bool FUNC_3(uint16_t VAR_4, keyrecord_t *VAR_5) {
  uint16_t VAR_6 = 1 << (3 - (VAR_4 - VAR_0));
  if (!FUNC_2(VAR_4, VAR_5))
    return 0;
  if(VAR_0 <= VAR_4 && VAR_4 <= VAR_1) {
    if(!((VAR_3 & VAR_6) == VAR_5->event.pressed)) {
      FUNC_0(VAR_3 + VAR_2);
      VAR_3 ^= VAR_6;
      FUNC_1(VAR_3 + VAR_2);
    }
    return 0;
  }
  return 1;
}
