
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ud {int * inp_file; int inp_peek; scalar_t__ inp_end; scalar_t__ inp_ctr; scalar_t__ inp_curr; scalar_t__ inp_buf_index; scalar_t__ inp_buf_size; int * inp_buf; int * inp_hook; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct ud *VAR_1)
{
  VAR_1->inp_hook = ((void*)0);
  VAR_1->inp_buf = ((void*)0);
  VAR_1->inp_buf_size = 0;
  VAR_1->inp_buf_index = 0;
  VAR_1->inp_curr = 0;
  VAR_1->inp_ctr = 0;
  VAR_1->inp_end = 0;
  VAR_1->inp_peek = VAR_0;
  FUNC_0(*(VAR_1->inp_file = ((void*)0)));
}
