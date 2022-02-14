
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 char* FUNC_2 (int *,int) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (char const*,char const*) ;

__attribute__((used)) static void FUNC_8(js_State *VAR_0)
{
    const char *VAR_1 = FUNC_2(VAR_0, 1);
    bool VAR_2 = FUNC_1(VAR_0, 2);

    const char *VAR_3;
    for (int VAR_4 = 0; VAR_4 < 256 && (VAR_3 = FUNC_3(VAR_4)); VAR_4++) {
        if (FUNC_7(VAR_3, VAR_1) == 0) {
            FUNC_6(VAR_0, FUNC_4(FUNC_0(VAR_0), VAR_4, VAR_2));
            return;
        }
    }
    FUNC_5(VAR_0, "Unknown event name");
}
