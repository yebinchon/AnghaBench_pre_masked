
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tree_dists; int tree_lengths; } ;
typedef TYPE_1__ inflate_state ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int,int,int) ;

__attribute__((used)) static void FUNC_2(inflate_state *VAR_0)
{
    int VAR_1;

    FUNC_0(&VAR_0->tree_lengths, 0, sizeof(VAR_0->tree_lengths));
    for (VAR_1 = 0; VAR_1 < 144; VAR_1++)
        FUNC_1(&VAR_0->tree_lengths, VAR_1 + 48, 8, VAR_1);
    for (VAR_1 = 144; VAR_1 < 256; VAR_1++)
        FUNC_1(&VAR_0->tree_lengths, VAR_1 + 256, 9, VAR_1);
    for (VAR_1 = 256; VAR_1 < 280; VAR_1++)
        FUNC_1(&VAR_0->tree_lengths, VAR_1 - 256, 7, VAR_1);
    for (VAR_1 = 280; VAR_1 < 288; VAR_1++)
        FUNC_1(&VAR_0->tree_lengths, VAR_1 - 88, 8, VAR_1);

    FUNC_0(&VAR_0->tree_dists, 0, sizeof(VAR_0->tree_dists));
    for (VAR_1 = 0; VAR_1 < 32; VAR_1++)
        FUNC_1(&VAR_0->tree_dists, VAR_1, 5, VAR_1);
}
