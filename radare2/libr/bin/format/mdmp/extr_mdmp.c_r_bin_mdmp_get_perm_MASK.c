
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;
typedef int ut32 ;
struct r_bin_mdmp_obj {int dummy; } ;
struct minidump_memory_info {int protect; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct minidump_memory_info* FUNC_0 (struct r_bin_mdmp_obj*,int ) ;

ut32 FUNC_1(struct r_bin_mdmp_obj *VAR_5, ut64 VAR_6) {
 struct minidump_memory_info *VAR_7;

 if (!(VAR_7 = FUNC_0(VAR_5, VAR_6))) {

  return VAR_0;
 }



 switch (VAR_7->protect) {
 case 131:
  return VAR_0;
 case 130:
  return VAR_1;
 case 138:
  return VAR_4;
 case 137:
  return VAR_3;
 case 136:
  return VAR_2;
 case 133:
 case 128:
 case 135:
 case 134:
 case 132:
 case 129:
 default:
  return 0;
 }
}
