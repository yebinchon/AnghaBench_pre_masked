
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct wlr_event_pointer_axis {int orientation; int delta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static uint32_t FUNC_1(struct wlr_event_pointer_axis *VAR_5) {
 switch (VAR_5->orientation) {
 case 128:
  return VAR_5->delta < 0 ? VAR_4 : VAR_1;
 case 129:
  return VAR_5->delta < 0 ? VAR_2 : VAR_3;
 default:
  FUNC_0(VAR_0, "Unknown axis orientation");
  return 0;
 }
}
