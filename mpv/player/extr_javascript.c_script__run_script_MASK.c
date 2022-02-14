
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_ctx {char* filename; } ;
typedef int js_State ;


 int FUNC_0 (int *,struct script_ctx*) ;
 struct script_ctx* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,char*,int ) ;
 int FUNC_8 (int *,int ) ;
 int VAR_0 ;
 int FUNC_9 (int *,char*) ;

__attribute__((used)) static void FUNC_10(js_State *VAR_1)
{
    FUNC_7(VAR_1, "@/norm_err.js", VAR_0);
    FUNC_3(VAR_1, 0);
    FUNC_8(VAR_1, 0);

    struct script_ctx *VAR_2 = FUNC_1(VAR_1);
    FUNC_0(VAR_1, VAR_2);
    FUNC_9(VAR_1, "@/defaults.js");
    FUNC_9(VAR_1, VAR_2->filename);

    if (!FUNC_5(VAR_1, 0, "mp_event_loop") || !FUNC_6(VAR_1, -1))
        FUNC_4(VAR_1, "no event loop function");
    FUNC_3(VAR_1, 0);
    FUNC_2(VAR_1, 0);
}
