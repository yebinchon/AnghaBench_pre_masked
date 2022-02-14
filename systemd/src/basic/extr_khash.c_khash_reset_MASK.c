
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_4__ {int digest_valid; int fd; } ;
typedef TYPE_1__ khash ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int *,int ,int ) ;

int FUNC_2(khash *VAR_1) {
        ssize_t VAR_2;

        FUNC_0(VAR_1);

        VAR_2 = FUNC_1(VAR_1->fd, ((void*)0), 0, 0);
        if (VAR_2 < 0)
                return -VAR_0;

        VAR_1->digest_valid = 0;

        return 0;
}
