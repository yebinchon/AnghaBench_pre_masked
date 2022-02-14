
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char* id; int flags; int struct_ref; struct TYPE_10__* next; } ;
typedef TYPE_1__ ENGINE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,char*,char const*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int,char*,char const*) ;
 int FUNC_7 (int *,int ) ;
 int VAR_6 ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 int VAR_9 ;
 char* FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char const*,char*) ;

ENGINE *FUNC_12(const char *VAR_10)
{
    ENGINE *VAR_11;
    char *VAR_12 = ((void*)0);
    if (VAR_10 == ((void*)0)) {
        FUNC_5(VAR_2, VAR_5);
        return ((void*)0);
    }
    if (!FUNC_7(&VAR_8, VAR_6)) {
        FUNC_5(VAR_2, VAR_4);
        return ((void*)0);
    }

    FUNC_1(VAR_9);
    VAR_11 = VAR_7;
    while (VAR_11 && (FUNC_11(VAR_10, VAR_11->id) != 0))
        VAR_11 = VAR_11->next;
    if (VAR_11 != ((void*)0)) {





        if (VAR_11->flags & VAR_1) {
            ENGINE *VAR_13 = FUNC_4();
            if (VAR_13 == ((void*)0))
                VAR_11 = ((void*)0);
            else {
                FUNC_8(VAR_13, VAR_11);
                VAR_11 = VAR_13;
            }
        } else {
            VAR_11->struct_ref++;
            FUNC_9(VAR_11, 0, 1);
        }
    }
    FUNC_0(VAR_9);
    if (VAR_11 != ((void*)0))
        return VAR_11;



    if (FUNC_11(VAR_10, "dynamic")) {
        if ((VAR_12 = FUNC_10("OPENSSL_ENGINES")) == ((void*)0))
            VAR_12 = VAR_0;
        VAR_11 = FUNC_12("dynamic");
        if (!VAR_11 || !FUNC_2(VAR_11, "ID", VAR_10, 0) ||
            !FUNC_2(VAR_11, "DIR_LOAD", "2", 0) ||
            !FUNC_2(VAR_11, "DIR_ADD",
                                    VAR_12, 0) ||
            !FUNC_2(VAR_11, "LIST_ADD", "1", 0) ||
            !FUNC_2(VAR_11, "LOAD", ((void*)0), 0))
            goto notfound;
        return VAR_11;
    }
 notfound:
    FUNC_3(VAR_11);
    FUNC_5(VAR_2, VAR_3);
    FUNC_6(2, "id=", VAR_10);
    return ((void*)0);

}
