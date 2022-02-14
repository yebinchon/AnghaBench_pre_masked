
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt {int mispred_all; } ;


 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, const char *VAR_1, void *VAR_2)
{
 struct intel_pt *VAR_3 = VAR_2;

 if (!FUNC_1(VAR_0, "intel-pt.mispred-all"))
  VAR_3->mispred_all = FUNC_0(VAR_0, VAR_1);

 return 0;
}
