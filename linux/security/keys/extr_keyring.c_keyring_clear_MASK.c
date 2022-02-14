
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int sem; int keys; int * type; } ;
struct assoc_array_edit {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct assoc_array_edit*) ;
 int FUNC_1 (struct assoc_array_edit*) ;
 int FUNC_2 (struct assoc_array_edit*) ;
 struct assoc_array_edit* FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct key*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *) ;

int FUNC_7(struct key *VAR_3)
{
 struct assoc_array_edit *VAR_4;
 int VAR_5;

 if (VAR_3->type != &VAR_1)
  return -VAR_0;

 FUNC_4(&VAR_3->sem);

 VAR_4 = FUNC_3(&VAR_3->keys, &VAR_2);
 if (FUNC_0(VAR_4)) {
  VAR_5 = FUNC_1(VAR_4);
 } else {
  if (VAR_4)
   FUNC_2(VAR_4);
  FUNC_5(VAR_3, 0);
  VAR_5 = 0;
 }

 FUNC_6(&VAR_3->sem);
 return VAR_5;
}
