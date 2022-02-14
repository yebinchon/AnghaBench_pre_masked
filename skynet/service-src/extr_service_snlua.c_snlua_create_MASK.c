
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snlua {int L; scalar_t__ mem_limit; int mem_report; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct snlua*) ;
 int FUNC_1 (struct snlua*,int ,int) ;
 struct snlua* FUNC_2 (int) ;

struct snlua *
FUNC_3(void) {
 struct snlua * VAR_2 = FUNC_2(sizeof(*VAR_2));
 FUNC_1(VAR_2,0,sizeof(*VAR_2));
 VAR_2->mem_report = VAR_0;
 VAR_2->mem_limit = 0;
 VAR_2->L = FUNC_0(VAR_1, VAR_2);
 return VAR_2;
}
