
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_5__ {size_t Rows; TYPE_1__* Mapping; } ;
struct TYPE_4__ {scalar_t__ Protocol; scalar_t__ SocketType; scalar_t__ AddressFamily; } ;
typedef TYPE_2__* PWINSOCK_MAPPING ;
typedef scalar_t__ INT ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;

BOOL
FUNC_2(
    PWINSOCK_MAPPING VAR_2,
    INT VAR_3,
    INT VAR_4,
    INT VAR_5)
{

    ULONG VAR_6;

    FUNC_0("Called, Mapping rows = %d\n", VAR_2->Rows);


    for (VAR_6 = 0; VAR_6 < VAR_2->Rows; VAR_6++) {
        FUNC_0("Examining: row %d: AF %d type %d proto %d\n",
    VAR_6,
    (INT)VAR_2->Mapping[VAR_6].AddressFamily,
    (INT)VAR_2->Mapping[VAR_6].SocketType,
    (INT)VAR_2->Mapping[VAR_6].Protocol);


        if (((INT)VAR_2->Mapping[VAR_6].AddressFamily == VAR_3) &&
            ((INT)VAR_2->Mapping[VAR_6].SocketType == VAR_4) &&
            ((INT)VAR_2->Mapping[VAR_6].Protocol == VAR_5)) {
            FUNC_0("Found\n");
            return VAR_1;
        }
    }
    FUNC_1("Not found\n");
    return VAR_0;
}
