
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saved_cmdlines_buffer {unsigned int cmdline_num; int * map_cmdline_to_pid; int map_pid_to_cmdline; scalar_t__ cmdline_idx; void* saved_cmdlines; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (unsigned int,unsigned int,int ) ;
 int FUNC_2 (int *,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_4,
        struct saved_cmdlines_buffer *VAR_5)
{
 VAR_5->map_cmdline_to_pid = FUNC_1(VAR_4,
           sizeof(*VAR_5->map_cmdline_to_pid),
           VAR_1);
 if (!VAR_5->map_cmdline_to_pid)
  return -VAR_0;

 VAR_5->saved_cmdlines = FUNC_1(VAR_3, VAR_4, VAR_1);
 if (!VAR_5->saved_cmdlines) {
  FUNC_0(VAR_5->map_cmdline_to_pid);
  return -VAR_0;
 }

 VAR_5->cmdline_idx = 0;
 VAR_5->cmdline_num = VAR_4;
 FUNC_2(&VAR_5->map_pid_to_cmdline, VAR_2,
        sizeof(VAR_5->map_pid_to_cmdline));
 FUNC_2(VAR_5->map_cmdline_to_pid, VAR_2,
        VAR_4 * sizeof(*VAR_5->map_cmdline_to_pid));

 return 0;
}
