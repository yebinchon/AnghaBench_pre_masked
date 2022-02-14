
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum bpf_attach_type { ____Placeholder_bpf_attach_type } bpf_attach_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int,int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int*,char***) ;

__attribute__((used)) static int FUNC_7(int VAR_4, char **VAR_5)
{
 enum bpf_attach_type VAR_6;
 int VAR_7, VAR_8;
 int VAR_9 = -1;

 if (VAR_4 < 4) {
  FUNC_4("too few parameters for cgroup detach");
  goto exit;
 }

 VAR_8 = FUNC_3(VAR_5[0], VAR_0);
 if (VAR_8 < 0) {
  FUNC_4("can't open cgroup %s", VAR_5[0]);
  goto exit;
 }

 VAR_6 = FUNC_5(VAR_5[1]);
 if (VAR_6 == VAR_1) {
  FUNC_4("invalid attach type");
  goto exit_cgroup;
 }

 VAR_4 -= 2;
 VAR_5 = &VAR_5[2];
 VAR_7 = FUNC_6(&VAR_4, &VAR_5);
 if (VAR_7 < 0)
  goto exit_cgroup;

 if (FUNC_0(VAR_7, VAR_8, VAR_6)) {
  FUNC_4("failed to detach program");
  goto exit_prog;
 }

 if (VAR_2)
  FUNC_2(VAR_3);

 VAR_9 = 0;

exit_prog:
 FUNC_1(VAR_7);
exit_cgroup:
 FUNC_1(VAR_8);
exit:
 return VAR_9;
}
