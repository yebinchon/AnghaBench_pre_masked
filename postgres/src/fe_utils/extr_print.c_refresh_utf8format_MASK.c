
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {char* horizontal; int * vertical_and_left; int * vertical_and_right; } ;
typedef TYPE_2__ unicodeStyleRowFormat ;
struct TYPE_12__ {int vertical; int * up_and_horizontal; int * vertical_and_horizontal; int * down_and_horizontal; } ;
typedef TYPE_3__ unicodeStyleColumnFormat ;
struct TYPE_13__ {char* horizontal; int vertical; int left_and_right; int up_and_right; int down_and_left; int down_and_right; } ;
typedef TYPE_4__ unicodeStyleBorderFormat ;
struct TYPE_14__ {char* name; int wrap_right_border; int wrap_right; int wrap_left; int nl_right; int nl_left; int header_nl_right; int header_nl_left; int midvrule_blank; int midvrule_wrap; int midvrule_nl; TYPE_1__* lrule; } ;
typedef TYPE_5__ printTextFormat ;
struct TYPE_15__ {size_t unicode_border_linestyle; size_t unicode_header_linestyle; size_t unicode_column_linestyle; } ;
typedef TYPE_6__ printTableOpt ;
struct TYPE_16__ {int wrap_right_border; int wrap_right; int wrap_left; int nl_right; int nl_left; int header_nl_right; int header_nl_left; TYPE_3__* column_style; TYPE_2__* row_style; TYPE_4__* border_style; } ;
struct TYPE_10__ {char* hrule; int rightvrule; int midvrule; int leftvrule; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 TYPE_5__ VAR_4 ;
 TYPE_7__ VAR_5 ;

void
FUNC_0(const printTableOpt *VAR_6)
{
 printTextFormat *VAR_7 = &VAR_4;

 const unicodeStyleBorderFormat *VAR_8;
 const unicodeStyleRowFormat *VAR_9;
 const unicodeStyleColumnFormat *VAR_10;

 VAR_7->name = "unicode";

 VAR_8 = &VAR_5.border_style[VAR_6->unicode_border_linestyle];
 VAR_9 = &VAR_5.row_style[VAR_6->unicode_header_linestyle];
 VAR_10 = &VAR_5.column_style[VAR_6->unicode_column_linestyle];

 VAR_7->lrule[VAR_3].hrule = VAR_8->horizontal;
 VAR_7->lrule[VAR_3].leftvrule = VAR_8->down_and_right;
 VAR_7->lrule[VAR_3].midvrule = VAR_10->down_and_horizontal[VAR_6->unicode_border_linestyle];
 VAR_7->lrule[VAR_3].rightvrule = VAR_8->down_and_left;

 VAR_7->lrule[VAR_2].hrule = VAR_9->horizontal;
 VAR_7->lrule[VAR_2].leftvrule = VAR_9->vertical_and_right[VAR_6->unicode_border_linestyle];
 VAR_7->lrule[VAR_2].midvrule = VAR_10->vertical_and_horizontal[VAR_6->unicode_header_linestyle];
 VAR_7->lrule[VAR_2].rightvrule = VAR_9->vertical_and_left[VAR_6->unicode_border_linestyle];

 VAR_7->lrule[VAR_0].hrule = VAR_8->horizontal;
 VAR_7->lrule[VAR_0].leftvrule = VAR_8->up_and_right;
 VAR_7->lrule[VAR_0].midvrule = VAR_10->up_and_horizontal[VAR_6->unicode_border_linestyle];
 VAR_7->lrule[VAR_0].rightvrule = VAR_8->left_and_right;


 VAR_7->lrule[VAR_1].hrule = "";
 VAR_7->lrule[VAR_1].leftvrule = VAR_8->vertical;
 VAR_7->lrule[VAR_1].midvrule = VAR_10->vertical;
 VAR_7->lrule[VAR_1].rightvrule = VAR_8->vertical;

 VAR_7->midvrule_nl = VAR_10->vertical;
 VAR_7->midvrule_wrap = VAR_10->vertical;
 VAR_7->midvrule_blank = VAR_10->vertical;


 VAR_7->header_nl_left = VAR_5.header_nl_left;
 VAR_7->header_nl_right = VAR_5.header_nl_right;
 VAR_7->nl_left = VAR_5.nl_left;
 VAR_7->nl_right = VAR_5.nl_right;
 VAR_7->wrap_left = VAR_5.wrap_left;
 VAR_7->wrap_right = VAR_5.wrap_right;
 VAR_7->wrap_right_border = VAR_5.wrap_right_border;

 return;
}
