
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mp_obj_t ;
struct TYPE_4__ {int * type; } ;
typedef TYPE_1__ mp_obj_base_t ;
struct TYPE_5__ {int tok_line; int source_name; } ;
typedef TYPE_2__ mp_lexer_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

void FUNC_3(mp_obj_t VAR_2, mp_lexer_t *VAR_3) {


    if (VAR_3 != ((void*)0)) {
        ((mp_obj_base_t*)FUNC_0(VAR_2))->type = &VAR_1;
        FUNC_1(VAR_2, VAR_3->source_name, VAR_3->tok_line, VAR_0);
    }
    FUNC_2(VAR_2);
}
