
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_label {int dummy; } ;


 struct aa_label* FUNC_0 () ;
 struct aa_label* FUNC_1 (struct aa_label*) ;
 int FUNC_2 (struct aa_label*) ;
 scalar_t__ FUNC_3 (struct aa_label*) ;
 scalar_t__ FUNC_4 (struct aa_label*) ;
 int FUNC_5 () ;

__attribute__((used)) static inline struct aa_label *FUNC_6(void)
{
 struct aa_label *VAR_0 = FUNC_0();

 FUNC_5();

 if (FUNC_4(VAR_0)) {
  VAR_0 = FUNC_1(VAR_0);
  if (FUNC_3(VAR_0) == 0)

   FUNC_2(VAR_0);
 }

 return VAR_0;
}
