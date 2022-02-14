
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct list {int dummy; } ;
struct frame_node {int entry; TYPE_1__* frame; } ;
struct TYPE_3__ {int pFrameFirstChild; } ;
typedef TYPE_1__ D3DXFRAME ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct frame_node* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (struct list*,int *) ;

__attribute__((used)) static BOOL FUNC_3(struct list *VAR_2, D3DXFRAME *VAR_3)
{
    struct frame_node *VAR_4;

    if (!VAR_3->pFrameFirstChild)
        return VAR_1;

    VAR_4 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_4));
    if (!VAR_4)
        return VAR_0;

    VAR_4->frame = VAR_3;
    FUNC_2(VAR_2, &VAR_4->entry);

    return VAR_1;
}
