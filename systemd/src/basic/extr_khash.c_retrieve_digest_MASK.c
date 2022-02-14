
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_4__ {int digest_valid; size_t digest_size; int digest; int fd; } ;
typedef TYPE_1__ khash ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int ,size_t,int ) ;

__attribute__((used)) static int FUNC_2(khash *VAR_1) {
        ssize_t VAR_2;

        FUNC_0(VAR_1);

        if (VAR_1->digest_valid)
                return 0;

        VAR_2 = FUNC_1(VAR_1->fd, VAR_1->digest, VAR_1->digest_size, 0);
        if (VAR_2 < 0)
                return VAR_2;
        if ((size_t) VAR_2 != VAR_1->digest_size)
                return -VAR_0;

        VAR_1->digest_valid = 1;

        return 0;
}
