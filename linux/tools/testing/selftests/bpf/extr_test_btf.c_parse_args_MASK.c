
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int always_log; int file_test_num; int file_test; int raw_test_num; int raw_test; int get_info_test_num; int get_info_test; int pprint_test; int info_raw_test_num; int info_raw_test; int dedup_test_num; int dedup_test; } ;


 int FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 void* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_3 ;
 int FUNC_4 (int,char**,char const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(int VAR_8, char **VAR_9)
{
 const char *VAR_10 = "hlpk:f:r:g:d:";
 int VAR_11;

 while ((VAR_11 = FUNC_4(VAR_8, VAR_9, VAR_10)) != -1) {
  switch (VAR_11) {
  case 'l':
   VAR_0.always_log = 1;
   break;
  case 'f':
   VAR_0.file_test_num = FUNC_1(VAR_5);
   VAR_0.file_test = 1;
   break;
  case 'r':
   VAR_0.raw_test_num = FUNC_1(VAR_5);
   VAR_0.raw_test = 1;
   break;
  case 'g':
   VAR_0.get_info_test_num = FUNC_1(VAR_5);
   VAR_0.get_info_test = 1;
   break;
  case 'p':
   VAR_0.pprint_test = 1;
   break;
  case 'k':
   VAR_0.info_raw_test_num = FUNC_1(VAR_5);
   VAR_0.info_raw_test = 1;
   break;
  case 'd':
   VAR_0.dedup_test_num = FUNC_1(VAR_5);
   VAR_0.dedup_test = 1;
   break;
  case 'h':
   FUNC_5(VAR_9[0]);
   FUNC_2(0);
  default:
   FUNC_5(VAR_9[0]);
   return -1;
  }
 }

 if (VAR_0.raw_test_num &&
     (VAR_0.raw_test_num < 1 ||
      VAR_0.raw_test_num > FUNC_0(VAR_6))) {
  FUNC_3(VAR_7, "BTF raw test number must be [1 - %d]\n",
   FUNC_0(VAR_6));
  return -1;
 }

 if (VAR_0.file_test_num &&
     (VAR_0.file_test_num < 1 ||
      VAR_0.file_test_num > FUNC_0(VAR_2))) {
  FUNC_3(VAR_7, "BTF file test number must be [1 - %d]\n",
   FUNC_0(VAR_2));
  return -1;
 }

 if (VAR_0.get_info_test_num &&
     (VAR_0.get_info_test_num < 1 ||
      VAR_0.get_info_test_num > FUNC_0(VAR_3))) {
  FUNC_3(VAR_7, "BTF get info test number must be [1 - %d]\n",
   FUNC_0(VAR_3));
  return -1;
 }

 if (VAR_0.info_raw_test_num &&
     (VAR_0.info_raw_test_num < 1 ||
      VAR_0.info_raw_test_num > FUNC_0(VAR_4))) {
  FUNC_3(VAR_7, "BTF prog info raw test number must be [1 - %d]\n",
   FUNC_0(VAR_4));
  return -1;
 }

 if (VAR_0.dedup_test_num &&
     (VAR_0.dedup_test_num < 1 ||
      VAR_0.dedup_test_num > FUNC_0(VAR_1))) {
  FUNC_3(VAR_7, "BTF dedup test number must be [1 - %d]\n",
   FUNC_0(VAR_1));
  return -1;
 }

 return 0;
}
