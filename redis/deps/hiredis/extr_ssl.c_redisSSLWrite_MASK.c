
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t lastLen; int ssl; } ;
typedef TYPE_1__ redisSSLContext ;
struct TYPE_7__ {int flags; int obuf; TYPE_1__* privdata; } ;
typedef TYPE_2__ redisContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,size_t) ;
 int FUNC_2 (TYPE_2__*,int ,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 size_t FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(redisContext *VAR_2) {
    redisSSLContext *VAR_3 = VAR_2->privdata;

    size_t VAR_4 = VAR_3->lastLen ? VAR_3->lastLen : FUNC_4(VAR_2->obuf);
    int VAR_5 = FUNC_1(VAR_3->ssl, VAR_2->obuf, VAR_4);

    if (VAR_5 > 0) {
        VAR_3->lastLen = 0;
    } else if (VAR_5 < 0) {
        VAR_3->lastLen = VAR_4;

        int VAR_6 = FUNC_0(VAR_3->ssl, VAR_5);
        if ((VAR_2->flags & VAR_0) == 0 && FUNC_3(VAR_3, VAR_6)) {
            return 0;
        } else {
            FUNC_2(VAR_2, VAR_1, ((void*)0));
            return -1;
        }
    }
    return VAR_5;
}
