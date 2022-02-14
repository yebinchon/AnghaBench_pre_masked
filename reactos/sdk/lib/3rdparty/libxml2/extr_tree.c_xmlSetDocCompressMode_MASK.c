
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlDocPtr ;
struct TYPE_3__ {int compression; } ;



void
FUNC_0 (xmlDocPtr VAR_0, int VAR_1) {
    if (VAR_0 == ((void*)0)) return;
    if (VAR_1 < 0) VAR_0->compression = 0;
    else if (VAR_1 > 9) VAR_0->compression = 9;
    else VAR_0->compression = VAR_1;
}
