
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int S_addr; } ;
struct TYPE_8__ {TYPE_1__ S_un; } ;
struct TYPE_7__ {int dwType; int * bPhysAddr; int dwAddr; } ;
typedef int TCHAR ;
typedef TYPE_2__* PMIB_IPNETROW ;
typedef TYPE_3__ IN_ADDR ;
typedef int INT ;


 int VAR_0 ;




 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,...) ;
 int FUNC_3 (TYPE_3__) ;

INT FUNC_4(PMIB_IPNETROW VAR_1)
{
    IN_ADDR VAR_2;
    TCHAR VAR_3[20];


    VAR_2.S_un.S_addr = VAR_1->dwAddr;
    FUNC_2(FUNC_0("  %-22s"), FUNC_3(VAR_2));


    FUNC_1(VAR_3, FUNC_0("%02x-%02x-%02x-%02x-%02x-%02x"),
        VAR_1->bPhysAddr[0],
        VAR_1->bPhysAddr[1],
        VAR_1->bPhysAddr[2],
        VAR_1->bPhysAddr[3],
        VAR_1->bPhysAddr[4],
        VAR_1->bPhysAddr[5]);
    FUNC_2(FUNC_0("%-22s"), VAR_3);


    switch (VAR_1->dwType)
    {
        case 131 : FUNC_2(FUNC_0("dynamic\n"));
                                      break;
        case 128 : FUNC_2(FUNC_0("static\n"));
                                      break;
        case 130 : FUNC_2(FUNC_0("invalid\n"));
                                      break;
        case 129 : FUNC_2(FUNC_0("other\n"));
                                      break;
    }
    return VAR_0;
}
