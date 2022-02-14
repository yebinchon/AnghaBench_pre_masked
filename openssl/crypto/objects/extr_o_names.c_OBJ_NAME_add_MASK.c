
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int (* free_func ) (char const*,scalar_t__,char const*) ;} ;
struct TYPE_7__ {char const* name; int alias; int type; char const* data; } ;
typedef TYPE_1__ OBJ_NAME ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int ,TYPE_1__*) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (int *) ;
 TYPE_2__* FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (char const*,scalar_t__,char const*) ;

int FUNC_10(const char *VAR_4, int VAR_5, const char *VAR_6)
{
    OBJ_NAME *VAR_7, *VAR_8;
    int VAR_9, VAR_10 = 0;

    if (!FUNC_2())
        return 0;

    VAR_9 = VAR_5 & VAR_0;
    VAR_5 &= ~VAR_0;

    VAR_7 = FUNC_4(sizeof(*VAR_7));
    if (VAR_7 == ((void*)0)) {

        goto unlock;
    }

    VAR_7->name = VAR_4;
    VAR_7->alias = VAR_9;
    VAR_7->type = VAR_5;
    VAR_7->data = VAR_6;

    FUNC_1(VAR_3);

    VAR_8 = FUNC_6(VAR_2, VAR_7);
    if (VAR_8 != ((void*)0)) {

        if ((VAR_1 != ((void*)0))
            && (FUNC_7(VAR_1) > VAR_8->type)) {




            FUNC_8(VAR_1,
                                VAR_8->type)->free_func(VAR_8->name, VAR_8->type,
                                                      VAR_8->data);
        }
        FUNC_3(VAR_8);
    } else {
        if (FUNC_5(VAR_2)) {

            FUNC_3(VAR_7);
            goto unlock;
        }
    }

    VAR_10 = 1;

unlock:
    FUNC_0(VAR_3);
    return VAR_10;
}
