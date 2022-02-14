
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {int long_name; } ;


 scalar_t__ FUNC_0 (char**,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct dso*,char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int*) ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct dso *VAR_0)
{
 char *VAR_1, *VAR_2;
 int VAR_3;

 if (FUNC_4(VAR_0->long_name, "/tmp/perf-%d.map", &VAR_3) == 1) {
  if (FUNC_0(&VAR_1, "[JIT] tid %d", VAR_3) < 0)
   return;
 } else {




  VAR_2 = FUNC_5(VAR_0->long_name);
  if (!VAR_2)
   return;






  VAR_1 = FUNC_5(FUNC_1(VAR_2));

  FUNC_3(VAR_2);

  if (!VAR_1)
   return;
 }
 FUNC_2(VAR_0, VAR_1, 1);
}
