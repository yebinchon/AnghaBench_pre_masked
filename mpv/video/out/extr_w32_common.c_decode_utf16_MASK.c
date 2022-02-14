
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct vo_w32_state {int high_surrogate; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct vo_w32_state*,char*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct vo_w32_state *VAR_0, wchar_t VAR_1)
{

    if (FUNC_0(VAR_1)) {
        VAR_0->high_surrogate = VAR_1;
        return 0;
    }
    if (FUNC_1(VAR_1)) {
        if (!VAR_0->high_surrogate) {
            FUNC_2(VAR_0, "Invalid UTF-16 input\n");
            return 0;
        }
        int VAR_2 = FUNC_3(VAR_0->high_surrogate, VAR_1);
        VAR_0->high_surrogate = 0;
        return VAR_2;
    }
    if (VAR_0->high_surrogate != 0) {
        VAR_0->high_surrogate = 0;
        FUNC_2(VAR_0, "Invalid UTF-16 input\n");
        return 0;
    }

    return VAR_1;
}
