
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_int_t ;
struct TYPE_3__ {int log; } ;
typedef TYPE_1__ ngx_cycle_t ;


 void* FUNC_0 (int *,int,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,char*,scalar_t__) ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;
 scalar_t__ VAR_7 ;
 int * VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int *,char*,int ) ;
 int * VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_cycle_t *VAR_13)
{
    FUNC_2((u_char *) VAR_11,
                "Global\\ngx_stop_%s%Z", VAR_12);

    VAR_10 = FUNC_0(((void*)0), 1, 0, VAR_11);
    if (VAR_10 == ((void*)0)) {
        FUNC_1(VAR_1, VAR_13->log, VAR_3,
                      "CreateEvent(\"%s\") failed", VAR_11);
        return VAR_0;
    }


    FUNC_2((u_char *) VAR_5,
                "Global\\ngx_quit_%s%Z", VAR_12);

    VAR_4 = FUNC_0(((void*)0), 1, 0, VAR_5);
    if (VAR_4 == ((void*)0)) {
        FUNC_1(VAR_1, VAR_13->log, VAR_3,
                      "CreateEvent(\"%s\") failed", VAR_5);
        return VAR_0;
    }


    FUNC_2((u_char *) VAR_9,
                "Global\\ngx_reopen_%s%Z", VAR_12);

    VAR_8 = FUNC_0(((void*)0), 1, 0, VAR_9);
    if (VAR_8 == ((void*)0)) {
        FUNC_1(VAR_1, VAR_13->log, VAR_3,
                      "CreateEvent(\"%s\") failed", VAR_9);
        return VAR_0;
    }


    FUNC_2((u_char *) VAR_7,
                "Global\\ngx_reload_%s%Z", VAR_12);

    VAR_6 = FUNC_0(((void*)0), 1, 0, VAR_7);
    if (VAR_6 == ((void*)0)) {
        FUNC_1(VAR_1, VAR_13->log, VAR_3,
                      "CreateEvent(\"%s\") failed", VAR_7);
        return VAR_0;
    }

    return VAR_2;
}
