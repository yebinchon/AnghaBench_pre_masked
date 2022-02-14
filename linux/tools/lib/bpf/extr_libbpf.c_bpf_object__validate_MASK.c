
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_object {scalar_t__ kern_version; int path; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static int FUNC_1(struct bpf_object *VAR_1, bool VAR_2)
{
 if (VAR_2 && VAR_1->kern_version == 0) {
  FUNC_0("%s doesn't provide kernel version\n",
      VAR_1->path);
  return -VAR_0;
 }
 return 0;
}
