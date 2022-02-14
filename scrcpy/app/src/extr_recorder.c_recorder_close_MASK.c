
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct recorder {int failed; int filename; int format; TYPE_1__* ctx; } ;
struct TYPE_3__ {int pb; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char const*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;

void
FUNC_6(struct recorder *VAR_0) {
    int VAR_1 = FUNC_2(VAR_0->ctx);
    if (VAR_1 < 0) {
        FUNC_0("Failed to write trailer to %s", VAR_0->filename);
        VAR_0->failed = 1;
    }
    FUNC_4(VAR_0->ctx->pb);
    FUNC_3(VAR_0->ctx);

    if (VAR_0->failed) {
        FUNC_0("Recording failed to %s", VAR_0->filename);
    } else {
        const char *VAR_2 = FUNC_5(VAR_0->format);
        FUNC_1("Recording complete to %s file: %s", VAR_2, VAR_0->filename);
    }
}
