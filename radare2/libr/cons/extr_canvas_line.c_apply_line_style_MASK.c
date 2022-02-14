
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int color; int symbol; int dot_style; } ;
struct TYPE_12__ {TYPE_2__* context; } ;
struct TYPE_11__ {int attr; int color; } ;
struct TYPE_9__ {int graph_trufae; int graph_false; int graph_true; } ;
struct TYPE_10__ {TYPE_1__ pal; } ;
typedef TYPE_3__ RConsCanvas ;
typedef TYPE_4__ RCons ;
typedef TYPE_5__ RCanvasLineStyle ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;






 int FUNC_1 (char*) ;
 TYPE_4__* FUNC_2 () ;
 int VAR_1 ;
 char* FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(RConsCanvas *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6,
  RCanvasLineStyle *VAR_7, int VAR_8) {
 RCons *VAR_9 = FUNC_2 ();
 switch (VAR_7->color) {
 case 128:
  VAR_2->attr = VAR_9->context->pal.graph_trufae;
  break;
 case 129:
  VAR_2->attr = VAR_9->context->pal.graph_true;
  break;
 case 133:
  VAR_2->attr = VAR_9->context->pal.graph_false;
  break;
 case 132:
 default:
  VAR_2->attr = VAR_9->context->pal.graph_trufae;
  break;
 }
 if (!VAR_2->color) {
  VAR_2->attr = VAR_0;
 }
 switch (VAR_7->symbol) {
 case 128:
  if (FUNC_0 (VAR_3, VAR_4)) {
   if (VAR_8) {
    FUNC_1 ("v");
   } else {
    FUNC_1 (">");
   }
  }
  break;
 case 129:
  if (FUNC_0 (VAR_3, VAR_4)) {
   FUNC_1 ("t");
  }
  break;
 case 133:
  if (FUNC_0 (VAR_3, VAR_4)) {
   FUNC_1 ("f");
  }
  break;
 case 130:
  if (FUNC_0 (VAR_3, VAR_4)) {
   FUNC_1 (VAR_1 ? FUNC_4 (VAR_7->dot_style) : "|");
  }
  break;
 case 131:
  if (FUNC_0 (VAR_3, VAR_4)) {
   FUNC_1 (VAR_1 ? FUNC_3 (VAR_7->dot_style) : "-");
  }
  break;
 case 132:
 default:
  break;
 }
}
