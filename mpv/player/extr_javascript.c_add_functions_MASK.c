
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_ctx {int filename; int client; } ;
typedef int js_State ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int,char*) ;
 int VAR_0 ;
 int FUNC_6 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(js_State *VAR_2, struct script_ctx *VAR_3)
{
    FUNC_1(VAR_2, 0);
    FUNC_0(VAR_2, "mp", VAR_0);
    FUNC_2(VAR_2, 0, "mp");
    FUNC_0(VAR_2, "utils", VAR_1);

    FUNC_4(VAR_2, FUNC_6(VAR_3->client));
    FUNC_5(VAR_2, -2, "script_name");

    FUNC_4(VAR_2, VAR_3->filename);
    FUNC_5(VAR_2, -2, "script_file");

    FUNC_3(VAR_2, 2);
}
