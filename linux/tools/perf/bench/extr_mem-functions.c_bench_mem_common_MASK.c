
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bench_mem_info {TYPE_1__* functions; int usage; } ;
typedef scalar_t__ s64 ;
struct TYPE_2__ {char* name; char* desc; } ;


 int FUNC_0 (struct bench_mem_info*,int,size_t,double) ;
 int FUNC_1 (int ,char*,...) ;
 char* VAR_0 ;
 int FUNC_2 () ;
 double VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int,char const**,int ,int ,int ) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 char* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*,int) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_8(int VAR_6, const char **VAR_7, struct bench_mem_info *VAR_8)
{
 int VAR_9;
 size_t VAR_10;
 double VAR_11;

 VAR_6 = FUNC_3(VAR_6, VAR_7, VAR_2, VAR_8->usage, 0);

 if (VAR_5) {
  VAR_9 = FUNC_2();
  if (VAR_9 < 0) {
   FUNC_1(VAR_4, "Failed to open cycles counter\n");
   return VAR_9;
  }
 }

 VAR_10 = (size_t)FUNC_4((char *)VAR_3);
 VAR_11 = (double)VAR_10 * VAR_1;

 if ((s64)VAR_10 <= 0) {
  FUNC_1(VAR_4, "Invalid size:%s\n", VAR_3);
  return 1;
 }

 if (!FUNC_7(VAR_0, "all", 3)) {
  for (VAR_9 = 0; VAR_8->functions[VAR_9].name; VAR_9++)
   FUNC_0(VAR_8, VAR_9, VAR_10, VAR_11);
  return 0;
 }

 for (VAR_9 = 0; VAR_8->functions[VAR_9].name; VAR_9++) {
  if (!FUNC_6(VAR_8->functions[VAR_9].name, VAR_0))
   break;
 }
 if (!VAR_8->functions[VAR_9].name) {
  if (FUNC_6(VAR_0, "help") && FUNC_6(VAR_0, "h"))
   FUNC_5("Unknown function: %s\n", VAR_0);
  FUNC_5("Available functions:\n");
  for (VAR_9 = 0; VAR_8->functions[VAR_9].name; VAR_9++) {
   FUNC_5("\t%s ... %s\n",
          VAR_8->functions[VAR_9].name, VAR_8->functions[VAR_9].desc);
  }
  return 1;
 }

 FUNC_0(VAR_8, VAR_9, VAR_10, VAR_11);

 return 0;
}
