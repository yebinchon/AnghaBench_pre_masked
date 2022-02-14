
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * cvinfo; } ;
typedef int LRESULT ;
typedef TYPE_1__ ICCVID_Info ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static LRESULT FUNC_1( ICCVID_Info *VAR_1 )
{
    if( VAR_1->cvinfo )
    {
        FUNC_0( VAR_1->cvinfo );
        VAR_1->cvinfo = ((void*)0);
    }
    return VAR_0;
}
