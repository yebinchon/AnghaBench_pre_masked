
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nd_intel_smart_threshold {int dummy; } ;
struct nd_intel_smart_inject {int flags; scalar_t__ status; scalar_t__ unsafe_shutdown_enable; scalar_t__ fatal_enable; int spares; scalar_t__ spare_enable; int media_temperature; scalar_t__ mtemp_enable; } ;
struct nd_intel_smart {int shutdown_state; int shutdown_count; int health; int spares; int media_temperature; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int spares; int media_temperature; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_0 (struct device*,struct device*,struct nd_intel_smart*,struct nd_intel_smart_threshold*) ;

__attribute__((used)) static int FUNC_1(
  struct nd_intel_smart_inject *VAR_8,
  unsigned int VAR_9,
  struct nd_intel_smart_threshold *VAR_10,
  struct nd_intel_smart *VAR_11,
  struct device *VAR_12, struct device *VAR_13)
{
 if (VAR_9 != sizeof(*VAR_8))
  return -VAR_0;

 if (VAR_8->flags & VAR_3) {
  if (VAR_8->mtemp_enable)
   VAR_11->media_temperature = VAR_8->media_temperature;
  else
   VAR_11->media_temperature = VAR_7.media_temperature;
 }
 if (VAR_8->flags & VAR_5) {
  if (VAR_8->spare_enable)
   VAR_11->spares = VAR_8->spares;
  else
   VAR_11->spares = VAR_7.spares;
 }
 if (VAR_8->flags & VAR_2) {
  if (VAR_8->fatal_enable)
   VAR_11->health = VAR_1;
  else
   VAR_11->health = VAR_6;
 }
 if (VAR_8->flags & VAR_4) {
  if (VAR_8->unsafe_shutdown_enable) {
   VAR_11->shutdown_state = 1;
   VAR_11->shutdown_count++;
  } else
   VAR_11->shutdown_state = 0;
 }
 VAR_8->status = 0;
 FUNC_0(VAR_12, VAR_13, VAR_11, VAR_10);

 return 0;
}
