
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ end; scalar_t__ start; int * data; int length; } ;
typedef TYPE_1__ byteQueue_t ;
typedef int byteQueueIndex_t ;



void FUNC_0(byteQueue_t* VAR_0, uint8_t* VAR_1, byteQueueIndex_t VAR_2) {
    VAR_0->length = VAR_2;
    VAR_0->data = VAR_1;
    VAR_0->start = VAR_0->end = 0;
}
