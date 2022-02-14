
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_labels {scalar_t__ count; struct __bpf_label* labels; } ;
struct __bpf_label {char const* label; int location; } ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (char const*,char const*) ;

__u32 FUNC_3(struct bpf_labels *VAR_2, const char *VAR_3)
{
 struct __bpf_label *VAR_4 = VAR_2->labels, *VAR_5;
 int VAR_6;

 if (VAR_2->count == VAR_0) {
  FUNC_1(VAR_1, "Too many labels\n");
  FUNC_0(1);
 }
 if (VAR_2->count == 0) {
  VAR_4->label = VAR_3;
  VAR_4->location = 0xffffffff;
  VAR_2->count++;
  return 0;
 }
 VAR_5 = VAR_4 + VAR_2->count;
 for (VAR_6 = 0; VAR_4 < VAR_5; ++VAR_4, ++VAR_6) {
  if (!FUNC_2(VAR_3, VAR_4->label))
   return VAR_6;
 }
 VAR_4->label = VAR_3;
 VAR_4->location = 0xffffffff;
 VAR_2->count++;
 return VAR_6;
}
