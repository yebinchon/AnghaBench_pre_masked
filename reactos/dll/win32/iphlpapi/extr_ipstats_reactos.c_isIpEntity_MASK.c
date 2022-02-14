
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tei_entity; } ;
typedef TYPE_1__ TDIEntityID ;
typedef int HANDLE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

BOOL FUNC_0( HANDLE VAR_2, TDIEntityID *VAR_3 ) {
    return (VAR_3->tei_entity == VAR_0 ||
            VAR_3->tei_entity == VAR_1);
}
