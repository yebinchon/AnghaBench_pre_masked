
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int MajorFunction; } ;
struct TYPE_11__ {int Status; } ;
struct TYPE_12__ {TYPE_1__ IoStatus; } ;
typedef TYPE_2__* PIRP ;
typedef TYPE_3__* PIO_STACK_LOCATION ;
typedef int PDEVICE_OBJECT ;
typedef int NTSTATUS ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;



 int FUNC_1 (TYPE_2__*,int ) ;
 TYPE_3__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_1 ;

NTSTATUS
FUNC_6(
    PDEVICE_OBJECT VAR_2,
    PIRP VAR_3)
{
    PIO_STACK_LOCATION VAR_4;
    NTSTATUS VAR_5;


    VAR_4 = FUNC_2(VAR_3);

    switch(VAR_4->MajorFunction)
    {
        case 129:
            return FUNC_4(VAR_2, VAR_3);
        case 130:
            return FUNC_3(VAR_2, VAR_3);
        case 128:
            FUNC_5(VAR_3);
            VAR_3->IoStatus.Status = VAR_1;
            FUNC_1(VAR_3, VAR_0);
            return VAR_1;
        default:
            FUNC_0("PDO_Dispatch Function %x not implemented\n", VAR_4->MajorFunction);
            VAR_5 = VAR_3->IoStatus.Status;
            FUNC_1(VAR_3, VAR_0);
            return VAR_5;
    }
}
