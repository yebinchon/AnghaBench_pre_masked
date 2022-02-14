
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ if_type; } ;
struct TYPE_5__ {TYPE_1__ ent; } ;
typedef int TDIEntityID ;
typedef int NTSTATUS ;
typedef TYPE_2__ IFEntrySafelySized ;
typedef int HANDLE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,TYPE_2__*) ;

BOOL FUNC_2( HANDLE VAR_1, TDIEntityID *VAR_2 ) {
    IFEntrySafelySized VAR_3;
    NTSTATUS VAR_4;

    VAR_4 = FUNC_1( VAR_1,
                                   VAR_2,
                                   &VAR_3 );

    return FUNC_0(VAR_4) &&
           (VAR_3.ent.if_type == VAR_0);
}
