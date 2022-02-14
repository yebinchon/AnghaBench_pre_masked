
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct perf_tool {int dummy; } ;
struct machine {int dummy; } ;
struct dso {int long_name; scalar_t__ kernel; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dso*) ;
 int VAR_2 ;
 int FUNC_1 (struct perf_tool*,struct dso*,int ,int ,struct machine*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(struct dso *VAR_3, struct perf_tool *VAR_4,
    struct machine *VAR_5)
{
 u16 VAR_6 = VAR_1;
 int VAR_7;

 if (FUNC_0(VAR_3) < 0) {
  FUNC_2("no build_id found for %s\n", VAR_3->long_name);
  return -1;
 }

 if (VAR_3->kernel)
  VAR_6 = VAR_0;

 VAR_7 = FUNC_1(VAR_4, VAR_3, VAR_6, VAR_2,
           VAR_5);
 if (VAR_7) {
  FUNC_3("Can't synthesize build_id event for %s\n", VAR_3->long_name);
  return -1;
 }

 return 0;
}
