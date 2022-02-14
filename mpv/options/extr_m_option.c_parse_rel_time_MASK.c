
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
struct m_rel_time {double pos; int type; int member_0; } ;
struct bstr {scalar_t__ len; } ;
typedef int m_option_t ;


 int FUNC_0 (struct bstr) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct bstr,int) ;
 scalar_t__ FUNC_2 (struct bstr,char*) ;
 scalar_t__ FUNC_3 (struct bstr,char*) ;
 int FUNC_4 (struct bstr,int ,int) ;
 scalar_t__ FUNC_5 (struct bstr,char*) ;
 double FUNC_6 (int ,struct bstr*) ;
 int FUNC_7 (int ,struct bstr*,int) ;
 int FUNC_8 (struct mp_log*,char*,int ,int ) ;
 scalar_t__ FUNC_9 (struct bstr,double*,int ) ;

__attribute__((used)) static int FUNC_10(struct mp_log *VAR_7, const m_option_t *VAR_8,
                          struct bstr VAR_9, struct bstr VAR_10, void *VAR_11)
{
    struct m_rel_time VAR_12 = {0};

    if (VAR_10.len == 0)
        return VAR_1;

    if (FUNC_3(VAR_10, "none")) {
        VAR_12.type = VAR_4;
        goto out;
    }


    if (FUNC_2(VAR_10, "%")) {
        double VAR_13 = FUNC_6(FUNC_4(VAR_10, 0, -1), &VAR_10);
        if (VAR_10.len == 0 && VAR_13 >= 0 && VAR_13 <= 100) {
            VAR_12.type = VAR_5;
            VAR_12.pos = VAR_13;
            goto out;
        }
    }


    if (FUNC_5(VAR_10, "#")) {
        int VAR_14 = FUNC_7(FUNC_1(VAR_10, 1), &VAR_10, 10);
        if (VAR_10.len == 0 && VAR_14 >= 1) {
            VAR_12.type = VAR_3;
            VAR_12.pos = VAR_14 - 1;
            goto out;
        }
    }

    double VAR_15;
    if (FUNC_9(VAR_10, &VAR_15, 0)) {
        if (FUNC_5(VAR_10, "+") || FUNC_5(VAR_10, "-")) {
            VAR_12.type = VAR_6;
        } else {
            VAR_12.type = VAR_2;
        }
        VAR_12.pos = VAR_15;
        goto out;
    }

    FUNC_8(VAR_7, "Option %.*s: invalid time or position: '%.*s'\n",
           FUNC_0(VAR_9), FUNC_0(VAR_10));
    return VAR_0;

out:
    if (VAR_11)
        *(struct m_rel_time *)VAR_11 = VAR_12;
    return 1;
}
