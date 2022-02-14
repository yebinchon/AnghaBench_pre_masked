
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_0 (int ,scalar_t__) ;

const char *FUNC_1(uint32_t VAR_5) {
 const char *VAR_6 = FUNC_0(VAR_0, VAR_5);
 if (!VAR_6) {
  if (VAR_5 == VAR_4) {
   VAR_6 = "SWAY_SCROLL_UP";
  } else if (VAR_5 == VAR_1) {
   VAR_6 = "SWAY_SCROLL_DOWN";
  } else if (VAR_5 == VAR_2) {
   VAR_6 = "SWAY_SCROLL_LEFT";
  } else if (VAR_5 == VAR_3) {
   VAR_6 = "SWAY_SCROLL_RIGHT";
  }
 }
 return VAR_6;
}
