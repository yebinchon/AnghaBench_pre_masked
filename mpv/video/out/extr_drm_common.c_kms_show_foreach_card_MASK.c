
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(
    struct mp_log *VAR_1, void (*VAR_2)(struct mp_log*,int))
{
    for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        int VAR_4 = FUNC_1(VAR_3);
        if (VAR_4 < 0)
            break;
        FUNC_0(VAR_4);
        VAR_2(VAR_1, VAR_3);
    }
}
