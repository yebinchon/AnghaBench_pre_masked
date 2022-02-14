
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int guid ;
typedef int WCHAR ;
typedef int UINT32 ;
struct TYPE_4__ {int Data1; } ;
typedef TYPE_1__ GUID ;


 int FUNC_0 (int **) ;
 int FUNC_1 (TYPE_1__*,int **) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static WCHAR *FUNC_4( UINT32 VAR_0 )
{
    GUID VAR_1;
    WCHAR *VAR_2, *VAR_3;
    FUNC_3( &VAR_1, 0, sizeof(VAR_1) );
    VAR_1.Data1 = VAR_0;
    FUNC_1( &VAR_1, &VAR_3 );
    VAR_2 = FUNC_2( VAR_3 );
    FUNC_0( &VAR_3 );
    return VAR_2;
}
