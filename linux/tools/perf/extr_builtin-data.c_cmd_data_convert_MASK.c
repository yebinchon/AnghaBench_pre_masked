
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_data_convert_opts {int force; int all; } ;
struct option {int dummy; } ;


 struct option const FUNC_0 (float,char*,int*,char*) ;
 struct option const FUNC_1 () ;
 struct option const FUNC_2 (char,char*,int *,char*) ;
 struct option const FUNC_3 (char,char*,char const**,char*,char*) ;
 int FUNC_4 (char const*,char const*,struct perf_data_convert_opts*) ;
 int VAR_0 ;
 char const* VAR_1 ;
 int FUNC_5 (int,char const**,struct option const*,int ,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,struct option const*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8(int VAR_3, const char **VAR_4)
{
 const char *VAR_5 = ((void*)0);
 struct perf_data_convert_opts VAR_6 = {
  .force = 0,
  .all = 0,
 };
 const struct option VAR_7[] = {
  FUNC_2('v', "verbose", &VAR_2, "be more verbose"),
  FUNC_3('i', "input", &VAR_1, "file", "input file name"),



  FUNC_0('f', "force", &VAR_6.force, "don't complain, do it"),
  FUNC_0(0, "all", &VAR_6.all, "Convert all events"),
  FUNC_1()
 };


 FUNC_6("No conversion support compiled in. perf should be compiled with environment variables LIBBABELTRACE=1 and LIBBABELTRACE_DIR=/path/to/libbabeltrace/\n");
 return -1;


 VAR_3 = FUNC_5(VAR_3, VAR_4, VAR_7,
        VAR_0, 0);
 if (VAR_3) {
  FUNC_7(VAR_0, VAR_7);
  return -1;
 }

 if (VAR_5) {



  FUNC_6("The libbabeltrace support is not compiled in.\n");
  return -1;

 }

 return 0;
}
