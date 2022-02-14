
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *,int ,int *,int ,int *,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,char*,char*,int,char const*) ;

__attribute__((used)) static bool FUNC_2(const char *VAR_3)
{
 bool VAR_4;

 FUNC_0(VAR_0, ((void*)0), 0, ((void*)0), 0, ((void*)0), 0);
 VAR_4 = (VAR_2 != VAR_1);

 FUNC_1("have_bpf_syscall",
      "bpf() syscall",
      "BPF_SYSCALL",
      VAR_4, VAR_3);

 return VAR_4;
}
