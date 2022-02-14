
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wine_rb_tree {int dummy; } ;
struct ffp_frag_desc {int entry; int settings; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct wine_rb_tree*,int *,int *) ;

void FUNC_2(struct wine_rb_tree *VAR_0, struct ffp_frag_desc *VAR_1)
{


    if (FUNC_1(VAR_0, &VAR_1->settings, &VAR_1->entry) == -1)
    {
        FUNC_0("Failed to insert ffp frag shader.\n");
    }
}
