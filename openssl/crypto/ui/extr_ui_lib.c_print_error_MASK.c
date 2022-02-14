
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uis ;
struct TYPE_9__ {char const* out_string; int type; } ;
typedef TYPE_2__ UI_STRING ;
struct TYPE_10__ {TYPE_1__* meth; } ;
typedef TYPE_3__ UI ;
struct TYPE_8__ {scalar_t__ (* ui_write_string ) (TYPE_3__*,TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, size_t VAR_2, UI *VAR_3)
{
    UI_STRING VAR_4;

    FUNC_0(&VAR_4, 0, sizeof(VAR_4));
    VAR_4.type = VAR_0;
    VAR_4.out_string = VAR_1;

    if (VAR_3->meth->ui_write_string != ((void*)0)
        && VAR_3->meth->ui_write_string(VAR_3, &VAR_4) <= 0)
        return -1;
    return 0;
}
