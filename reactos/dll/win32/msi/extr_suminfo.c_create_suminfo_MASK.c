
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int * storage; int update_count; } ;
typedef TYPE_1__ MSISUMMARYINFO ;
typedef int IStorage ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ,int,int ) ;

__attribute__((used)) static MSISUMMARYINFO *FUNC_2( IStorage *VAR_2, UINT VAR_3 )
{
    MSISUMMARYINFO *VAR_4;

    if (!(VAR_4 = FUNC_1( VAR_0, sizeof(MSISUMMARYINFO), VAR_1 )))
        return ((void*)0);

    VAR_4->update_count = VAR_3;
    FUNC_0( VAR_2 );
    VAR_4->storage = VAR_2;

    return VAR_4;
}
