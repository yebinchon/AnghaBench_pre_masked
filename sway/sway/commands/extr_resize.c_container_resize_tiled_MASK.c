
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct sway_container {int width; double width_fraction; int height; double height_fraction; int workspace; scalar_t__ parent; } ;
struct TYPE_3__ {int length; struct sway_container** items; } ;
typedef TYPE_1__ list_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (double) ;
 struct sway_container* FUNC_3 (struct sway_container*,scalar_t__) ;
 TYPE_1__* FUNC_4 (struct sway_container*) ;
 int FUNC_5 (struct sway_container*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,char*) ;

void FUNC_8(struct sway_container *VAR_6,
  uint32_t VAR_7, int VAR_8) {
 if (!VAR_6) {
  return;
 }

 VAR_6 = FUNC_3(VAR_6, VAR_7);
 if (!VAR_6) {

  return;
 }





 struct sway_container *VAR_9 = ((void*)0);
 struct sway_container *VAR_10 = ((void*)0);
 list_t *VAR_11 = FUNC_4(VAR_6);
 int VAR_12 = FUNC_5(VAR_6);

 if (VAR_7 == VAR_0 || VAR_7 == VAR_1) {
  if (VAR_12 == 0) {
   VAR_10 = VAR_11->items[1];
  } else if (VAR_12 == VAR_11->length - 1) {

   VAR_10 = VAR_6;
   VAR_6 = VAR_11->items[VAR_12 - 1];
   VAR_8 = -VAR_8;
  } else {
   VAR_9 = VAR_11->items[VAR_12 - 1];
   VAR_10 = VAR_11->items[VAR_12 + 1];
  }
 } else if (VAR_7 == VAR_5 || VAR_7 == VAR_4) {
  if (!FUNC_7(VAR_12 > 0, "Didn't expect first child")) {
   return;
  }
  VAR_10 = VAR_6;
  VAR_6 = VAR_11->items[VAR_12 - 1];
  VAR_8 = -VAR_8;
 } else {
  if (!FUNC_7(VAR_12 < VAR_11->length - 1,
     "Didn't expect last child")) {
   return;
  }
  VAR_10 = VAR_11->items[VAR_12 + 1];
 }


 int VAR_13 = VAR_9 ? FUNC_2((double)VAR_8 / 2.0) : VAR_8;

 if (FUNC_6(VAR_7)) {
  if (VAR_6->width + VAR_8 < VAR_3) {
   return;
  }
  if (VAR_10->width - VAR_13 < VAR_3) {
   return;
  }
  if (VAR_9 && VAR_9->width - VAR_13 < VAR_3) {
   return;
  }

  double VAR_14 =
   ((double)VAR_8 / VAR_6->width) * VAR_6->width_fraction;
  double VAR_15 =
   VAR_9 ? VAR_14 / 2.0 : VAR_14;

  VAR_6->width_fraction += VAR_14;
  VAR_10->width_fraction -= VAR_15;
  if (VAR_9) {
   VAR_9->width_fraction -= VAR_15;
  }
 } else {
  if (VAR_6->height + VAR_8 < VAR_2) {
   return;
  }
  if (VAR_10->height - VAR_13 < VAR_2) {
   return;
  }
  if (VAR_9 && VAR_9->height - VAR_13 < VAR_2) {
   return;
  }

  double VAR_16 =
   ((double)VAR_8 / VAR_6->height) * VAR_6->height_fraction;
  double VAR_17 =
   VAR_9 ? VAR_16 / 2.0 : VAR_16;

  VAR_6->height_fraction += VAR_16;
  VAR_10->height_fraction -= VAR_17;
  if (VAR_9) {
   VAR_9->height_fraction -= VAR_17;
  }
 }

 if (VAR_6->parent) {
  FUNC_0(VAR_6->parent);
 } else {
  FUNC_1(VAR_6->workspace);
 }
}
