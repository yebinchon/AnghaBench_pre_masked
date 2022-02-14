
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int length; int addr; } ;
struct TYPE_3__ {int size; int off; int fd; } ;
struct lwan_readahead_cmd {int cmd; TYPE_2__ madvise; TYPE_1__ readahead; } ;
typedef size_t ssize_t ;
typedef int cmd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;

 int VAR_4 ;


 scalar_t__ FUNC_1 (size_t) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,size_t) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 size_t FUNC_8 (int ,struct lwan_readahead_cmd*,int) ;
 int FUNC_9 (int ,int ,int ) ;
 int * VAR_6 ;

__attribute__((used)) static void *FUNC_10(void *VAR_7 __attribute__((unused)))
{



    FUNC_2(VAR_3, 0, FUNC_0(VAR_2, 7));

    FUNC_3("readahead");

    while (1) {
        struct lwan_readahead_cmd VAR_8[16];
        ssize_t VAR_9 = FUNC_8(VAR_6[0], VAR_8, sizeof(VAR_8));
        ssize_t VAR_10;

        if (FUNC_1(VAR_9 < 0)) {
            if (VAR_5 == VAR_0 || VAR_5 == VAR_1)
                continue;
            FUNC_4("Ignoring error while reading from pipe (%d)",
                               VAR_6[0]);
            continue;






        }

        VAR_10 = VAR_9 / (ssize_t)sizeof(struct lwan_readahead_cmd);
        for (ssize_t VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
            switch (VAR_8[VAR_11].cmd) {
            case 129:
                FUNC_9(VAR_8[VAR_11].readahead.fd, VAR_8[VAR_11].readahead.off,
                          VAR_8[VAR_11].readahead.size);
                break;
            case 130:
                FUNC_6(VAR_8[VAR_11].madvise.addr, VAR_8[VAR_11].madvise.length,
                        VAR_4);
                FUNC_7(VAR_8[VAR_11].madvise.addr, VAR_8[VAR_11].madvise.length);
                break;
            case 128:
                goto out;
            }
        }
    }

out:
    return ((void*)0);
}
