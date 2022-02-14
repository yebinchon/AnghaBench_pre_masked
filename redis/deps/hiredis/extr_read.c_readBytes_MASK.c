
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int len; unsigned int pos; char* buf; } ;
typedef TYPE_1__ redisReader ;



__attribute__((used)) static char *FUNC_0(redisReader *VAR_0, unsigned int VAR_1) {
    char *VAR_2;
    if (VAR_0->len-VAR_0->pos >= VAR_1) {
        VAR_2 = VAR_0->buf+VAR_0->pos;
        VAR_0->pos += VAR_1;
        return VAR_2;
    }
    return ((void*)0);
}
