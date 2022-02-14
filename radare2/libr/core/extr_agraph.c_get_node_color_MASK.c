
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* context; } ;
struct TYPE_6__ {char* graph_box2; char* graph_box; char* graph_diff_match; char* graph_diff_unmatch; char* graph_diff_new; char* graph_diff_unknown; } ;
struct TYPE_5__ {TYPE_2__ pal; } ;
typedef TYPE_3__ RCons ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 () ;

__attribute__((used)) static char *FUNC_1 (int VAR_2, int VAR_3) {
        RCons *VAR_4 = FUNC_0 ();
        if (VAR_2 == -1) {
                return VAR_3 ? VAR_4->context->pal.graph_box2 : VAR_4->context->pal.graph_box;
        }
        return VAR_2 ? ( VAR_2==VAR_0 ? VAR_4->context->pal.graph_diff_match:

                VAR_2==VAR_1? VAR_4->context->pal.graph_diff_unmatch : VAR_4->context->pal.graph_diff_new): VAR_4->context->pal.graph_diff_unknown;
}
