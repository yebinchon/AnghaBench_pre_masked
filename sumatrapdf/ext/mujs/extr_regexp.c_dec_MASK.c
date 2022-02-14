
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cstate {int dummy; } ;


 int FUNC_0 (struct cstate*,char*) ;

__attribute__((used)) static int FUNC_1(struct cstate *VAR_0, int VAR_1)
{
 if (VAR_1 >= '0' && VAR_1 <= '9') return VAR_1 - '0';
 FUNC_0(VAR_0, "invalid quantifier");
 return 0;
}
