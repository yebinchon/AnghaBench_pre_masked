
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t pos; size_t read_limit; size_t read_so_far; scalar_t__ buf; int conn; } ;
struct TYPE_6__ {TYPE_1__ conn; } ;
struct TYPE_7__ {TYPE_2__ io; } ;
typedef TYPE_3__ rio ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,char*,size_t) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (void*,char*,size_t) ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (scalar_t__,size_t) ;
 size_t FUNC_4 (scalar_t__) ;
 size_t FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,size_t,int) ;

__attribute__((used)) static size_t FUNC_7(rio *VAR_5, void *VAR_6, size_t VAR_7) {
    size_t VAR_8 = FUNC_5(VAR_5->io.conn.buf)-VAR_5->io.conn.pos;


    if (FUNC_5(VAR_5->io.conn.buf) + FUNC_4(VAR_5->io.conn.buf) < VAR_7)
        VAR_5->io.conn.buf = FUNC_3(VAR_5->io.conn.buf, VAR_7 - FUNC_5(VAR_5->io.conn.buf));



    if (VAR_7 > VAR_8 && FUNC_4(VAR_5->io.conn.buf) < VAR_7 - VAR_8) {
        FUNC_6(VAR_5->io.conn.buf, VAR_5->io.conn.pos, -1);
        VAR_5->io.conn.pos = 0;
    }


    while (VAR_7 > FUNC_5(VAR_5->io.conn.buf) - VAR_5->io.conn.pos) {
        size_t VAR_9 = FUNC_5(VAR_5->io.conn.buf) - VAR_5->io.conn.pos;
        size_t VAR_10 = VAR_7 - VAR_9;


        if (VAR_10 < VAR_3) VAR_10 = VAR_3;
        if (VAR_10 > FUNC_4(VAR_5->io.conn.buf)) VAR_10 = FUNC_4(VAR_5->io.conn.buf);
        if (VAR_5->io.conn.read_limit != 0 &&
            VAR_5->io.conn.read_so_far + VAR_9 + VAR_10 > VAR_5->io.conn.read_limit)
        {
            if (VAR_5->io.conn.read_limit >= VAR_5->io.conn.read_so_far - VAR_9)
                VAR_10 = VAR_5->io.conn.read_limit - VAR_5->io.conn.read_so_far - VAR_9;
            else {
                VAR_4 = VAR_0;
                return 0;
            }
        }
        int VAR_11 = FUNC_0(VAR_5->io.conn.conn,
                          (char*)VAR_5->io.conn.buf + FUNC_5(VAR_5->io.conn.buf),
                          VAR_10);
        if (VAR_11 <= 0) {
            if (VAR_4 == VAR_2) VAR_4 = VAR_1;
            return 0;
        }
        FUNC_2(VAR_5->io.conn.buf, VAR_11);
    }

    FUNC_1(VAR_6, (char*)VAR_5->io.conn.buf + VAR_5->io.conn.pos, VAR_7);
    VAR_5->io.conn.read_so_far += VAR_7;
    VAR_5->io.conn.pos += VAR_7;
    return VAR_7;
}
