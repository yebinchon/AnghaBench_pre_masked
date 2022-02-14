
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dwMagic; scalar_t__ cvinfo; } ;
typedef int LRESULT ;
typedef TYPE_1__ ICCVID_Info ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static LRESULT FUNC_2( ICCVID_Info *VAR_1 )
{
    if( (VAR_1==((void*)0)) || (VAR_1->dwMagic!=VAR_0) )
        return 0;
    if( VAR_1->cvinfo )
        FUNC_0( VAR_1->cvinfo );
    FUNC_1( VAR_1 );
    return 1;
}
