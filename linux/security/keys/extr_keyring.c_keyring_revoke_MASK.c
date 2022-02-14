
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int keys; } ;
struct assoc_array_edit {int dummy; } ;


 int FUNC_0 (struct assoc_array_edit*) ;
 int FUNC_1 (struct assoc_array_edit*) ;
 struct assoc_array_edit* FUNC_2 (int *,int *) ;
 int FUNC_3 (struct key*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct key *VAR_1)
{
 struct assoc_array_edit *VAR_2;

 VAR_2 = FUNC_2(&VAR_1->keys, &VAR_0);
 if (!FUNC_0(VAR_2)) {
  if (VAR_2)
   FUNC_1(VAR_2);
  FUNC_3(VAR_1, 0);
 }
}
