
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int Param; int (* DeviceCommand ) (int ,size_t) ;int IsEnabled; } ;
typedef TYPE_1__* PPS2_PORT ;
typedef size_t BYTE ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,size_t) ;

__attribute__((used)) static VOID FUNC_2(BYTE VAR_6, BYTE VAR_7)
{
    PPS2_PORT VAR_8;

    FUNC_0(VAR_6 < VAR_3);
    VAR_8 = &VAR_4[VAR_6];





    if (VAR_6 == 0)
        VAR_0 &= ~VAR_2;
    else
        VAR_0 &= ~VAR_1;

    VAR_8->IsEnabled = VAR_5;


    if (VAR_8->DeviceCommand) VAR_8->DeviceCommand(VAR_8->Param, VAR_7);
}
