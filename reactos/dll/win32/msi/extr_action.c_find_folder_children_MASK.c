
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {int Parent; } ;
typedef int MSIRECORD ;
typedef int MSIPACKAGE ;
typedef TYPE_1__ MSIFOLDER ;
typedef int * LPVOID ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *,int ) ;

__attribute__((used)) static UINT FUNC_3( MSIRECORD *VAR_2, LPVOID VAR_3 )
{
    MSIPACKAGE *VAR_4 = VAR_3;
    MSIFOLDER *VAR_5, *VAR_6;

    if (!(VAR_6 = FUNC_2( VAR_4, FUNC_0( VAR_2, 1 ) )))
        return VAR_0;

    if (!VAR_6->Parent) return VAR_1;

    if (!(VAR_5 = FUNC_2( VAR_4, VAR_6->Parent )))
        return VAR_0;

    return FUNC_1( VAR_5, VAR_6 );
}
