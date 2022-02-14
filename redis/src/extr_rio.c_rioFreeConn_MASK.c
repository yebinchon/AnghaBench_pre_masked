
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int * sds ;
struct TYPE_6__ {scalar_t__ pos; int * buf; } ;
struct TYPE_5__ {TYPE_2__ conn; } ;
struct TYPE_7__ {TYPE_1__ io; } ;
typedef TYPE_3__ rio ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__,int) ;

void FUNC_3(rio *VAR_0, sds *VAR_1) {
    if (VAR_1 && (size_t)VAR_0->io.conn.pos < FUNC_1(VAR_0->io.conn.buf)) {
        if (VAR_0->io.conn.pos > 0) FUNC_2(VAR_0->io.conn.buf, VAR_0->io.conn.pos, -1);
        *VAR_1 = VAR_0->io.conn.buf;
    } else {
        FUNC_0(VAR_0->io.conn.buf);
        if (VAR_1) *VAR_1 = ((void*)0);
    }
    VAR_0->io.conn.buf = ((void*)0);
}
