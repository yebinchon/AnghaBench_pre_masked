
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct LZXstate {int actual_size; int window_size; int R0; int R1; int R2; scalar_t__* LENGTH_len; scalar_t__* MAINTREE_len; scalar_t__ window_posn; scalar_t__ intel_started; scalar_t__ intel_curpos; int block_type; scalar_t__ block_remaining; scalar_t__ frames_read; scalar_t__ header_read; scalar_t__ main_elements; void* window; } ;
typedef int ULONG ;


 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,struct LZXstate*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

struct LZXstate *FUNC_3(int VAR_4)
{
    struct LZXstate *VAR_5=((void*)0);
    ULONG VAR_6 = 1 << VAR_4;
    int VAR_7, VAR_8;



    if (VAR_4 < 15 || VAR_4 > 21) return ((void*)0);


    VAR_5 = FUNC_1(FUNC_0(), 0, sizeof(struct LZXstate));
    if (!(VAR_5->window = FUNC_1(FUNC_0(), 0, VAR_6)))
    {
        FUNC_2(FUNC_0(), 0, VAR_5);
        return ((void*)0);
    }
    VAR_5->actual_size = VAR_6;
    VAR_5->window_size = VAR_6;


    if (VAR_4 == 20) VAR_8 = 42;
    else if (VAR_4 == 21) VAR_8 = 50;
    else VAR_8 = VAR_4 << 1;





    VAR_5->R0 = VAR_5->R1 = VAR_5->R2 = 1;
    VAR_5->main_elements = VAR_3 + (VAR_8 << 3);
    VAR_5->header_read = 0;
    VAR_5->frames_read = 0;
    VAR_5->block_remaining = 0;
    VAR_5->block_type = VAR_0;
    VAR_5->intel_curpos = 0;
    VAR_5->intel_started = 0;
    VAR_5->window_posn = 0;


    for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) VAR_5->MAINTREE_len[VAR_7] = 0;
    for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) VAR_5->LENGTH_len[VAR_7] = 0;

    return VAR_5;
}
