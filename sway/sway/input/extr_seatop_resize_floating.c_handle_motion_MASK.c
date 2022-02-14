
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct sway_seat {struct sway_cursor* cursor; struct seatop_resize_floating_event* seatop_data; } ;
struct sway_cursor {TYPE_1__* cursor; } ;
struct sway_container {double width; double height; int x; int y; int content_x; int content_y; int content_width; int content_height; scalar_t__ view; } ;
struct seatop_resize_floating_event {int edge; double ref_lx; double ref_ly; double ref_width; double ref_height; int ref_con_lx; int ref_con_ly; scalar_t__ preserve_ratio; struct sway_container* con; } ;
typedef enum wlr_edges { ____Placeholder_wlr_edges } wlr_edges ;
struct TYPE_2__ {double x; double y; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sway_container*) ;
 int FUNC_1 (int*,int*,int*,int*) ;
 double FUNC_2 (double,double) ;
 double FUNC_3 (double,double) ;
 int FUNC_4 (scalar_t__,double*,double*,double*,double*) ;

__attribute__((used)) static void FUNC_5(struct sway_seat *VAR_4, uint32_t VAR_5,
  double VAR_6, double VAR_7) {
 struct seatop_resize_floating_event *VAR_8 = VAR_4->seatop_data;
 struct sway_container *VAR_9 = VAR_8->con;
 enum wlr_edges VAR_10 = VAR_8->edge;
 struct sway_cursor *VAR_11 = VAR_4->cursor;



 double VAR_12 = VAR_11->cursor->x - VAR_8->ref_lx;
 double VAR_13 = VAR_11->cursor->y - VAR_8->ref_ly;

 if (VAR_10 == VAR_3 || VAR_10 == VAR_0) {
  VAR_12 = 0;
 }
 if (VAR_10 == VAR_1 || VAR_10 == VAR_2) {
  VAR_13 = 0;
 }

 double VAR_14 = VAR_10 & VAR_1 ? -VAR_12 : VAR_12;
 double VAR_15 = VAR_10 & VAR_3 ? -VAR_13 : VAR_13;

 if (VAR_8->preserve_ratio) {
  double VAR_16 = VAR_14 / VAR_8->ref_width;
  double VAR_17 = VAR_15 / VAR_8->ref_height;
  double VAR_18 = FUNC_2(VAR_16, VAR_17);
  VAR_14 = VAR_8->ref_width * VAR_18;
  VAR_15 = VAR_8->ref_height * VAR_18;
 }


 double VAR_19 = VAR_8->ref_width + VAR_14;
 double VAR_20 = VAR_8->ref_height + VAR_15;
 int VAR_21, VAR_22, VAR_23, VAR_24;
 FUNC_1(&VAR_21, &VAR_22,
   &VAR_23, &VAR_24);
 VAR_19 = FUNC_2(VAR_21, FUNC_3(VAR_19, VAR_22));
 VAR_20 = FUNC_2(VAR_23, FUNC_3(VAR_20, VAR_24));


 if (VAR_9->view) {
  double VAR_25, VAR_26, VAR_27, VAR_28;
  FUNC_4(VAR_9->view, &VAR_25, &VAR_26,
    &VAR_27, &VAR_28);
  VAR_19 = FUNC_2(VAR_25, FUNC_3(VAR_19, VAR_26));
  VAR_20 = FUNC_2(VAR_27, FUNC_3(VAR_20, VAR_28));
 }


 VAR_14 = VAR_19 - VAR_8->ref_width;
 VAR_15 = VAR_20 - VAR_8->ref_height;



 double VAR_29 = 0, VAR_30 = 0;
 if (VAR_10 & VAR_1) {
  VAR_29 = -VAR_14;
 } else if (VAR_10 & VAR_2) {
  VAR_29 = 0;
 } else {
  VAR_29 = -VAR_14 / 2;
 }
 if (VAR_10 & VAR_3) {
  VAR_30 = -VAR_15;
 } else if (VAR_10 & VAR_0) {
  VAR_30 = 0;
 } else {
  VAR_30 = -VAR_15 / 2;
 }



 int VAR_31 = VAR_19 - VAR_9->width;
 int VAR_32 = VAR_20 - VAR_9->height;
 int VAR_33 = (VAR_8->ref_con_lx + VAR_29) - VAR_9->x;
 int VAR_34 = (VAR_8->ref_con_ly + VAR_30) - VAR_9->y;


 VAR_9->x += VAR_33;
 VAR_9->y += VAR_34;
 VAR_9->width += VAR_31;
 VAR_9->height += VAR_32;

 VAR_9->content_x += VAR_33;
 VAR_9->content_y += VAR_34;
 VAR_9->content_width += VAR_31;
 VAR_9->content_height += VAR_32;

 FUNC_0(VAR_9);
}
