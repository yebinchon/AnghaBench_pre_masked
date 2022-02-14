
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ autosync; scalar_t__ buffered; int * fp; } ;
struct TYPE_7__ {TYPE_1__ file; } ;
struct TYPE_8__ {TYPE_2__ io; } ;
typedef TYPE_3__ rio ;
typedef int FILE ;


 TYPE_3__ VAR_0 ;

void FUNC_0(rio *VAR_1, FILE *VAR_2) {
    *VAR_1 = VAR_0;
    VAR_1->io.file.fp = VAR_2;
    VAR_1->io.file.buffered = 0;
    VAR_1->io.file.autosync = 0;
}
