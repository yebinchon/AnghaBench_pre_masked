
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u64 ;
typedef int __u32 ;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static void FUNC_6(int VAR_1, int VAR_2, __u32 VAR_3, __u32 VAR_4,
       char *VAR_5, __u64 VAR_6, __u64 VAR_7)
{
 FUNC_3(VAR_0);
 FUNC_1(VAR_0, "pid", VAR_1);
 FUNC_1(VAR_0, "fd", VAR_2);
 FUNC_5(VAR_0, "prog_id", VAR_3);
 switch (VAR_4) {
 case 131:
  FUNC_4(VAR_0, "fd_type", "raw_tracepoint");
  FUNC_4(VAR_0, "tracepoint", VAR_5);
  break;
 case 130:
  FUNC_4(VAR_0, "fd_type", "tracepoint");
  FUNC_4(VAR_0, "tracepoint", VAR_5);
  break;
 case 133:
  FUNC_4(VAR_0, "fd_type", "kprobe");
  if (VAR_5[0] != '\0') {
   FUNC_4(VAR_0, "func", VAR_5);
   FUNC_2(VAR_0, "offset", VAR_6);
  } else {
   FUNC_2(VAR_0, "addr", VAR_7);
  }
  break;
 case 132:
  FUNC_4(VAR_0, "fd_type", "kretprobe");
  if (VAR_5[0] != '\0') {
   FUNC_4(VAR_0, "func", VAR_5);
   FUNC_2(VAR_0, "offset", VAR_6);
  } else {
   FUNC_2(VAR_0, "addr", VAR_7);
  }
  break;
 case 129:
  FUNC_4(VAR_0, "fd_type", "uprobe");
  FUNC_4(VAR_0, "filename", VAR_5);
  FUNC_2(VAR_0, "offset", VAR_6);
  break;
 case 128:
  FUNC_4(VAR_0, "fd_type", "uretprobe");
  FUNC_4(VAR_0, "filename", VAR_5);
  FUNC_2(VAR_0, "offset", VAR_6);
  break;
 default:
  break;
 }
 FUNC_0(VAR_0);
}
