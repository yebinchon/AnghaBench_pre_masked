
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u64 ;
typedef int __u32 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(int VAR_0, int VAR_1, __u32 VAR_2, __u32 VAR_3,
        char *VAR_4, __u64 VAR_5, __u64 VAR_6)
{
 FUNC_0("pid %d  fd %d: prog_id %u  ", VAR_0, VAR_1, VAR_2);
 switch (VAR_3) {
 case 131:
  FUNC_0("raw_tracepoint  %s\n", VAR_4);
  break;
 case 130:
  FUNC_0("tracepoint  %s\n", VAR_4);
  break;
 case 133:
  if (VAR_4[0] != '\0')
   FUNC_0("kprobe  func %s  offset %llu\n", VAR_4,
          VAR_5);
  else
   FUNC_0("kprobe  addr %llu\n", VAR_6);
  break;
 case 132:
  if (VAR_4[0] != '\0')
   FUNC_0("kretprobe  func %s  offset %llu\n", VAR_4,
          VAR_5);
  else
   FUNC_0("kretprobe  addr %llu\n", VAR_6);
  break;
 case 129:
  FUNC_0("uprobe  filename %s  offset %llu\n", VAR_4, VAR_5);
  break;
 case 128:
  FUNC_0("uretprobe  filename %s  offset %llu\n", VAR_4,
         VAR_5);
  break;
 default:
  break;
 }
}
