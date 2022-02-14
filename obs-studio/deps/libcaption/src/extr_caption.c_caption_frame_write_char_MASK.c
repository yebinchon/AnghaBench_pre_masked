
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int eia608_style_t ;
struct TYPE_5__ {int write; } ;
typedef TYPE_1__ caption_frame_t ;
struct TYPE_6__ {int uln; int sty; int * data; } ;
typedef TYPE_2__ caption_frame_cell_t ;


 int FUNC_0 (char const*) ;
 TYPE_2__* FUNC_1 (int ,int,int) ;
 scalar_t__ FUNC_2 (int *,char const*) ;

int FUNC_3(caption_frame_t* VAR_0, int VAR_1, int VAR_2, eia608_style_t VAR_3, int VAR_4, const char* VAR_5)
{
    if (!VAR_0->write || !FUNC_0(VAR_5)) {
        return 0;
    }

    caption_frame_cell_t* VAR_6 = FUNC_1(VAR_0->write, VAR_1, VAR_2);

    if (VAR_6 && FUNC_2(&VAR_6->data[0], VAR_5)) {
        VAR_6->uln = VAR_4;
        VAR_6->sty = VAR_3;
        return 1;
    }

    return 0;
}
