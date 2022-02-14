
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct mp_log {int dummy; } ;


 int* VAR_0 ;
 int FUNC_0 (struct mp_log*,int,char*) ;
 int FUNC_1 (struct mp_log*,int,char const*,int ) ;

__attribute__((used)) static void FUNC_2(int VAR_1, const char *VAR_2, va_list VAR_3, void *VAR_4)
{
    struct mp_log *VAR_5 = VAR_4;
    if (!VAR_5)
        return;
    VAR_1 = VAR_0[VAR_1];
    FUNC_1(VAR_5, VAR_1, VAR_2, VAR_3);

    FUNC_0(VAR_5, VAR_1, "\n");
}
