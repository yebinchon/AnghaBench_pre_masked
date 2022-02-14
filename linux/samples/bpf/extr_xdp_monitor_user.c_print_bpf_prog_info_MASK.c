
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int fd; } ;


 int* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_3 ;
 int* VAR_4 ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_5;


 FUNC_0("Loaded BPF prog have %d bpf program(s)\n", VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  FUNC_0(" - prog_fd[%d] = fd(%d)\n", VAR_5, VAR_4[VAR_5]);
 }


 FUNC_0("Loaded BPF prog have %d map(s)\n", VAR_2);
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  char *VAR_6 = VAR_1[VAR_5].name;
  int VAR_7 = VAR_1[VAR_5].fd;

  FUNC_0(" - map_data[%d] = fd(%d) name:%s\n", VAR_5, VAR_7, VAR_6);
 }


 FUNC_0("Searching for (max:%d) event file descriptor(s)\n", VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (VAR_0[VAR_5] != -1)
   FUNC_0(" - event_fd[%d] = fd(%d)\n", VAR_5, VAR_0[VAR_5]);
 }
}
