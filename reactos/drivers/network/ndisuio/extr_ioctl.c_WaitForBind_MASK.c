
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ Information; int Status; } ;
struct TYPE_6__ {TYPE_1__ IoStatus; } ;
typedef TYPE_2__* PIRP ;
typedef int PIO_STACK_LOCATION ;
typedef int NTSTATUS ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_1 ;

__attribute__((used)) static
NTSTATUS
FUNC_2(PIRP VAR_2, PIO_STACK_LOCATION VAR_3)
{




    FUNC_0("Wait for bind complete\n");

    VAR_2->IoStatus.Status = VAR_1;
    VAR_2->IoStatus.Information = 0;

    FUNC_1(VAR_2, VAR_0);

    return VAR_1;
}
