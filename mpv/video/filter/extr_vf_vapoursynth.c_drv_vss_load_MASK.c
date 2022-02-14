
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int se; int out_node; int script_path; } ;
typedef int VSMap ;


 int FUNC_0 (struct priv*,char*,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct priv *VAR_0, VSMap *VAR_1)
{
    FUNC_4(VAR_0->se, VAR_1);

    if (FUNC_1(&VAR_0->se, VAR_0->script_path, 0)) {
        FUNC_0(VAR_0, "Script evaluation failed:\n%s\n", FUNC_2(VAR_0->se));
        return -1;
    }
    VAR_0->out_node = FUNC_3(VAR_0->se, 0);
    return 0;
}
