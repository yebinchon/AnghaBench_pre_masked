
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buf; int pos; int len; } ;
typedef TYPE_1__ redisReader ;


 char* FUNC_0 (char*,int) ;

__attribute__((used)) static char *FUNC_1(redisReader *VAR_0, int *VAR_1) {
    char *VAR_2, *VAR_3;
    int VAR_4;

    VAR_2 = VAR_0->buf+VAR_0->pos;
    VAR_3 = FUNC_0(VAR_2,(VAR_0->len-VAR_0->pos));
    if (VAR_3 != ((void*)0)) {
        VAR_4 = VAR_3-(VAR_0->buf+VAR_0->pos);
        VAR_0->pos += VAR_4+2;
        if (VAR_1) *VAR_1 = VAR_4;
        return VAR_2;
    }
    return ((void*)0);
}
