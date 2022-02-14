
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int buf; int cbuf; int * c; } ;
struct TYPE_4__ {TYPE_2__ c; } ;
typedef TYPE_1__ crawler_module_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void FUNC_3(crawler_module_t *VAR_0) {
    if (VAR_0->c.c != ((void*)0)) {

        FUNC_1(&VAR_0->c);
        FUNC_2(VAR_0->c.cbuf, "END\r\n", 5);
        FUNC_0(VAR_0->c.buf, 5);
    }
}
