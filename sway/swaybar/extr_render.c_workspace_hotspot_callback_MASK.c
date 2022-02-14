
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct swaybar_output {int bar; } ;
struct swaybar_hotspot {int dummy; } ;
typedef enum hotspot_event_handling { ____Placeholder_hotspot_event_handling } hotspot_event_handling ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char const*) ;

__attribute__((used)) static enum hotspot_event_handling FUNC_1(
  struct swaybar_output *VAR_3, struct swaybar_hotspot *VAR_4,
  int VAR_5, int VAR_6, uint32_t VAR_7, void *VAR_8) {
 if (VAR_7 != VAR_0) {
  return VAR_2;
 }
 FUNC_0(VAR_3->bar, (const char *)VAR_8);
 return VAR_1;
}
