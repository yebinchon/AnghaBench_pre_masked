
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int timestamp; } ;
typedef TYPE_1__ sei_t ;
struct TYPE_10__ {int size; } ;
typedef TYPE_2__ sei_message_t ;
typedef int cea708_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_1 ;

void FUNC_6(sei_t* VAR_2, cea708_t* VAR_3)
{
    sei_message_t* VAR_4 = FUNC_4(VAR_1, 0, VAR_0);
    VAR_4->size = FUNC_1(VAR_3, FUNC_3(VAR_4), FUNC_5(VAR_4));
    FUNC_2(VAR_2, VAR_4);
    FUNC_0(VAR_3, VAR_2->timestamp);
}
