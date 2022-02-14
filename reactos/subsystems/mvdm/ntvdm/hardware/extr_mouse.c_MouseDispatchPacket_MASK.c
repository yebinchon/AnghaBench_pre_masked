
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int Extra; int VertCounter; int HorzCounter; int Flags; } ;
typedef TYPE_1__* PMOUSE_PACKET ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static VOID FUNC_1(PMOUSE_PACKET VAR_2)
{
    FUNC_0(VAR_1, VAR_2->Flags);
    FUNC_0(VAR_1, VAR_2->HorzCounter);
    FUNC_0(VAR_1, VAR_2->VertCounter);
    if (VAR_0 >= 3) FUNC_0(VAR_1, VAR_2->Extra);
}
