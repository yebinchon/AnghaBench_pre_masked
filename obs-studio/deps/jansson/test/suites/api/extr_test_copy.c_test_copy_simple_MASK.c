
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int refcount; } ;
typedef TYPE_1__ json_t ;


 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_4 () ;
 TYPE_1__* FUNC_5 (int) ;
 TYPE_1__* FUNC_6 () ;
 TYPE_1__* FUNC_7 (int) ;
 TYPE_1__* FUNC_8 (char*) ;
 TYPE_1__* FUNC_9 () ;

__attribute__((used)) static void FUNC_10(void)
{
    json_t *VAR_0, *VAR_1;

    if(FUNC_1(((void*)0)))
        FUNC_0("copying NULL doesn't return NULL");


    VAR_0 = FUNC_9();
    VAR_1 = FUNC_1(VAR_0);
    if(VAR_0 != VAR_1)
        FUNC_0("copying true failed");
    FUNC_2(VAR_0);
    FUNC_2(VAR_1);


    VAR_0 = FUNC_4();
    VAR_1 = FUNC_1(VAR_0);
    if(VAR_0 != VAR_1)
        FUNC_0("copying false failed");
    FUNC_2(VAR_0);
    FUNC_2(VAR_1);


    VAR_0 = FUNC_6();
    VAR_1 = FUNC_1(VAR_0);
    if(VAR_0 != VAR_1)
        FUNC_0("copying null failed");
    FUNC_2(VAR_0);
    FUNC_2(VAR_1);


    VAR_0 = FUNC_8("foo");
    if(!VAR_0)
        FUNC_0("unable to create a string");
    VAR_1 = FUNC_1(VAR_0);
    if(!VAR_1)
        FUNC_0("unable to copy a string");
    if(VAR_1 == VAR_0)
        FUNC_0("copying a string doesn't copy");
    if(!FUNC_3(VAR_1, VAR_0))
        FUNC_0("copying a string produces an inequal copy");
    if(VAR_0->refcount != 1 || VAR_1->refcount != 1)
        FUNC_0("invalid refcounts");
    FUNC_2(VAR_0);
    FUNC_2(VAR_1);


    VAR_0 = FUNC_5(543);
    if(!VAR_0)
        FUNC_0("unable to create an integer");
    VAR_1 = FUNC_1(VAR_0);
    if(!VAR_1)
        FUNC_0("unable to copy an integer");
    if(VAR_1 == VAR_0)
        FUNC_0("copying an integer doesn't copy");
    if(!FUNC_3(VAR_1, VAR_0))
        FUNC_0("copying an integer produces an inequal copy");
    if(VAR_0->refcount != 1 || VAR_1->refcount != 1)
        FUNC_0("invalid refcounts");
    FUNC_2(VAR_0);
    FUNC_2(VAR_1);


    VAR_0 = FUNC_7(123e9);
    if(!VAR_0)
        FUNC_0("unable to create a real");
    VAR_1 = FUNC_1(VAR_0);
    if(!VAR_1)
        FUNC_0("unable to copy a real");
    if(VAR_1 == VAR_0)
        FUNC_0("copying a real doesn't copy");
    if(!FUNC_3(VAR_1, VAR_0))
        FUNC_0("copying a real produces an inequal copy");
    if(VAR_0->refcount != 1 || VAR_1->refcount != 1)
        FUNC_0("invalid refcounts");
    FUNC_2(VAR_0);
    FUNC_2(VAR_1);
}
