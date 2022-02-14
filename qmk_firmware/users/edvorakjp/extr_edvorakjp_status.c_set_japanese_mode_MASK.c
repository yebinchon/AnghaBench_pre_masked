
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ enable_kc_lang; } ;
struct TYPE_3__ {int japanese_mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;

void FUNC_3(bool VAR_4) {
  VAR_3.japanese_mode = VAR_4;
  if (VAR_3.japanese_mode) {
    if (VAR_2.enable_kc_lang) {
      FUNC_0(FUNC_2(VAR_0));
    } else {
      FUNC_0(FUNC_1("`"));
    }
  } else {
    if (VAR_2.enable_kc_lang) {
      FUNC_0(FUNC_2(VAR_1));
    } else {
      FUNC_0(FUNC_1("`"));
    }
  }
}
