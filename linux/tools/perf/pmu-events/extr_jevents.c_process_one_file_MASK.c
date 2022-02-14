
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
struct perf_entry_data {int topic; int outfp; } ;
struct FTW {int level; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (char const*,int ,struct perf_entry_data*) ;
 int VAR_5 ;
 int FUNC_7 (char*,char*,int,int ,char*,char const*) ;
 int FUNC_8 (char*,int ,char const*) ;
 int VAR_6 ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ) ;
 int VAR_7 ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char const*) ;

__attribute__((used)) static int FUNC_13(const char *VAR_8, const struct stat *VAR_9,
       int VAR_10, struct FTW *VAR_11)
{
 char *VAR_12, *VAR_13;
 int VAR_14 = VAR_10 == VAR_1;
 int VAR_15 = VAR_10 == VAR_2;
 int VAR_16 = VAR_11->level;
 int VAR_17 = 0;

 if (VAR_16 == 2 && VAR_14) {





  VAR_13 = (char *) VAR_8 + VAR_11->base - 2;
  for (;;) {
   if (*VAR_13 == '/')
    break;
   VAR_13--;
  }
  VAR_13++;
 } else
  VAR_13 = (char *) VAR_8 + VAR_11->base;

 FUNC_7("%s %d %7jd %-20s %s\n",
   VAR_15 ? "f" : VAR_14 ? "d" : "x",
   VAR_16, VAR_9->st_size, VAR_13, VAR_8);


 if (VAR_16 == 0 || VAR_16 > 3)
  return 0;



 if ((VAR_16 == 1 && VAR_14 && FUNC_5(VAR_8)) ||
     (VAR_16 == 2 && VAR_14)) {
  if (VAR_3)
   FUNC_10(VAR_4);






  VAR_12 = FUNC_1(VAR_13);
  if (!VAR_12) {
   FUNC_8("%s: Error determining table name for %s\n", VAR_7,
    VAR_13);
   return -1;
  }

  FUNC_9(VAR_4, VAR_12);
  return 0;
 }







 if (VAR_16 == 1 && VAR_15) {
  if (!FUNC_11(VAR_13, "mapfile.csv")) {
   VAR_5 = FUNC_12(VAR_8);
   return 0;
  }

  FUNC_8("%s: Ignoring file %s\n", VAR_7, VAR_8);
  return 0;
 }





 if (VAR_15) {
  if (!FUNC_4(VAR_13)) {
   FUNC_8("%s: Ignoring file without .json suffix %s\n", VAR_7,
    VAR_8);
   return 0;
  }
 }

 if (VAR_16 > 1 && FUNC_0(VAR_13))
  return -VAR_0;
 if (VAR_15) {
  struct perf_entry_data VAR_18 = {
   .topic = FUNC_3(),
   .outfp = VAR_4,
  };

  VAR_17 = FUNC_6(VAR_8, VAR_6, &VAR_18);

  FUNC_2(VAR_18.topic);
 }

 return VAR_17;
}
