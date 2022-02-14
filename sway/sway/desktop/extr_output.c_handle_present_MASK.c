
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct wlr_presentation_event {int flags; int seq; int refresh; int tv_nsec; int tv_sec; int output; } ;
struct wlr_output_event_present {int flags; int seq; int refresh; TYPE_1__* when; } ;
struct wl_listener {int dummy; } ;
struct sway_output {int wlr_output; int enabled; } ;
struct TYPE_2__ {int tv_nsec; int tv_sec; } ;


 struct sway_output* VAR_0 ;
 int FUNC_0 (struct sway_output*,int ,struct wlr_presentation_event*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct sway_output* FUNC_1 (struct wl_listener*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct wl_listener *VAR_3, void *VAR_4) {
 struct sway_output *VAR_5 = FUNC_1(VAR_3, VAR_5, VAR_1);
 struct wlr_output_event_present *VAR_6 = VAR_4;

 if (!VAR_5->enabled) {
  return;
 }

 struct wlr_presentation_event VAR_7 = {
  .output = VAR_5->wlr_output,
  .tv_sec = (uint64_t)VAR_6->when->tv_sec,
  .tv_nsec = (uint32_t)VAR_6->when->tv_nsec,
  .refresh = (uint32_t)VAR_6->refresh,
  .seq = (uint64_t)VAR_6->seq,
  .flags = VAR_6->flags,
 };
 FUNC_0(VAR_5, VAR_2, &VAR_7);
}
