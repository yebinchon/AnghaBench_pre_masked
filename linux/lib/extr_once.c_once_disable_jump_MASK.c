
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct static_key_true {int dummy; } ;
struct once_work {int work; struct static_key_true* key; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct once_work* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct static_key_true *VAR_2)
{
 struct once_work *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return;

 FUNC_0(&VAR_3->work, VAR_1);
 VAR_3->key = VAR_2;
 FUNC_2(&VAR_3->work);
}
