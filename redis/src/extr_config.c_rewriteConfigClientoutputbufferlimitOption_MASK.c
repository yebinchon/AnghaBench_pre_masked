
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rewriteConfigState {int dummy; } ;
typedef int soft ;
typedef int sds ;
typedef int hard ;
struct TYPE_6__ {scalar_t__ hard_limit_bytes; scalar_t__ soft_limit_bytes; scalar_t__ soft_limit_seconds; } ;
struct TYPE_5__ {TYPE_1__* client_obuf_limits; } ;
struct TYPE_4__ {scalar_t__ hard_limit_bytes; scalar_t__ soft_limit_bytes; scalar_t__ soft_limit_seconds; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,int,scalar_t__) ;
 int FUNC_2 (struct rewriteConfigState*,char*,int ,int) ;
 int FUNC_3 (int ,char*,char*,char*,char*,char*,long) ;
 int FUNC_4 () ;
 TYPE_2__ VAR_2 ;
 int FUNC_5 (char*,char*) ;

void FUNC_6(struct rewriteConfigState *VAR_3) {
    int VAR_4;
    char *VAR_5 = "client-output-buffer-limit";

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        int VAR_6 = (VAR_2.client_obuf_limits[VAR_4].hard_limit_bytes !=
                    VAR_1[VAR_4].hard_limit_bytes) ||
                    (VAR_2.client_obuf_limits[VAR_4].soft_limit_bytes !=
                    VAR_1[VAR_4].soft_limit_bytes) ||
                    (VAR_2.client_obuf_limits[VAR_4].soft_limit_seconds !=
                    VAR_1[VAR_4].soft_limit_seconds);
        sds VAR_7;
        char VAR_8[64], VAR_9[64];

        FUNC_1(VAR_8,sizeof(VAR_8),
                VAR_2.client_obuf_limits[VAR_4].hard_limit_bytes);
        FUNC_1(VAR_9,sizeof(VAR_9),
                VAR_2.client_obuf_limits[VAR_4].soft_limit_bytes);

        char *VAR_10 = FUNC_0(VAR_4);
        if (!FUNC_5(VAR_10,"slave")) VAR_10 = "replica";
        VAR_7 = FUNC_3(FUNC_4(),"%s %s %s %s %ld",
                VAR_5, VAR_10, VAR_8, VAR_9,
                (long) VAR_2.client_obuf_limits[VAR_4].soft_limit_seconds);
        FUNC_2(VAR_3,VAR_5,VAR_7,VAR_6);
    }
}
