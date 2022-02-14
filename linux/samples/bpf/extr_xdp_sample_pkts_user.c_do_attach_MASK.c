
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog_info {int id; } ;
typedef int info ;
typedef int __u32 ;


 int FUNC_0 (int,struct bpf_prog_info*,int*) ;
 int FUNC_1 (int,int,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,char const*) ;
 int VAR_1 ;
 char* FUNC_3 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(int VAR_3, int VAR_4, const char *VAR_5)
{
 struct bpf_prog_info VAR_6 = {};
 __u32 VAR_7 = sizeof(VAR_6);
 int VAR_8;

 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_2);
 if (VAR_8 < 0) {
  FUNC_2("ERROR: failed to attach program to %s\n", VAR_5);
  return VAR_8;
 }

 VAR_8 = FUNC_0(VAR_4, &VAR_6, &VAR_7);
 if (VAR_8) {
  FUNC_2("can't get prog info - %s\n", FUNC_3(VAR_0));
  return VAR_8;
 }
 VAR_1 = VAR_6.id;

 return VAR_8;
}
