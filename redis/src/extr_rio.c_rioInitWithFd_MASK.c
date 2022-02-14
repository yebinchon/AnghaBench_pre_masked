
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fd; int buf; scalar_t__ pos; } ;
struct TYPE_7__ {TYPE_1__ fd; } ;
struct TYPE_8__ {TYPE_2__ io; } ;
typedef TYPE_3__ rio ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 () ;

void FUNC_1(rio *VAR_1, int VAR_2) {
    *VAR_1 = VAR_0;
    VAR_1->io.fd.fd = VAR_2;
    VAR_1->io.fd.pos = 0;
    VAR_1->io.fd.buf = FUNC_0();
}
