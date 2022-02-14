
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct dummy {int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dummy* FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct work_struct *VAR_4)
{
 struct dummy *VAR_5;

 VAR_5 = FUNC_0();
 if (!VAR_5)
  return;

 FUNC_3(&VAR_3);
 FUNC_1(&VAR_5->list, &VAR_2);
 FUNC_4(&VAR_3);

 FUNC_5(&VAR_1,
  FUNC_2(1000 * VAR_0));
}
