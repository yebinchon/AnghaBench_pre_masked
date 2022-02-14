
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct _sei_message_t {size_t size; int type; scalar_t__ next; } ;
typedef int sei_msgtype_t ;
typedef int sei_message_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int *,size_t) ;
 int FUNC_2 (int ,int ,size_t) ;
 int FUNC_3 (struct _sei_message_t*) ;

sei_message_t* FUNC_4(sei_msgtype_t VAR_0, uint8_t* VAR_1, size_t VAR_2)
{
    struct _sei_message_t* VAR_3 = (struct _sei_message_t*)FUNC_0(sizeof(struct _sei_message_t) + VAR_2);
    VAR_3->next = 0;
    VAR_3->type = VAR_0;
    VAR_3->size = VAR_2;

    if (VAR_1) {
        FUNC_1(FUNC_3(VAR_3), VAR_1, VAR_2);
    } else {
        FUNC_2(FUNC_3(VAR_3), 0, VAR_2);
    }

    return (sei_message_t*)VAR_3;
}
