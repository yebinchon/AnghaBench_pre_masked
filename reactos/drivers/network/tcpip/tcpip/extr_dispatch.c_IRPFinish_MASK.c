
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ Status; } ;
struct TYPE_7__ {TYPE_1__ IoStatus; } ;
typedef TYPE_2__* PIRP ;
typedef scalar_t__ NTSTATUS ;
typedef int KIRQL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 scalar_t__ VAR_1 ;

NTSTATUS FUNC_4( PIRP VAR_2, NTSTATUS VAR_3 ) {
    KIRQL VAR_4;

    if (VAR_3 != VAR_1) {
        VAR_2->IoStatus.Status = VAR_3;
        FUNC_0(&VAR_4);
        (void)FUNC_3( VAR_2, ((void*)0) );
        FUNC_2(VAR_4);

        FUNC_1( VAR_2, VAR_0 );
    }

    return VAR_3;
}
