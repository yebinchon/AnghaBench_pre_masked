
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int sx; int sy; } ;
struct TYPE_16__ {int h; int w; int x; int y; char* title; TYPE_6__* can; int is_tiny; scalar_t__ is_dis; } ;
struct TYPE_15__ {scalar_t__ scr_gadgets; int config; } ;
typedef TYPE_1__ RCore ;
typedef int RAnalFunction ;
typedef TYPE_2__ RAGraph ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int,TYPE_1__*,int *) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (TYPE_6__*,int,int,int,int,char) ;
 int FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (TYPE_6__*,int,int) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int*) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 () ;
 int FUNC_17 (int ) ;
 int FUNC_18 () ;
 int FUNC_19 (TYPE_1__*,char const*) ;
 char* FUNC_20 (TYPE_1__*,char*) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_23(RAGraph *VAR_1, int VAR_2, RCore *VAR_3, RAnalFunction *VAR_4) {
 int VAR_5, VAR_6 = FUNC_14 (&VAR_5);
 int VAR_7 = FUNC_4 (VAR_1, VAR_2, VAR_3, VAR_4);
 if (!VAR_7) {
  return 0;
 }

 if (VAR_2) {
  FUNC_12 ();
 } else {

  FUNC_22 (VAR_1);
 }

 VAR_5 = VAR_2? VAR_5: VAR_1->h + 1;
 VAR_6 = VAR_2? VAR_6: VAR_1->w + 2;
 if (!FUNC_11 (VAR_1->can, VAR_6, VAR_5)) {
  return 0;
 }

 if (!VAR_2) {
  VAR_1->can->sx = -VAR_1->x;
  VAR_1->can->sy = -VAR_1->y - 1;
 }
 if (VAR_1->is_dis) {
  (void) FUNC_0 (-VAR_1->can->sx + 1, -VAR_1->can->sy + 2);
  int VAR_8 = FUNC_7 (VAR_3->config, "scr.utf8");
  int VAR_9 = FUNC_7 (VAR_3->config, "asm.bytes");
  int VAR_10 = FUNC_7 (VAR_3->config, "asm.cmt.right");
  FUNC_8 (VAR_3->config, "scr.utf8", 0);
  FUNC_8 (VAR_3->config, "asm.bytes", 0);
  FUNC_8 (VAR_3->config, "asm.cmt.right", 0);
  char *VAR_11 = FUNC_20 (VAR_3, "pd $r");
  if (VAR_11) {
   FUNC_1 (VAR_11);
   FUNC_5 (VAR_11);
  }
  FUNC_8 (VAR_3->config, "scr.utf8", VAR_8);
  FUNC_8 (VAR_3->config, "asm.bytes", VAR_9);
  FUNC_8 (VAR_3->config, "asm.cmt.right", VAR_10);
 }
 if (VAR_1->title && *VAR_1->title) {
  VAR_1->can->sy ++;
 }
 FUNC_2 (VAR_1);
 FUNC_3 (VAR_1);
 if (VAR_1->title && *VAR_1->title) {
  VAR_1->can->sy --;
 }

 (void) FUNC_0 (-VAR_1->can->sx, -VAR_1->can->sy);
 if (!VAR_1->is_tiny) {
                FUNC_1 (VAR_1->title);
 }
 if (VAR_2 && VAR_1->title) {
  int VAR_12 = FUNC_21 (VAR_1->title);
  FUNC_9 (VAR_1->can, -VAR_1->can->sx + VAR_12, -VAR_1->can->sy,
   VAR_6 - VAR_12, 1, ' ');
 }

 FUNC_10 (VAR_1->can);

 if (VAR_2) {
  FUNC_16 ();
  const char *VAR_13 = FUNC_6 (VAR_3->config, "cmd.gprompt");
  bool VAR_14 = 0;
  FUNC_18 ();
  if (VAR_13 && *VAR_13) {
   FUNC_15 (0, 2);
   FUNC_17 (VAR_0);
   FUNC_19 (VAR_3, VAR_13);
   VAR_14 = 1;
  }
  if (VAR_3 && VAR_3->scr_gadgets) {
   FUNC_19 (VAR_3, "pg");
  }
  if (VAR_14) {
   FUNC_13 ();
  }
 }
 return 1;
}
