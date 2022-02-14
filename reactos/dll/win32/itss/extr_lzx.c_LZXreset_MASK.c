
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct LZXstate {int R0; int R1; int R2; scalar_t__* LENGTH_len; scalar_t__* MAINTREE_len; scalar_t__ window_posn; scalar_t__ intel_started; scalar_t__ intel_curpos; int block_type; scalar_t__ block_remaining; scalar_t__ frames_read; scalar_t__ header_read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_0(struct LZXstate *VAR_5)
{
    int VAR_6;

    VAR_5->R0 = VAR_5->R1 = VAR_5->R2 = 1;
    VAR_5->header_read = 0;
    VAR_5->frames_read = 0;
    VAR_5->block_remaining = 0;
    VAR_5->block_type = VAR_1;
    VAR_5->intel_curpos = 0;
    VAR_5->intel_started = 0;
    VAR_5->window_posn = 0;

    for (VAR_6 = 0; VAR_6 < VAR_4 + VAR_3; VAR_6++) VAR_5->MAINTREE_len[VAR_6] = 0;
    for (VAR_6 = 0; VAR_6 < VAR_2 + VAR_3; VAR_6++) VAR_5->LENGTH_len[VAR_6] = 0;

    return VAR_0;
}
