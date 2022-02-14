
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ao_chain {int out_eof; int underrun; int ao_buffer; int output_frame; int last_out_pts; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ao_chain *VAR_1)
{
    VAR_1->last_out_pts = VAR_0;
    FUNC_0(&VAR_1->output_frame);
    VAR_1->out_eof = 0;
    VAR_1->underrun = 0;

    FUNC_1(VAR_1->ao_buffer);
}
