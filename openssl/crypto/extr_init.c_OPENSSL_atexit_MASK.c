
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void (* handler ) () ;struct TYPE_4__* next; } ;
typedef TYPE_1__ OPENSSL_INIT_STOP ;
typedef int * HMODULE ;
typedef int DSO ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int * FUNC_1 (void*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int,void*,int **) ;
 int VAR_5 ;
 TYPE_1__* FUNC_6 (int) ;
 int FUNC_7 (int ,char*,char*) ;
 TYPE_1__* VAR_6 ;

int FUNC_8(void (*VAR_7)(void))
{
    OPENSSL_INIT_STOP *VAR_8;



    {
        union {
            void *sym;
            void (*func)(void);
        } VAR_9;

        VAR_9.func = VAR_7;
        {
            DSO *VAR_10 = ((void*)0);

            FUNC_4();
            VAR_10 = FUNC_1(VAR_9.sym, VAR_1);

            FUNC_7(VAR_5,
                       "atexit: obtained DSO reference? %s\n",
                       (VAR_10 == ((void*)0) ? "No!" : "Yes."));
            FUNC_2(VAR_10);
            FUNC_3();
        }

    }


    if ((VAR_8 = FUNC_6(sizeof(*VAR_8))) == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }

    VAR_8->handler = VAR_7;
    VAR_8->next = VAR_6;
    VAR_6 = VAR_8;

    return 1;
}
