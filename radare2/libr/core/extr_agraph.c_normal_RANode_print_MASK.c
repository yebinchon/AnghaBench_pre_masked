
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ut32 ;
typedef int title ;
struct TYPE_10__ {int sx; int sy; int color; } ;
struct TYPE_9__ {int show_node_titles; int show_node_body; scalar_t__ zoom; TYPE_3__* can; scalar_t__ show_node_bubble; } ;
struct TYPE_8__ {int difftype; int x; int y; int w; int h; char* title; char* body; } ;
typedef TYPE_1__ RANode ;
typedef TYPE_2__ RAGraph ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int) ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (TYPE_2__ const*,char*,char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_3__*,int,int,int,int,int ) ;
 int FUNC_7 (TYPE_3__*,int,int,int,int,int ) ;
 char* FUNC_8 (char*,int,int,int,int) ;
 int FUNC_9 (char*,int,char*,char*,...) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(const RAGraph *VAR_7, const RANode *VAR_8, int VAR_9) {
 ut32 VAR_10 = 0, VAR_11 = 0;
 ut32 VAR_12 = 0, VAR_13 = 0;
 ut32 VAR_14 = 0, VAR_15 = 0;
 char VAR_16[VAR_5];
 char *VAR_17;
 int VAR_18, VAR_19;
 int VAR_20 = VAR_8->difftype;
 const bool VAR_21 = VAR_7->show_node_titles;
 const bool VAR_22 = VAR_7->show_node_body;

 VAR_18 = VAR_8->x + VAR_7->can->sx;
 VAR_19 = VAR_8->y + VAR_7->can->sy;
 if (VAR_18 + VAR_3 < 0) {
  VAR_12 = -(VAR_18 + VAR_3);
 }
 if (VAR_18 + VAR_8->w < -VAR_3) {
  return;
 }
 if (VAR_19 < -1) {
  VAR_14 = FUNC_1 (VAR_8->h - VAR_0 - 1, -VAR_19 - VAR_4);
 }

 if (VAR_21) {
  if (VAR_9) {
   FUNC_9 (VAR_16, sizeof (VAR_16) - 1, "[%s]", VAR_8->title);
  } else {
   char *VAR_23 = VAR_7->can->color ? VAR_2 : "";
   FUNC_9 (VAR_16, sizeof (VAR_16) - 1, " %s%s ", VAR_23, VAR_8->title);
   FUNC_3 (VAR_7, VAR_16, VAR_8->title, sizeof (VAR_16) - FUNC_10 (VAR_16) - 1);
  }
  if ((VAR_12 < FUNC_10 (VAR_16)) && FUNC_0 (VAR_8->x + VAR_3 + VAR_12, VAR_8->y + 1)) {
   char *VAR_24 = FUNC_8 (VAR_16, VAR_12, 0, VAR_8->w - VAR_1, 1);
   FUNC_2 (VAR_24);
   FUNC_4 (VAR_24);
  }
 }


 if (VAR_7->zoom > VAR_6) {
  VAR_10 = (VAR_7->zoom - VAR_6) / 10;
  VAR_11 = (VAR_7->zoom - VAR_6) / 30;
  VAR_13 = FUNC_1 (VAR_12, VAR_10);
  VAR_15 = FUNC_1 (VAR_14, VAR_11);
 }
 if (VAR_22) {
  if (FUNC_0 (VAR_8->x + VAR_3 + VAR_12 + VAR_10 - VAR_13,
     VAR_8->y + VAR_4 + VAR_14 + VAR_11 - VAR_15)) {
   ut32 VAR_25 = VAR_10 >= VAR_12? 0: VAR_12 - VAR_10;
   ut32 VAR_26 = VAR_11 >= VAR_14? 0: VAR_14 - VAR_11;
   ut32 VAR_27 = VAR_0 >= VAR_8->h? 1: VAR_8->h - VAR_0;

   if (VAR_7->zoom < VAR_6) {
    VAR_27--;
   }
   if (VAR_26 + 1 <= VAR_27) {
    VAR_17 = FUNC_8 (VAR_8->body,
      VAR_25, VAR_26,
      VAR_8->w - VAR_1,
      VAR_27);
    if (VAR_17) {
     FUNC_2 (VAR_17);
     if (VAR_7->zoom < VAR_6) {
      FUNC_2 ("\n");
     }
     FUNC_4 (VAR_17);
    } else {
     FUNC_2 (VAR_8->body);
    }
   }

   if (VAR_8->body && *VAR_8->body) {
    if (VAR_26 <= VAR_27 && VAR_7->zoom < VAR_6) {
     char *VAR_28 = "...";
     if (VAR_12 < FUNC_10 (VAR_28)) {
      VAR_28 += VAR_12;
      FUNC_2 (VAR_28);
     }
    }
   }
  }
 }



 if (VAR_7->show_node_bubble) {
  FUNC_7 (VAR_7->can, VAR_8->x, VAR_8->y, VAR_8->w, VAR_8->h, FUNC_5 (VAR_20, VAR_9));
 } else {
  FUNC_6 (VAR_7->can, VAR_8->x, VAR_8->y, VAR_8->w, VAR_8->h, FUNC_5 (VAR_20, VAR_9));
 }
}
