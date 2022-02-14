
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
struct bstr {scalar_t__ len; } ;
typedef struct bstr bstr ;


 long long FUNC_0 (struct bstr) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 struct bstr FUNC_2 (struct bstr,int) ;
 scalar_t__ FUNC_3 (struct bstr*,char*) ;
 struct bstr FUNC_4 (struct bstr,int ,int) ;
 scalar_t__ FUNC_5 (struct bstr,char*) ;
 int FUNC_6 (struct bstr,int ) ;
 long long FUNC_7 (struct bstr,struct bstr*,int ) ;
 int FUNC_8 (struct mp_log*,char*,long long,long long) ;
 int FUNC_9 (int ,struct bstr) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct mp_log *VAR_1, struct bstr VAR_2,
                                  struct bstr *VAR_3, void *VAR_4, bool *VAR_5)
{
    bstr VAR_6 = *VAR_3;
    if (FUNC_3(&VAR_6, "@")) {


        int VAR_7 = FUNC_6(VAR_6, VAR_0);
        bstr VAR_8 = FUNC_4(VAR_6, 0, VAR_7);
        VAR_6 = FUNC_2(VAR_6, VAR_7);
        if (FUNC_5(VAR_6, ":"))
            return 0;
        if (VAR_4) {
            int VAR_9 = FUNC_9(FUNC_1(VAR_4), VAR_8);
            if (VAR_9 >= 0) {
                VAR_5[VAR_9] = 1;
            } else {
                FUNC_8(VAR_1, "Option %.*s: item label @%.*s not found.\n",
                        FUNC_0(VAR_2), FUNC_0(VAR_8));
            }
        }
        *VAR_3 = VAR_6;
        return 1;
    }

    bstr VAR_10;
    long long VAR_11 = FUNC_7(VAR_6, &VAR_10, 0);
    if (VAR_10.len == VAR_6.len)
        return 0;

    if (VAR_4) {
        int VAR_12 = FUNC_10(FUNC_1(VAR_4));
        if (VAR_11 < 0)
            VAR_11 = VAR_12 + VAR_11;

        if (VAR_11 >= 0 && VAR_11 < VAR_12) {
            VAR_5[VAR_11] = 1;
        } else {
            FUNC_8(VAR_1, "Option %.*s: Index %lld is out of range.\n",
                    FUNC_0(VAR_2), VAR_11);
        }
    }

    *VAR_3 = VAR_10;
    return 1;
}
