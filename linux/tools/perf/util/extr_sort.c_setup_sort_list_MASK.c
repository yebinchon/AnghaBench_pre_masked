
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_hpp_list {int dummy; } ;
struct evlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct perf_hpp_list*,char*,struct evlist*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int ) ;
 char* FUNC_5 (char*,char*) ;

__attribute__((used)) static int FUNC_6(struct perf_hpp_list *VAR_2, char *VAR_3,
      struct evlist *VAR_4)
{
 char *VAR_5, *VAR_6;
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = 1;
 bool VAR_10 = 0;

 do {
  VAR_6 = VAR_3;
  VAR_5 = FUNC_5(VAR_3, "{}, ");
  if (VAR_5) {
   if (VAR_10)
    VAR_9 = VAR_8;
   else
    VAR_9 = VAR_8 + 1;

   if (*VAR_5 == '{')
    VAR_10 = 1;
   else if (*VAR_5 == '}')
    VAR_10 = 0;

   *VAR_5 = '\0';
   VAR_3 = VAR_5 + 1;
  }

  if (*VAR_6) {
   VAR_7 = FUNC_2(VAR_2, VAR_6, VAR_4, VAR_8);
   if (VAR_7 == -VAR_0) {
    if (!FUNC_0() && !FUNC_4(VAR_6, "dcacheline", FUNC_3(VAR_6)))
     FUNC_1("The \"dcacheline\" --sort key needs to know the cacheline size and it couldn't be determined on this system");
    else
     FUNC_1("Invalid --sort key: `%s'", VAR_6);
    break;
   } else if (VAR_7 == -VAR_1) {
    FUNC_1("Unknown --sort key: `%s'", VAR_6);
    break;
   }
  }

  VAR_8 = VAR_9;
 } while (VAR_5);

 return VAR_7;
}
