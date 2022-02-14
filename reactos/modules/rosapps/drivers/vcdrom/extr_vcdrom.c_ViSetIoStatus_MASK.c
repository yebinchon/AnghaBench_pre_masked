
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG_PTR ;
struct TYPE_4__ {int Status; int Information; } ;
struct TYPE_5__ {TYPE_1__ IoStatus; } ;
typedef TYPE_2__* PIRP ;
typedef int NTSTATUS ;



NTSTATUS
FUNC_0(NTSTATUS VAR_0, ULONG_PTR VAR_1, PIRP VAR_2)
{

    VAR_2->IoStatus.Information = VAR_1;
    VAR_2->IoStatus.Status = VAR_0;


    return VAR_0;
}
