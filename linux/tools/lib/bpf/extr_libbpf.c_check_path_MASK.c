
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {scalar_t__ f_type; } ;
typedef int errmsg ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char*) ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,char*,int) ;
 int FUNC_3 (char*,char const*,...) ;
 scalar_t__ FUNC_4 (char*,struct statfs*) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_5)
{
 char *VAR_6, VAR_7[VAR_3];
 struct statfs VAR_8;
 char *VAR_9, *VAR_10;
 int VAR_11 = 0;

 if (VAR_5 == ((void*)0))
  return -VAR_1;

 VAR_9 = FUNC_5(VAR_5);
 if (VAR_9 == ((void*)0))
  return -VAR_2;

 VAR_10 = FUNC_0(VAR_9);
 if (FUNC_4(VAR_10, &VAR_8)) {
  VAR_6 = FUNC_2(VAR_4, VAR_7, sizeof(VAR_7));
  FUNC_3("failed to statfs %s: %s\n", VAR_10, VAR_6);
  VAR_11 = -VAR_4;
 }
 FUNC_1(VAR_9);

 if (!VAR_11 && VAR_8.f_type != VAR_0) {
  FUNC_3("specified path %s is not on BPF FS\n", VAR_5);
  VAR_11 = -VAR_1;
 }

 return VAR_11;
}
