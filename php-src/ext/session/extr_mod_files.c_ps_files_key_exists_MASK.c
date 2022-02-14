
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_stat_t ;
typedef int ps_files ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int,int *,char const*) ;

__attribute__((used)) static int FUNC_2(ps_files *VAR_3, const char *VAR_4)
{
 char VAR_5[VAR_1];
 zend_stat_t VAR_6;

 if (!VAR_4 || !FUNC_1(VAR_5, sizeof(VAR_5), VAR_3, VAR_4)) {
  return VAR_0;
 }
 if (FUNC_0(VAR_5, &VAR_6)) {
  return VAR_0;
 }
 return VAR_2;
}
