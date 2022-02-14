
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* VAR_0 ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (int *,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    FUNC_2( FUNC_0("cat=") == 0, "_putenv failed on deletion of nonexistent environment variable\n" );
    FUNC_2( FUNC_0("cat=dog") == 0, "failed setting cat=dog\n" );
    FUNC_2( FUNC_3(FUNC_1("cat"), "dog") == 0, "getenv did not return 'dog'\n" );
    FUNC_2( FUNC_0("cat=") == 0, "failed deleting cat\n" );

    FUNC_2( FUNC_0("=") == -1, "should not accept '=' as input\n" );
    FUNC_2( FUNC_0("=dog") == -1, "should not accept '=dog' as input\n" );
    FUNC_2( FUNC_0(VAR_0) == 0, "_putenv failed for long environment string\n");

    FUNC_2( FUNC_1("nonexistent") == ((void*)0), "getenv should fail with nonexistent var name\n" );
}
