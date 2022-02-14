
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* USHORT ;
struct TYPE_7__ {int Flink; } ;
struct TYPE_6__ {int Next; void* Protocol; void* Port; int Address; } ;
typedef int PIP_ADDRESS ;
typedef TYPE_1__* PAF_SEARCH ;
typedef int PADDRESS_FILE ;
typedef int KIRQL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ) ;

PADDRESS_FILE FUNC_6(
    PIP_ADDRESS VAR_4,
    USHORT VAR_5,
    USHORT VAR_6,
    PAF_SEARCH VAR_7)
{
    KIRQL VAR_8;

    VAR_7->Address = VAR_4;
    VAR_7->Port = VAR_5;
    VAR_7->Protocol = VAR_6;

    FUNC_4(&VAR_2, &VAR_8);

    VAR_7->Next = VAR_1.Flink;

    if (!FUNC_2(&VAR_1))
        FUNC_3(FUNC_1(VAR_7->Next, VAR_0, VAR_3));

    FUNC_5(&VAR_2, VAR_8);

    return FUNC_0(VAR_7);
}
