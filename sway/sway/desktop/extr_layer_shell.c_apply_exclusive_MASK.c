
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct wlr_box {int y; int height; int x; int width; } ;
typedef scalar_t__ int32_t ;
typedef int edges ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct wlr_box *VAR_4,
  uint32_t VAR_5, int32_t VAR_6,
  int32_t VAR_7, int32_t VAR_8,
  int32_t VAR_9, int32_t VAR_10) {
 if (VAR_6 <= 0) {
  return;
 }
 struct {
  uint32_t anchors;
  int *positive_axis;
  int *negative_axis;
  int margin;
 } VAR_11[] = {
  {
   .anchors =
    VAR_1 |
    VAR_2 |
    VAR_3,
   .positive_axis = &VAR_4->y,
   .negative_axis = &VAR_4->height,
   .margin = VAR_7,
  },
  {
   .anchors =
    VAR_1 |
    VAR_2 |
    VAR_0,
   .positive_axis = ((void*)0),
   .negative_axis = &VAR_4->height,
   .margin = VAR_9,
  },
  {
   .anchors =
    VAR_1 |
    VAR_3 |
    VAR_0,
   .positive_axis = &VAR_4->x,
   .negative_axis = &VAR_4->width,
   .margin = VAR_10,
  },
  {
   .anchors =
    VAR_2 |
    VAR_3 |
    VAR_0,
   .positive_axis = ((void*)0),
   .negative_axis = &VAR_4->width,
   .margin = VAR_8,
  },
 };
 for (size_t VAR_12 = 0; VAR_12 < sizeof(VAR_11) / sizeof(VAR_11[0]); ++VAR_12) {
  if ((VAR_5 & VAR_11[VAR_12].anchors) == VAR_11[VAR_12].anchors && VAR_6 + VAR_11[VAR_12].margin > 0) {
   if (VAR_11[VAR_12].positive_axis) {
    *VAR_11[VAR_12].positive_axis += VAR_6 + VAR_11[VAR_12].margin;
   }
   if (VAR_11[VAR_12].negative_axis) {
    *VAR_11[VAR_12].negative_axis -= VAR_6 + VAR_11[VAR_12].margin;
   }
  }
 }
}
