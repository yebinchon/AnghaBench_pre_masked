
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct game_capture_config {scalar_t__ mode; scalar_t__ priority; scalar_t__ force_scaling; scalar_t__ scale_cx; scalar_t__ scale_cy; scalar_t__ force_shmem; scalar_t__ limit_framerate; scalar_t__ capture_overlays; int executable; int title; int class; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static inline bool FUNC_1(struct game_capture_config *VAR_1,
           struct game_capture_config *VAR_2)
{
 if (VAR_1->mode != VAR_2->mode) {
  return 1;

 } else if (VAR_1->mode == VAR_0 &&
     (FUNC_0(VAR_1->class, VAR_2->class) != 0 ||
      FUNC_0(VAR_1->title, VAR_2->title) != 0 ||
      FUNC_0(VAR_1->executable, VAR_2->executable) != 0 ||
      VAR_1->priority != VAR_2->priority)) {
  return 1;

 } else if (VAR_1->force_scaling != VAR_2->force_scaling) {
  return 1;

 } else if (VAR_1->force_scaling && (VAR_1->scale_cx != VAR_2->scale_cx ||
        VAR_1->scale_cy != VAR_2->scale_cy)) {
  return 1;

 } else if (VAR_1->force_shmem != VAR_2->force_shmem) {
  return 1;

 } else if (VAR_1->limit_framerate != VAR_2->limit_framerate) {
  return 1;

 } else if (VAR_1->capture_overlays != VAR_2->capture_overlays) {
  return 1;
 }

 return 0;
}
