
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int bits_sent; scalar_t__ dyn_dtree; scalar_t__ dyn_ltree; TYPE_1__* bl_tree; } ;
typedef TYPE_2__ deflate_state ;
typedef int ct_data ;
struct TYPE_6__ {int Len; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 size_t* VAR_3 ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 int FUNC_3 (TYPE_2__*,int *,int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(
 deflate_state *VAR_5,
 int VAR_6,
 int VAR_7,
 int VAR_8
)
{
    int VAR_9;

    FUNC_0 (VAR_6 >= 257 && VAR_7 >= 1 && VAR_8 >= 4, "not enough codes");
    FUNC_0 (VAR_6 <= VAR_2 && VAR_7 <= VAR_1 && VAR_8 <= VAR_0,
            "too many codes");
    FUNC_1((VAR_4, "\nbl counts: "));
    FUNC_2(VAR_5, VAR_6-257, 5);
    FUNC_2(VAR_5, VAR_7-1, 5);
    FUNC_2(VAR_5, VAR_8-4, 4);
    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
        FUNC_1((VAR_4, "\nbl code %2d ", VAR_3[VAR_9]));
        FUNC_2(VAR_5, VAR_5->bl_tree[VAR_3[VAR_9]].Len, 3);
    }
    FUNC_1((VAR_4, "\nbl tree: sent %ld", VAR_5->bits_sent));

    FUNC_3(VAR_5, (ct_data *)VAR_5->dyn_ltree, VAR_6-1);
    FUNC_1((VAR_4, "\nlit tree: sent %ld", VAR_5->bits_sent));

    FUNC_3(VAR_5, (ct_data *)VAR_5->dyn_dtree, VAR_7-1);
    FUNC_1((VAR_4, "\ndist tree: sent %ld", VAR_5->bits_sent));
}
