
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {int iwnd; scalar_t__ msg; int param1; int param2; scalar_t__ type; } ;
struct TYPE_4__ {int count; TYPE_3__ last_post_message; TYPE_3__* message_cache; } ;
typedef scalar_t__ MSG_TYPE ;
typedef int MSG_ENTRY ;
typedef TYPE_1__ MSG_CACHE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;

void FUNC_1(MSG_CACHE* VAR_2, int VAR_3, UINT VAR_4, MSG_TYPE VAR_5, int VAR_6,int VAR_7)
{
    if(VAR_2->count >= 100)
    {
        return;
    }


    if(VAR_5 == VAR_1 &&
       VAR_2->last_post_message.iwnd == VAR_3 &&
       VAR_2->last_post_message.msg == VAR_4 &&
       VAR_2->last_post_message.param1 == VAR_6 &&
       VAR_2->last_post_message.param2 == VAR_7)
    {
        FUNC_0(&VAR_2->last_post_message, 0, sizeof(MSG_ENTRY));
        return;
    }

    VAR_2->message_cache[VAR_2->count].iwnd = VAR_3;
    VAR_2->message_cache[VAR_2->count].msg = VAR_4;
    VAR_2->message_cache[VAR_2->count].type = VAR_5;
    VAR_2->message_cache[VAR_2->count].param1 = VAR_6;
    VAR_2->message_cache[VAR_2->count].param2 = VAR_7;

    if(VAR_2->message_cache[VAR_2->count].type == VAR_0)
    {
        VAR_2->last_post_message = VAR_2->message_cache[VAR_2->count];
    }
    else
    {
        FUNC_0(&VAR_2->last_post_message, 0, sizeof(MSG_ENTRY));
    }

    VAR_2->count++;
}
