
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IAssemblyName ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (int **,char const*,int ,int *) ;

__attribute__((used)) static void FUNC_4(void)
{
    static const WCHAR VAR_4[] =
        {'w','i','n','e',0};
    static const WCHAR VAR_5[] =
        {'w','i','n','e',',','v','e','r','s','i','o','n','=','1','.','0','.','0','.','0',0};
    static const WCHAR VAR_6[] =
        {'w','i','n','e',',','v','e','r','s','i','o','n','=','1','.','0','.','0','.','0',',',
         'c','u','l','t','u','r','e','=','n','e','u','t','r','a','l',0};
    static const WCHAR VAR_7[] =
        {'w','i','n','e',',','v','e','r','s','i','o','n','=','1','.','0','.','0','.','0',',',
         'c','u','l','t','u','r','e','=','e','n',0};
    static const WCHAR VAR_8[] =
        {'w','i','n','e',',','v','e','r','s','i','o','n','=','1','.','0','.','0','.','0',',',
         'p','u','b','l','i','c','K','e','y','T','o','k','e','n','=','1','2','3','4','5','6',
         '7','8','9','0','a','b','c','d','e','f',0};
    HRESULT VAR_9;
    IAssemblyName *VAR_10, *VAR_11;

    VAR_9 = FUNC_3( &VAR_10, VAR_4, VAR_1, ((void*)0) );
    FUNC_2( VAR_9 == VAR_3, "got %08x\n", VAR_9 );

    VAR_9 = FUNC_3( &VAR_11, VAR_4, VAR_1, ((void*)0) );
    FUNC_2( VAR_9 == VAR_3, "got %08x\n", VAR_9 );

    if (0) {
    VAR_9 = FUNC_0( VAR_10, ((void*)0), 0 );
    FUNC_2( VAR_9 == VAR_2, "got %08x\n", VAR_9 );

    VAR_9 = FUNC_0( VAR_10, ((void*)0), VAR_0 );
    FUNC_2( VAR_9 == VAR_2, "got %08x\n", VAR_9 );
    }

    VAR_9 = FUNC_0( VAR_10, VAR_10, VAR_0 );
    FUNC_2( VAR_9 == VAR_3, "got %08x\n", VAR_9 );

    VAR_9 = FUNC_0( VAR_10, VAR_11, VAR_0 );
    FUNC_2( VAR_9 == VAR_3, "got %08x\n", VAR_9 );

    FUNC_1( VAR_11 );
    VAR_9 = FUNC_3( &VAR_11, VAR_5, VAR_1, ((void*)0) );
    FUNC_2( VAR_9 == VAR_3, "got %08x\n", VAR_9 );

    VAR_9 = FUNC_0( VAR_10, VAR_11, VAR_0 );
    FUNC_2( VAR_9 == VAR_3, "got %08x\n", VAR_9 );

    FUNC_1( VAR_11 );
    VAR_9 = FUNC_3( &VAR_11, VAR_6, VAR_1, ((void*)0) );
    FUNC_2( VAR_9 == VAR_3, "got %08x\n", VAR_9 );

    VAR_9 = FUNC_0( VAR_10, VAR_11, VAR_0 );
    FUNC_2( VAR_9 == VAR_3, "got %08x\n", VAR_9 );

    FUNC_1( VAR_10 );
    VAR_9 = FUNC_3( &VAR_10, VAR_7, VAR_1, ((void*)0) );
    FUNC_2( VAR_9 == VAR_3, "got %08x\n", VAR_9 );

    VAR_9 = FUNC_0( VAR_10, VAR_11, VAR_0 );
    FUNC_2( VAR_9 == VAR_2, "got %08x\n", VAR_9 );

    FUNC_1( VAR_10 );
    VAR_9 = FUNC_3( &VAR_10, VAR_4, VAR_1, ((void*)0) );
    FUNC_2( VAR_9 == VAR_3, "got %08x\n", VAR_9 );

    FUNC_1( VAR_11 );
    VAR_9 = FUNC_3( &VAR_11, VAR_8, VAR_1, ((void*)0) );
    FUNC_2( VAR_9 == VAR_3, "got %08x\n", VAR_9 );

    VAR_9 = FUNC_0( VAR_10, VAR_11, VAR_0 );
    FUNC_2( VAR_9 == VAR_3, "got %08x\n", VAR_9 );

    FUNC_1( VAR_10 );
    FUNC_1( VAR_11 );
}
