
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *
FUNC_0(int VAR_0)
{
 switch (VAR_0) {
 case 131:
  return "BPF_B";
 case 129:
  return "BPF_H";
 case 128:
  return "BPF_W";
 case 130:
  return "BPF_DW";
 default:
  return "UNKNOWN";
 }
}
