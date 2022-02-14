
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int FUNC_0 (int*,char***,char***,int ,int*) ;
 int FUNC_1 (int*,char***,char***,int ,int*) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (int,char*,...) ;
 char*** FUNC_5 () ;
 int FUNC_6 (char***) ;
 char*** VAR_0 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    static const WCHAR VAR_1[] = {'c','a','t','=','d','o','g',0};
    static const WCHAR VAR_2[] = {'c','a','t','=',0};

    int VAR_3;
    char **VAR_4, **VAR_5 = ((void*)0);
    WCHAR **VAR_6, **VAR_7 = ((void*)0);
    int VAR_8, VAR_9 = 0;

    FUNC_4( VAR_0 != ((void*)0), "Expected the pointer to _wenviron to be non-NULL\n" );
    if (VAR_0)
        FUNC_4( *VAR_0 == ((void*)0), "Expected _wenviron to be NULL, got %p\n", *VAR_0 );
    else
    {
        FUNC_8( "Pointer to _wenviron is not valid\n" );
        return;
    }


    if (&FUNC_5)
    {
        FUNC_4( *FUNC_5() == ((void*)0),
            "Expected _wenviron pointers to be NULL\n" );
    }
    else
        FUNC_7( "__p__wenviron() is not available\n" );

    if (&FUNC_6)
    {
        WCHAR **VAR_10;
        FUNC_6(&VAR_10);
        FUNC_4( VAR_10 == ((void*)0),
            "Expected _wenviron pointers to be NULL\n" );
    }
    else
        FUNC_8( "_get_wenviron() is not available\n" );


    FUNC_0(&VAR_3, &VAR_4, &VAR_5, 0, &VAR_9);

    FUNC_4( *VAR_0 == ((void*)0), "Expected _wenviron to be NULL, got %p\n", *VAR_0);
    FUNC_4( VAR_5 != ((void*)0), "Expected initial environment block pointer to be non-NULL\n" );
    if (!VAR_5)
    {
        FUNC_7( "Initial environment block pointer is not valid\n" );
        return;
    }


    FUNC_4( FUNC_2("cat=dog") == 0, "failed setting cat=dog\n" );
    FUNC_4( *VAR_0 == ((void*)0), "Expected _wenviron to be NULL, got %p\n", *VAR_0);
    FUNC_4( FUNC_2("cat=") == 0, "failed deleting cat\n" );



    FUNC_4( FUNC_3(VAR_1) == 0, "failed setting cat=dog\n" );
    FUNC_4( *VAR_0 != ((void*)0), "Expected _wenviron to be non-NULL\n" );
    FUNC_4( FUNC_3(VAR_2) == 0, "failed deleting cat\n" );

    FUNC_1(&VAR_3, &VAR_6, &VAR_7, 0, &VAR_9);

    FUNC_4( *VAR_0 != ((void*)0), "Expected _wenviron to be non-NULL\n" );
    FUNC_4( VAR_7 != ((void*)0), "Expected initial environment block pointer to be non-NULL\n" );
    if (!VAR_7)
    {
        FUNC_7( "Initial environment block pointer is not valid\n" );
        return;
    }



    if (&FUNC_5)
    {
        FUNC_4( *FUNC_5() == *VAR_0,
            "Expected _wenviron pointers to be identical\n" );
    }

    if (&FUNC_6)
    {
        WCHAR **VAR_11;
        FUNC_6(&VAR_11);
        FUNC_4( VAR_11 == *VAR_0,
            "Expected _wenviron pointers to be identical\n" );
    }

    for (VAR_8 = 0; ; VAR_8++)
    {
        if ((*VAR_0)[VAR_8])
        {
            FUNC_4( VAR_7[VAR_8] != ((void*)0), "Expected environment block pointer element to be non-NULL\n" );
            FUNC_4( !FUNC_10((*VAR_0)[VAR_8], VAR_7[VAR_8]),
                "Expected _wenviron and environment block pointer strings (%s vs. %s) to match\n",
                FUNC_9((*VAR_0)[VAR_8]), FUNC_9(VAR_7[VAR_8]) );
        }
        else
        {
            FUNC_4( !VAR_7[VAR_8], "Expected environment block pointer element to be NULL, got %p\n", VAR_7[VAR_8] );
            break;
        }
    }
}
