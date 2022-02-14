
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lavfi_pad {int filter_pad; int buffer_is_eof; int in_fmt; int * buffer; int * filter; } ;
struct lavfi {int num_all_pads; int initialized; int draining_recover; scalar_t__ delay; scalar_t__ in_samples; int in_pts; struct lavfi_pad** all_pads; int graph; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct lavfi *VAR_1)
{
    FUNC_0(&VAR_1->graph);
    for (int VAR_2 = 0; VAR_2 < VAR_1->num_all_pads; VAR_2++) {
        struct lavfi_pad *VAR_3 = VAR_1->all_pads[VAR_2];

        VAR_3->filter = ((void*)0);
        VAR_3->filter_pad = -1;
        VAR_3->buffer = ((void*)0);
        FUNC_1(&VAR_3->in_fmt);
        VAR_3->buffer_is_eof = 0;
    }
    VAR_1->initialized = 0;
    VAR_1->draining_recover = 0;
    VAR_1->in_pts = VAR_0;
    VAR_1->in_samples = 0;
    VAR_1->delay = 0;
}
