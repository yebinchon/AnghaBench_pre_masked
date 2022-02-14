
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t st_size; int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*,char const*) ;
 TYPE_1__ VAR_8 ;
 int FUNC_4 (char*,char*,char const*) ;
 int FUNC_5 (char const*) ;
 size_t FUNC_6 (scalar_t__,int ,size_t) ;

__attribute__((used)) static int FUNC_7(const char *VAR_9)
{
 char VAR_10[FUNC_5(VAR_9) + 4];
 size_t VAR_11;

 if (!VAR_7)
  return 0;

 FUNC_4(VAR_10, "%s.rc", VAR_9);






 VAR_3 = FUNC_1(VAR_10, VAR_2 | VAR_1 | VAR_0, VAR_8.st_mode);
 if (VAR_3 < 0) {
  FUNC_2(VAR_9);
  return -1;
 }
 VAR_11 = FUNC_6(VAR_3, VAR_6, VAR_8.st_size);
 if (VAR_11 != VAR_8.st_size) {
  FUNC_2("write");
  FUNC_0(VAR_3);
  return -1;
 }
 if (VAR_5) {
  VAR_11 = FUNC_6(VAR_3, VAR_4, VAR_5);
  if (VAR_11 != VAR_5) {
   FUNC_2("write");
   FUNC_0(VAR_3);
   return -1;
  }
 }
 FUNC_0(VAR_3);
 if (FUNC_3(VAR_10, VAR_9) < 0) {
  FUNC_2(VAR_9);
  return -1;
 }
 return 0;
}
