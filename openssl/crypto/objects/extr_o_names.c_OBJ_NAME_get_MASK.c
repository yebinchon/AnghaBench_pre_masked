
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* name; int type; char* data; scalar_t__ alias; } ;
typedef TYPE_1__ OBJ_NAME ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (int ,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;

const char *FUNC_4(const char *VAR_3, int VAR_4)
{
    OBJ_NAME VAR_5, *VAR_6;
    int VAR_7 = 0, VAR_8;
    const char *VAR_9 = ((void*)0);

    if (VAR_3 == ((void*)0))
        return ((void*)0);
    if (!FUNC_2())
        return ((void*)0);
    FUNC_0(VAR_2);

    VAR_8 = VAR_4 & VAR_0;
    VAR_4 &= ~VAR_0;

    VAR_5.name = VAR_3;
    VAR_5.type = VAR_4;

    for (;;) {
        VAR_6 = FUNC_3(VAR_1, &VAR_5);
        if (VAR_6 == ((void*)0))
            break;
        if ((VAR_6->alias) && !VAR_8) {
            if (++VAR_7 > 10)
                break;
            VAR_5.name = VAR_6->data;
        } else {
            VAR_9 = VAR_6->data;
            break;
        }
    }

    FUNC_1(VAR_2);
    return VAR_9;
}
