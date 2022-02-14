
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int ,int ) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (struct mp_log*,char*,...) ;
 int FUNC_5 (char const*,int) ;
 int FUNC_6 (int,char*,int) ;

__attribute__((used)) static char *FUNC_7(struct mp_log *VAR_5, const char *VAR_6, int64_t * VAR_7)
{
    int VAR_8;
    char *VAR_9 = ((void*)0);

    FUNC_4(VAR_5, "Loading cookie file: %s\n", VAR_6);

    VAR_8 = FUNC_5(VAR_6, VAR_1 | VAR_0);
    if (VAR_8 < 0) {
        FUNC_4(VAR_5, "Could not open");
        goto err_out;
    }

    *VAR_7 = FUNC_2(VAR_8, 0, VAR_2);

    if (*VAR_7 < 0) {
        FUNC_4(VAR_5, "Could not find EOF");
        goto err_out;
    }

    if (*VAR_7 > VAR_4 - 1) {
        FUNC_4(VAR_5, "File too big, could not malloc.");
        goto err_out;
    }

    FUNC_2(VAR_8, 0, VAR_3);

    if (!(VAR_9 = FUNC_3(*VAR_7 + 1))) {
        FUNC_4(VAR_5, "Could not malloc.");
        goto err_out;
    }

    if (FUNC_6(VAR_8, VAR_9, *VAR_7) != *VAR_7) {
        FUNC_4(VAR_5, "Read is behaving funny.");
        goto err_out;
    }
    FUNC_0(VAR_8);
    VAR_9[*VAR_7] = 0;

    return VAR_9;

err_out:
    if (VAR_8 != -1) FUNC_0(VAR_8);
    FUNC_1(VAR_9);
    return ((void*)0);
}
