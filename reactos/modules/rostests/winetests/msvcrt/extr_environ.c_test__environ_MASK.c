
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*,char***,char***,int ,int*) ;
 int FUNC_1 (int,char*,...) ;
 char*** FUNC_2 () ;
 char*** VAR_0 ;
 int FUNC_3 (char***) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    int VAR_1;
    char **VAR_2, **VAR_3 = ((void*)0);
    int VAR_4, VAR_5 = 0;

    FUNC_1( VAR_0 != ((void*)0), "Expected the pointer to _environ to be non-NULL\n" );
    if (VAR_0)
        FUNC_1( *VAR_0 != ((void*)0), "Expected _environ to be initialized on startup\n" );

    if (!VAR_0 || !*VAR_0)
    {
        FUNC_4( "_environ pointers are not valid\n" );
        return;
    }


    if (&FUNC_2)
    {
        FUNC_1( *FUNC_2() == *VAR_0,
            "Expected _environ pointers to be identical\n" );
    }
    else
        FUNC_4( "__p__environ() is not available\n" );

    if (&FUNC_3)
    {
        char **VAR_6;
        FUNC_3(&VAR_6);
        FUNC_1( VAR_6 == *VAR_0,
            "Expected _environ pointers to be identical\n" );
    }
    else
        FUNC_6( "_get_environ() is not available\n" );



    FUNC_0(&VAR_1, &VAR_2, &VAR_3, 0, &VAR_5);

    FUNC_1( VAR_3 != ((void*)0), "Expected initial environment block pointer to be non-NULL\n" );
    if (!VAR_3)
    {
        FUNC_4( "Initial environment block pointer is not valid\n" );
        return;
    }

    for (VAR_4 = 0; ; VAR_4++)
    {
        if ((*VAR_0)[VAR_4])
        {
            FUNC_1( VAR_3[VAR_4] != ((void*)0), "Expected environment block pointer element to be non-NULL\n" );
            FUNC_1( !FUNC_5((*VAR_0)[VAR_4], VAR_3[VAR_4]),
                "Expected _environ and environment block pointer strings (%s vs. %s) to match\n",
                (*VAR_0)[VAR_4], VAR_3[VAR_4] );
        }
        else
        {
            FUNC_1( !VAR_3[VAR_4], "Expected environment block pointer element to be NULL, got %p\n", VAR_3[VAR_4] );
            break;
        }
    }
}
