
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct array {int count; scalar_t__ ptr; } ;
typedef int WCHAR ;
typedef scalar_t__ VARTYPE ;
typedef int UINT ;
typedef int SAFEARRAY ;
typedef int LONG ;
typedef int CIMTYPE ;
typedef void* BSTR ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (scalar_t__,int ,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int*,void*) ;
 void* FUNC_3 (int const*) ;
 int FUNC_4 (void*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

SAFEARRAY *FUNC_7( const struct array *VAR_2, CIMTYPE VAR_3 )
{
    SAFEARRAY *VAR_4;
    UINT VAR_5 = FUNC_5( VAR_3 );
    VARTYPE VAR_6 = FUNC_6( VAR_3 );
    LONG VAR_7;

    if (!VAR_2 || !(VAR_4 = FUNC_0( VAR_6, 0, VAR_2->count ))) return ((void*)0);

    for (VAR_7 = 0; VAR_7 < VAR_2->count; VAR_7++)
    {
        void *VAR_8 = (char *)VAR_2->ptr + VAR_7 * VAR_5;
        if (VAR_6 == VAR_1)
        {
            BSTR VAR_9 = FUNC_3( *(const WCHAR **)VAR_8 );
            if (!VAR_9 || FUNC_2( VAR_4, &VAR_7, VAR_9 ) != VAR_0)
            {
                FUNC_4( VAR_9 );
                FUNC_1( VAR_4 );
                return ((void*)0);
            }
            FUNC_4( VAR_9 );
        }
        else if (FUNC_2( VAR_4, &VAR_7, VAR_8 ) != VAR_0)
        {
            FUNC_1( VAR_4 );
            return ((void*)0);
        }
    }
    return VAR_4;
}
