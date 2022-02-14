
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node_editor {int show_grid; int * end; int * begin; } ;


 int FUNC_0 (struct node_editor*,int ,int) ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (int,int,int) ;
 int VAR_0 ;
 int FUNC_3 (struct node_editor*,char*,int ,int ,int,int) ;
 int FUNC_4 (struct node_editor*,int,int ,int,int) ;

__attribute__((used)) static void
FUNC_5(struct node_editor *VAR_1)
{
    FUNC_0(VAR_1, 0, sizeof(*VAR_1));
    VAR_1->begin = ((void*)0);
    VAR_1->end = ((void*)0);
    FUNC_3(VAR_1, "Source", FUNC_1(40, 10, 180, 220), FUNC_2(255, 0, 0), 0, 1);
    FUNC_3(VAR_1, "Source", FUNC_1(40, 260, 180, 220), FUNC_2(0, 255, 0), 0, 1);
    FUNC_3(VAR_1, "Combine", FUNC_1(400, 100, 180, 220), FUNC_2(0,0,255), 2, 2);
    FUNC_4(VAR_1, 0, 0, 2, 0);
    FUNC_4(VAR_1, 1, 0, 2, 1);
    VAR_1->show_grid = VAR_0;
}
