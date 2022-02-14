
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int va_list ;
struct mp_log {int dummy; } ;
typedef int buffer ;
struct TYPE_2__ {char* (* item_name ) (void*) ;} ;
typedef TYPE_1__ AVClass ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 struct mp_log* FUNC_3 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct mp_log*,int,char*,char*) ;
 scalar_t__ FUNC_5 (struct mp_log*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int,char*,char const*) ;
 int VAR_3 ;
 int FUNC_9 (char const*) ;
 char* FUNC_10 (void*) ;
 int FUNC_11 (int ,char const*,int ) ;
 int FUNC_12 (char*,int,char const*,int ) ;

__attribute__((used)) static void FUNC_13(void *VAR_4, int VAR_5, const char *VAR_6,
                                   va_list VAR_7)
{
    AVClass *VAR_8 = VAR_4 ? *(AVClass **)VAR_4 : ((void*)0);
    int VAR_9 = FUNC_2(VAR_5);


    FUNC_6(&VAR_0);

    if (!VAR_1) {
        FUNC_7(&VAR_0);

        FUNC_11(VAR_3, VAR_6, VAR_7);
        return;
    }

    struct mp_log *VAR_10 = FUNC_3(VAR_4);

    if (FUNC_5(VAR_10, VAR_9)) {
        char VAR_11[4096] = "";
        int VAR_12 = 0;
        const char *VAR_13 = VAR_8 ? VAR_8->item_name(VAR_4) : ((void*)0);
        if (VAR_2 && VAR_13)
            VAR_12 = FUNC_8(VAR_11, sizeof(VAR_11), "%s: ", VAR_13);
        VAR_2 = VAR_6[FUNC_9(VAR_6) - 1] == '\n';

        VAR_12 = FUNC_1(FUNC_0(VAR_12, 0), sizeof(VAR_11));
        FUNC_12(VAR_11 + VAR_12, sizeof(VAR_11) - VAR_12, VAR_6, VAR_7);

        FUNC_4(VAR_10, VAR_9, "%s", VAR_11);
    }

    FUNC_7(&VAR_0);
}
