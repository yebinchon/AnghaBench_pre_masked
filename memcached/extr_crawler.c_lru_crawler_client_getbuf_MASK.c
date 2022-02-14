
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* cbuf; int buf; int * c; } ;
typedef TYPE_1__ crawler_client_t ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(crawler_client_t *VAR_1) {
    void *VAR_2 = ((void*)0);
    if (VAR_1->c == ((void*)0)) return -1;

    while ((VAR_2 = FUNC_0(VAR_1->buf, VAR_0)) == ((void*)0)) {

        int VAR_3 = FUNC_1(VAR_1);
        if (VAR_3 < 0) return VAR_3;
    }

    VAR_1->cbuf = VAR_2;
    return 0;
}
