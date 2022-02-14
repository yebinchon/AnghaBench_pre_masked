
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_5__ {size_t pos; scalar_t__ buf; int fd; } ;
struct TYPE_6__ {TYPE_1__ fd; } ;
struct TYPE_7__ {TYPE_2__ io; } ;
typedef TYPE_3__ rio ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,void const*,size_t) ;
 int FUNC_1 (scalar_t__) ;
 size_t FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,unsigned char*,size_t) ;

__attribute__((used)) static size_t FUNC_4(rio *VAR_4, const void *VAR_5, size_t VAR_6) {
    ssize_t VAR_7;
    unsigned char *VAR_8 = (unsigned char*) VAR_5;
    int VAR_9 = (VAR_5 == ((void*)0) && VAR_6 == 0);





    if (VAR_6 > VAR_2) {

        if (FUNC_2(VAR_4->io.fd.buf)) {
            if (FUNC_4(VAR_4, ((void*)0), 0) == 0)
                return 0;
        }

    } else {
        if (VAR_6) {
            VAR_4->io.fd.buf = FUNC_0(VAR_4->io.fd.buf,VAR_5,VAR_6);
            if (FUNC_2(VAR_4->io.fd.buf) > VAR_2)
                VAR_9 = 1;
            if (!VAR_9)
                return 1;
        }

        VAR_8 = (unsigned char*) VAR_4->io.fd.buf;
        VAR_6 = FUNC_2(VAR_4->io.fd.buf);
    }

    size_t VAR_10 = 0;
    while(VAR_10 != VAR_6) {
        VAR_7 = FUNC_3(VAR_4->io.fd.fd,VAR_8+VAR_10,VAR_6-VAR_10);
        if (VAR_7 <= 0) {




            if (VAR_7 == -1 && VAR_3 == VAR_1) VAR_3 = VAR_0;
            return 0;
        }
        VAR_10 += VAR_7;
    }

    VAR_4->io.fd.pos += VAR_6;
    FUNC_1(VAR_4->io.fd.buf);
    return 1;
}
