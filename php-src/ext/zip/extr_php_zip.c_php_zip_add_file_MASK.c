
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
struct zip_source {int dummy; } ;
struct zip {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*,int ,int ,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct zip*) ;
 scalar_t__ FUNC_6 (struct zip*,char*,struct zip_source*,int ) ;
 struct zip_source* FUNC_7 (struct zip*,char*,long,long) ;
 int FUNC_8 (struct zip_source*) ;

__attribute__((used)) static int FUNC_9(struct zip *VAR_4, const char *VAR_5, size_t VAR_6,
 char *VAR_7, size_t VAR_8, long VAR_9, long VAR_10)
{
 struct zip_source *VAR_11;
 char VAR_12[VAR_2];
 zval VAR_13;


 if (FUNC_0(VAR_5)) {
  return -1;
 }

 if (!FUNC_2(VAR_5, VAR_12)) {
  return -1;
 }

 FUNC_3(VAR_12, FUNC_4(VAR_12), VAR_0, &VAR_13);
 if (FUNC_1(VAR_13) == VAR_1) {
  return -1;
 }

 VAR_11 = FUNC_7(VAR_4, VAR_12, VAR_9, VAR_10);
 if (!VAR_11) {
  return -1;
 }
 if (FUNC_6(VAR_4, VAR_7, VAR_11, VAR_3) < 0) {
  FUNC_8(VAR_11);
  return -1;
 } else {
  FUNC_5(VAR_4);
  return 1;
 }
}
