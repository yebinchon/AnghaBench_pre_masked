
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ score; TYPE_4__* cmpobj; } ;
struct TYPE_9__ {TYPE_4__* obj; TYPE_1__ u; } ;
typedef TYPE_2__ redisSortObject ;
struct TYPE_11__ {int ptr; } ;
struct TYPE_10__ {scalar_t__ sort_desc; scalar_t__ sort_store; scalar_t__ sort_bypattern; int sort_alpha; } ;


 int FUNC_0 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_4__*) ;
 TYPE_3__ VAR_0 ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(const void *VAR_1, const void *VAR_2) {
    const redisSortObject *VAR_3 = VAR_1, *VAR_4 = VAR_2;
    int VAR_5;

    if (!VAR_0.sort_alpha) {

        if (VAR_3->u.score > VAR_4->u.score) {
            VAR_5 = 1;
        } else if (VAR_3->u.score < VAR_4->u.score) {
            VAR_5 = -1;
        } else {



            VAR_5 = FUNC_1(VAR_3->obj,VAR_4->obj);
        }
    } else {

        if (VAR_0.sort_bypattern) {
            if (!VAR_3->u.cmpobj || !VAR_4->u.cmpobj) {

                if (VAR_3->u.cmpobj == VAR_4->u.cmpobj)
                    VAR_5 = 0;
                else if (VAR_3->u.cmpobj == ((void*)0))
                    VAR_5 = -1;
                else
                    VAR_5 = 1;
            } else {

                if (VAR_0.sort_store) {
                    VAR_5 = FUNC_1(VAR_3->u.cmpobj,VAR_4->u.cmpobj);
                } else {


                    VAR_5 = FUNC_2(VAR_3->u.cmpobj->ptr,VAR_4->u.cmpobj->ptr);
                }
            }
        } else {

            if (VAR_0.sort_store) {
                VAR_5 = FUNC_1(VAR_3->obj,VAR_4->obj);
            } else {
                VAR_5 = FUNC_0(VAR_3->obj,VAR_4->obj);
            }
        }
    }
    return VAR_0.sort_desc ? -VAR_5 : VAR_5;
}
