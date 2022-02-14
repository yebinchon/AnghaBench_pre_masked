
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int iString; } ;
typedef TYPE_1__ TBUTTON_INFO ;
typedef int INT_PTR ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int **,char*) ;
 int FUNC_3 (int **,int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5( TBUTTON_INFO *VAR_0, INT_PTR VAR_1, BOOL VAR_2 )
{
    if (!FUNC_1( VAR_1 ) && VAR_1 != -1)
    {
        if (!FUNC_4( VAR_0 )) VAR_0->iString = 0;

        if (VAR_2)
            FUNC_3( (WCHAR **)&VAR_0->iString, (WCHAR *)VAR_1 );
        else
            FUNC_2( (WCHAR **)&VAR_0->iString, (char *)VAR_1 );
    }
    else
    {
        if (FUNC_4( VAR_0 )) FUNC_0( (WCHAR *)VAR_0->iString );

        VAR_0->iString = VAR_1;
    }
}
