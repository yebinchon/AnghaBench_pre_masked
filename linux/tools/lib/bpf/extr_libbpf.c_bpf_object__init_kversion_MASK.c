
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_object {int kern_version; int path; } ;
typedef int kver ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (int *,void*,int) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int
FUNC_3(struct bpf_object *VAR_1, void *VAR_2, size_t VAR_3)
{
 __u32 VAR_4;

 if (VAR_3 != sizeof(VAR_4)) {
  FUNC_2("invalid kver section in %s\n", VAR_1->path);
  return -VAR_0;
 }
 FUNC_0(&VAR_4, VAR_2, sizeof(VAR_4));
 VAR_1->kern_version = VAR_4;
 FUNC_1("kernel version of %s is %x\n", VAR_1->path, VAR_1->kern_version);
 return 0;
}
