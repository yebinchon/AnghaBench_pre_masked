
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int file ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char const*,char const*) ;
 int FUNC_2 (char*,int,char*,char const*,char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_3,
       const char *VAR_4)
{
 char VAR_5[VAR_1];
 int VAR_6;

 VAR_6 = FUNC_2(VAR_5, sizeof(VAR_5),
         "/sys/kernel/debug/tracing/events/%s/%s/id",
         VAR_3, VAR_4);
 if (VAR_6 < 0)
  return -VAR_2;
 if (VAR_6 >= sizeof(VAR_5)) {
  FUNC_1("tracepoint %s/%s path is too long\n",
    VAR_3, VAR_4);
  return -VAR_0;
 }
 return FUNC_0(VAR_5, "%d\n");
}
