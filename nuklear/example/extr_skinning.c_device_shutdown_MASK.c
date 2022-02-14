
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int cmds; int ebo; int vbo; int font_tex; int prog; int frag_shdr; int vert_shdr; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct device *VAR_0)
{
    FUNC_4(VAR_0->prog, VAR_0->vert_shdr);
    FUNC_4(VAR_0->prog, VAR_0->frag_shdr);
    FUNC_2(VAR_0->vert_shdr);
    FUNC_2(VAR_0->frag_shdr);
    FUNC_1(VAR_0->prog);
    FUNC_3(1, &VAR_0->font_tex);
    FUNC_0(1, &VAR_0->vbo);
    FUNC_0(1, &VAR_0->ebo);
    FUNC_5(&VAR_0->cmds);
}
