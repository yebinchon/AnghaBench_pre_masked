
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t read_limit; int buf; scalar_t__ read_so_far; scalar_t__ pos; int * conn; } ;
struct TYPE_6__ {TYPE_2__ conn; } ;
struct TYPE_8__ {TYPE_1__ io; } ;
typedef TYPE_3__ rio ;
typedef int connection ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(rio *VAR_2, connection *VAR_3, size_t VAR_4) {
    *VAR_2 = VAR_1;
    VAR_2->io.conn.conn = VAR_3;
    VAR_2->io.conn.pos = 0;
    VAR_2->io.conn.read_limit = VAR_4;
    VAR_2->io.conn.read_so_far = 0;
    VAR_2->io.conn.buf = FUNC_1(((void*)0), VAR_0);
    FUNC_0(VAR_2->io.conn.buf);
}
