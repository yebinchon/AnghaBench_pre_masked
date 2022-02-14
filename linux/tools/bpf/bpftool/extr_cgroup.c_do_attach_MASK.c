
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum bpf_attach_type { ____Placeholder_bpf_attach_type } bpf_attach_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int*,char***) ;

__attribute__((used)) static int FUNC_8(int VAR_6, char **VAR_7)
{
 enum bpf_attach_type VAR_8;
 int VAR_9, VAR_10;
 int VAR_11 = 0;
 int VAR_12 = -1;
 int VAR_13;

 if (VAR_6 < 4) {
  FUNC_5("too few parameters for cgroup attach");
  goto exit;
 }

 VAR_9 = FUNC_4(VAR_7[0], VAR_2);
 if (VAR_9 < 0) {
  FUNC_5("can't open cgroup %s", VAR_7[0]);
  goto exit;
 }

 VAR_8 = FUNC_6(VAR_7[1]);
 if (VAR_8 == VAR_3) {
  FUNC_5("invalid attach type");
  goto exit_cgroup;
 }

 VAR_6 -= 2;
 VAR_7 = &VAR_7[2];
 VAR_10 = FUNC_7(&VAR_6, &VAR_7);
 if (VAR_10 < 0)
  goto exit_cgroup;

 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  if (FUNC_2(VAR_7[VAR_13], "multi")) {
   VAR_11 |= VAR_0;
  } else if (FUNC_2(VAR_7[VAR_13], "override")) {
   VAR_11 |= VAR_1;
  } else {
   FUNC_5("unknown option: %s", VAR_7[VAR_13]);
   goto exit_cgroup;
  }
 }

 if (FUNC_0(VAR_10, VAR_9, VAR_8, VAR_11)) {
  FUNC_5("failed to attach program");
  goto exit_prog;
 }

 if (VAR_4)
  FUNC_3(VAR_5);

 VAR_12 = 0;

exit_prog:
 FUNC_1(VAR_10);
exit_cgroup:
 FUNC_1(VAR_9);
exit:
 return VAR_12;
}
