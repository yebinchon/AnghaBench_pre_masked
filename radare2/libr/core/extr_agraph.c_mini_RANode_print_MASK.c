
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int title ;
struct TYPE_9__ {TYPE_1__* can; } ;
struct TYPE_8__ {int x; int y; int w; char* title; char* body; } ;
struct TYPE_7__ {int sx; int sy; scalar_t__ color; } ;
typedef TYPE_2__ RANode ;
typedef TYPE_3__ RAGraph ;


 char* VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__ const*,char*,char*,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int,scalar_t__,int,int) ;
 int FUNC_5 (char*,int,char*,char*,...) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(const RAGraph *VAR_6, const RANode *VAR_7, int VAR_8, bool VAR_9) {
 char VAR_10[VAR_4];
 int VAR_11, VAR_12 = 0;

 if (!FUNC_0 (VAR_7->x + VAR_1, VAR_7->y) &&
     !FUNC_0 (VAR_7->x + VAR_1 + VAR_7->w, VAR_7->y)) {
  return;
 }

 VAR_11 = VAR_7->x + VAR_1 + VAR_6->can->sx;
 if (VAR_11 < 0) {
  VAR_12 = -VAR_11;
 }
 if (!FUNC_0 (VAR_7->x + VAR_1 + VAR_12, VAR_7->y)) {
  return;
 }

 if (VAR_9) {
  if (VAR_8) {
   FUNC_1 (&VAR_2[VAR_12]);
   (void) FUNC_0 (-VAR_6->can->sx, -VAR_6->can->sy + 2);
   FUNC_5 (VAR_10, sizeof (VAR_10) - 1,
    "[ %s ]", VAR_7->title);
   FUNC_1 (VAR_10);
   if (VAR_5 > 0) {
    char *VAR_13 = FUNC_4 (VAR_7->body, 0, VAR_5, -1, -1);
    (void) FUNC_0 (-VAR_6->can->sx, -VAR_6->can->sy + 3);
    FUNC_1 (VAR_13);
    FUNC_3 (VAR_13);
   } else {
    (void) FUNC_0 (-VAR_6->can->sx, -VAR_6->can->sy + 3);
    FUNC_1 (VAR_7->body);
   }
  } else {
   char *VAR_14 = "____";
   if (VAR_7->title) {
    int VAR_15 = FUNC_6 (VAR_7->title);
    VAR_14 = VAR_7->title;
    if (VAR_15 > VAR_3) {
     VAR_14 += VAR_15 - VAR_3;
    }
   }
   if (VAR_6->can->color) {
    FUNC_5 (VAR_10, sizeof (VAR_10) - 1, "%s__%s__", VAR_0, VAR_14);
   } else {
    FUNC_5 (VAR_10, sizeof (VAR_10) - 1, "__%s__", VAR_14);
   }
   FUNC_2 (VAR_6, VAR_10, VAR_7->title, sizeof (VAR_10) - FUNC_6 (VAR_10) - 1);
   FUNC_1 (FUNC_4 (VAR_10, VAR_12, 0, 20, 1));
  }
 } else {
  FUNC_5 (VAR_10, sizeof (VAR_10) - 1,
   VAR_8? "[ %s ]": "  %s  ", VAR_7->title);
  FUNC_1 (VAR_10);
 }
 return;
}
