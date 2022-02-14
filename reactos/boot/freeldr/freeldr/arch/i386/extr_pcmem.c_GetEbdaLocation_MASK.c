
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_8__ {scalar_t__ es; } ;
struct TYPE_7__ {int eax; } ;
struct TYPE_9__ {TYPE_2__ w; TYPE_1__ x; } ;
typedef TYPE_3__ REGS ;
typedef int* PULONG ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__) ;
 int FUNC_1 (int,TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;

__attribute__((used)) static
BOOLEAN
FUNC_3(
    PULONG VAR_2,
    PULONG VAR_3)
{
    REGS VAR_4;

    FUNC_2("GetEbdaLocation()\n");
    VAR_4.x.eax = 0x0000C100;
    FUNC_1(0x15, &VAR_4, &VAR_4);


    if (!FUNC_0(VAR_4))
    {
        return VAR_0;
    }


    *VAR_2 = (ULONG)VAR_4.w.es << 4;
    *VAR_3 = 0xA0000 - *VAR_2;
    return VAR_1;
}
