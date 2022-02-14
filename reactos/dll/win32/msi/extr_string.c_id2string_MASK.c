
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int codepage; int maxcount; } ;
typedef TYPE_1__ string_table ;
typedef int WCHAR ;
typedef int UINT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int ,int ,int const*,int,char*,int,int *,int *) ;
 int * FUNC_2 (TYPE_1__ const*,int,int*) ;

__attribute__((used)) static UINT FUNC_3( const string_table *VAR_3, UINT VAR_4, char *VAR_5, UINT *VAR_6 )
{
    int VAR_7, VAR_8;
    const WCHAR *VAR_9;

    FUNC_0("Finding string %d of %d\n", VAR_4, VAR_3->maxcount);

    VAR_9 = FUNC_2( VAR_3, VAR_4, &VAR_8 );
    if( !VAR_9 )
        return VAR_0;

    VAR_7 = FUNC_1( VAR_3->codepage, 0, VAR_9, VAR_8, ((void*)0), 0, ((void*)0), ((void*)0) );
    if( *VAR_6 < VAR_7 )
    {
        *VAR_6 = VAR_7;
        return VAR_1;
    }
    *VAR_6 = FUNC_1( VAR_3->codepage, 0, VAR_9, VAR_8, VAR_5, *VAR_6, ((void*)0), ((void*)0) );
    return VAR_2;
}
