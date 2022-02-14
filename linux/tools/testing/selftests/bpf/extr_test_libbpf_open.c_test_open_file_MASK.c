
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_object {int dummy; } ;
typedef int err_buf ;


 int VAR_0 ;
 int FUNC_0 (struct bpf_object*) ;
 char* FUNC_1 (struct bpf_object*) ;
 struct bpf_object* FUNC_2 (char*) ;
 long FUNC_3 (struct bpf_object*) ;
 int FUNC_4 (long,char*,int) ;
 int FUNC_5 (char*,char*,...) ;
 int FUNC_6 (struct bpf_object*,int) ;
 int FUNC_7 (struct bpf_object*,int) ;

int FUNC_8(char *VAR_1, bool VAR_2)
{
 struct bpf_object *VAR_3 = ((void*)0);
 long VAR_4;

 if (VAR_2)
  FUNC_5("Open BPF ELF-file with libbpf: %s\n", VAR_1);


 VAR_3 = FUNC_2(VAR_1);
 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4) {
  char VAR_5[128];
  FUNC_4(VAR_4, VAR_5, sizeof(VAR_5));
  if (VAR_2)
   FUNC_5("Unable to load eBPF objects in file '%s': %s\n",
          VAR_1, VAR_5);
  return VAR_0;
 }
 FUNC_7(VAR_3, VAR_2);
 FUNC_6(VAR_3, VAR_2);

 if (VAR_2)
  FUNC_5("Close BPF ELF-file with libbpf: %s\n",
         FUNC_1(VAR_3));
 FUNC_0(VAR_3);

 return 0;
}
