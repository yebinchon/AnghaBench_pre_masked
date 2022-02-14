
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prog_fd; int name; } ;
union bpf_attr {TYPE_1__ raw_tracepoint; } ;
typedef int attr ;


 int VAR_0 ;
 int FUNC_0 (union bpf_attr*,int ,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,union bpf_attr*,int) ;

int FUNC_3(const char *VAR_1, int VAR_2)
{
 union bpf_attr VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.raw_tracepoint.name = FUNC_1(VAR_1);
 VAR_3.raw_tracepoint.prog_fd = VAR_2;

 return FUNC_2(VAR_0, &VAR_3, sizeof(VAR_3));
}
