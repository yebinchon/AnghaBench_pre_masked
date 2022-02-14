
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct web_client {int ifd; int ofd; int id; } ;
struct TYPE_5__ {int sends; } ;
struct TYPE_4__ {int fd; scalar_t__ data; } ;
typedef TYPE_1__ POLLINFO ;


 int VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 int FUNC_0 (int ,char*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct web_client*) ;
 scalar_t__ FUNC_3 (struct web_client*) ;
 scalar_t__ FUNC_4 (struct web_client*) ;
 int FUNC_5 (struct web_client*) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static int FUNC_6(POLLINFO *VAR_4, short int *VAR_5) {
    VAR_3->sends++;

    struct web_client *VAR_6 = (struct web_client *)VAR_4->data;
    int VAR_7 = VAR_4->fd;

    FUNC_0(VAR_0, "%llu: sending data on fd %d.", VAR_6->id, VAR_7);

    if(FUNC_1(FUNC_4(VAR_6) < 0))
        return -1;

    if(FUNC_1(VAR_6->ifd == VAR_7 && FUNC_2(VAR_6)))
        *VAR_5 |= VAR_1;

    if(FUNC_1(VAR_6->ofd == VAR_7 && FUNC_3(VAR_6)))
        *VAR_5 |= VAR_2;

    return FUNC_5(VAR_6);
}
