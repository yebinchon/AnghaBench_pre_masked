
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expected_method {char* member_0; int member_1; } ;
typedef int IOleObject ;
typedef scalar_t__ BOOL ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct expected_method const* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int,char*,...) ;

__attribute__((used)) static void FUNC_3(void)
{
    static const struct expected_method VAR_6[] =
    {
        { "OleObject_QueryInterface", 0 },
        { "OleObjectRunnable_AddRef", 0 },
        { "OleObjectRunnable_IsRunning", 0 },
        { "OleObjectRunnable_Release", 0 },
        { ((void*)0), 0 }
    };

    static const struct expected_method VAR_7[] =
    {
        { "OleObject_QueryInterface", 0 },
        { ((void*)0), 0 }
    };

    BOOL VAR_8;
    IOleObject *VAR_9 = &VAR_1;


    VAR_8 = FUNC_1(((void*)0));
    FUNC_2(VAR_8 == VAR_0, "got %d\n", VAR_8);

    VAR_3 = VAR_6;
    VAR_8 = FUNC_1(VAR_9);
    FUNC_2(VAR_8 == VAR_2, "Object should be running\n");
    FUNC_0();

    VAR_4 = VAR_0;
    VAR_3 = VAR_6;
    VAR_8 = FUNC_1(VAR_9);
    FUNC_2(VAR_8 == VAR_0, "Object should not be running\n");
    FUNC_0();

    VAR_5 = VAR_0;
    VAR_3 = VAR_7;
    VAR_8 = FUNC_1(VAR_9);
    FUNC_2(VAR_8 == VAR_2, "Object without IRunnableObject should be running\n");
    FUNC_0();

    VAR_4 = VAR_2;
    VAR_5 = VAR_2;
}
