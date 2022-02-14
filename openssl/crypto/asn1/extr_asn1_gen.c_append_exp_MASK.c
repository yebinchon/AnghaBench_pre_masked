
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int exp_tag; int exp_class; int exp_constructed; int exp_pad; } ;
typedef TYPE_1__ tag_exp_type ;
struct TYPE_5__ {int imp_tag; scalar_t__ exp_count; int imp_class; TYPE_1__* exp_list; } ;
typedef TYPE_2__ tag_exp_arg ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(tag_exp_arg *VAR_4, int VAR_5, int VAR_6,
                      int VAR_7, int VAR_8, int VAR_9)
{
    tag_exp_type *VAR_10;

    if ((VAR_4->imp_tag != -1) && !VAR_9) {
        FUNC_0(VAR_1, VAR_3);
        return 0;
    }

    if (VAR_4->exp_count == VAR_0) {
        FUNC_0(VAR_1, VAR_2);
        return 0;
    }

    VAR_10 = &VAR_4->exp_list[VAR_4->exp_count++];





    if (VAR_4->imp_tag != -1) {
        VAR_10->exp_tag = VAR_4->imp_tag;
        VAR_10->exp_class = VAR_4->imp_class;
        VAR_4->imp_tag = -1;
        VAR_4->imp_class = -1;
    } else {
        VAR_10->exp_tag = VAR_5;
        VAR_10->exp_class = VAR_6;
    }
    VAR_10->exp_constructed = VAR_7;
    VAR_10->exp_pad = VAR_8;

    return 1;
}
