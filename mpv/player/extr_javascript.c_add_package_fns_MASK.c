
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fn_entry {char const* name; int length; int afc_fn; scalar_t__ jsc_fn; } ;
typedef int js_State ;


 int FUNC_0 (int *,int ,char const*,int ) ;
 int FUNC_1 (int *,scalar_t__,char const*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,char const*) ;

__attribute__((used)) static void FUNC_4(js_State *VAR_0, const char *VAR_1,
                            const struct fn_entry *VAR_2)
{
    FUNC_2(VAR_0);
    for (int VAR_3 = 0; VAR_2[VAR_3].name; VAR_3++) {
        if (VAR_2[VAR_3].jsc_fn) {
            FUNC_1(VAR_0, VAR_2[VAR_3].jsc_fn, VAR_2[VAR_3].name, VAR_2[VAR_3].length);
        } else {
            FUNC_0(VAR_0, VAR_2[VAR_3].afc_fn, VAR_2[VAR_3].name, VAR_2[VAR_3].length);
        }
        FUNC_3(VAR_0, -2, VAR_2[VAR_3].name);
    }
    FUNC_3(VAR_0, -2, VAR_1);
}
