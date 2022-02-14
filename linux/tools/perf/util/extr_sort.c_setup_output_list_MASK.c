
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_hpp_list {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct perf_hpp_list*,char*) ;
 char* FUNC_1 (char*,char*,char**) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(struct perf_hpp_list *VAR_2, char *VAR_3)
{
 char *VAR_4, *VAR_5;
 int VAR_6 = 0;

 for (VAR_5 = FUNC_1(VAR_3, ", ", &VAR_4);
   VAR_5; VAR_5 = FUNC_1(((void*)0), ", ", &VAR_4)) {
  VAR_6 = FUNC_0(VAR_2, VAR_5);
  if (VAR_6 == -VAR_0) {
   FUNC_2("Invalid --fields key: `%s'", VAR_5);
   break;
  } else if (VAR_6 == -VAR_1) {
   FUNC_2("Unknown --fields key: `%s'", VAR_5);
   break;
  }
 }

 return VAR_6;
}
