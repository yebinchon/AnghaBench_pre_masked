
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_5__ {int Type; int Free; } ;
typedef TYPE_1__* PIP_PACKET ;
typedef int IP_PACKET ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;

PIP_PACKET FUNC_1(
    PIP_PACKET VAR_1,
    ULONG VAR_2)







{
    FUNC_0(VAR_1, sizeof(IP_PACKET));

    VAR_1->Free = VAR_0;
    VAR_1->Type = VAR_2;

    return VAR_1;
}
