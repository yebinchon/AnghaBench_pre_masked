
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_4__ {int IPv4Address; } ;
struct TYPE_5__ {int Type; TYPE_1__ Address; } ;
typedef TYPE_2__* PIP_ADDRESS ;
typedef int PCHAR ;
typedef int INT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;


 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int,int,int,int) ;
 int FUNC_3 (int ,char*) ;

PCHAR FUNC_4(
    PIP_ADDRESS VAR_2)







{
    ULONG VAR_3;
    PCHAR VAR_4;

    VAR_4 = VAR_0;

    if (!VAR_2) {
        FUNC_1(VAR_1, ("NULL address given.\n"));
        FUNC_3(VAR_4, "(NULL)");
        return VAR_4;
    }

    switch (VAR_2->Type) {
    case 129:
 VAR_3 = FUNC_0(VAR_2->Address.IPv4Address);
 FUNC_2(VAR_4, "%d.%d.%d.%d",
  (INT)((VAR_3 >> 24) & 0xFF),
  (INT)((VAR_3 >> 16) & 0xFF),
  (INT)((VAR_3 >> 8) & 0xFF),
  (INT)(VAR_3 & 0xFF));
 break;

    case 128:

 FUNC_3(VAR_4, "(IPv6 address not supported)");
 break;
    }
    return VAR_4;
}
