
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {scalar_t__ level; } ;
struct aa_ns {scalar_t__ level; } ;


 struct aa_ns* FUNC_0 () ;
 scalar_t__ FUNC_1 (struct aa_ns*,struct aa_ns*,int) ;
 int FUNC_2 (struct aa_ns*) ;
 int FUNC_3 () ;
 struct user_namespace* FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 struct user_namespace VAR_0 ;
 int FUNC_6 (struct user_namespace*,int ) ;
 int FUNC_7 (struct user_namespace*,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ VAR_1 ;

bool FUNC_9(struct aa_ns *VAR_2)
{
 struct user_namespace *VAR_3 = FUNC_4();
 struct aa_ns *VAR_4 = FUNC_0();
 bool VAR_5 = FUNC_8(FUNC_3(), FUNC_7(VAR_3, 0)) ||
          FUNC_5(FUNC_6(VAR_3, 0));
 bool VAR_6 = 0;
 if (!VAR_2)
  VAR_2 = VAR_4;

 if (VAR_5 && FUNC_1(VAR_4, VAR_2, 1) &&
     (VAR_3 == &VAR_0 ||
      (VAR_1 != 0 &&
       VAR_3->level == VAR_4->level)))
  VAR_6 = 1;
 FUNC_2(VAR_4);

 return VAR_6;
}
