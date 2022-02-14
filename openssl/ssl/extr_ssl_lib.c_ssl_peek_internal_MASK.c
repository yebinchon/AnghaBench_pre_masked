
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* func_read ) (TYPE_3__*,void*,size_t,size_t*) ;} ;
struct ssl_async_args {size_t num; TYPE_1__ f; int type; void* buf; TYPE_3__* s; } ;
struct TYPE_9__ {int shutdown; int mode; size_t asyncrw; TYPE_2__* method; int * handshake_func; } ;
struct TYPE_8__ {int (* ssl_peek ) (TYPE_3__*,void*,size_t,size_t*) ;} ;
typedef TYPE_3__ SSL ;


 int * FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_3__*,struct ssl_async_args*,int ) ;
 int FUNC_3 (TYPE_3__*,void*,size_t,size_t*) ;

__attribute__((used)) static int FUNC_4(SSL *VAR_6, void *VAR_7, size_t VAR_8, size_t *VAR_9)
{
    if (VAR_6->handshake_func == ((void*)0)) {
        FUNC_1(VAR_1, VAR_4);
        return -1;
    }

    if (VAR_6->shutdown & VAR_3) {
        return 0;
    }
    if ((VAR_6->mode & VAR_2) && FUNC_0() == ((void*)0)) {
        struct ssl_async_args VAR_10;
        int VAR_11;

        VAR_10.s = VAR_6;
        VAR_10.buf = VAR_7;
        VAR_10.num = VAR_8;
        VAR_10.type = VAR_0;
        VAR_10.f.func_read = VAR_6->method->ssl_peek;

        VAR_11 = FUNC_2(VAR_6, &VAR_10, VAR_5);
        *VAR_9 = VAR_6->asyncrw;
        return VAR_11;
    } else {
        return VAR_6->method->ssl_peek(VAR_6, VAR_7, VAR_8, VAR_9);
    }
}
