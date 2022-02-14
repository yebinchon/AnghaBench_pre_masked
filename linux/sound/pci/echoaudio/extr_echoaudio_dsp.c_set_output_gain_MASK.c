
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct echoaudio {TYPE_1__* comm_page; void** output_gain; } ;
typedef void* s8 ;
struct TYPE_2__ {void** line_out_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (struct echoaudio*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct echoaudio*) ;

__attribute__((used)) static int FUNC_3(struct echoaudio *VAR_2, u16 VAR_3, s8 VAR_4)
{
 if (FUNC_1(VAR_3 >= FUNC_0(VAR_2)))
  return -VAR_0;

 if (FUNC_2(VAR_2))
  return -VAR_1;


 VAR_2->output_gain[VAR_3] = VAR_4;
 VAR_2->comm_page->line_out_level[VAR_3] = VAR_4;
 return 0;
}
