
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int sem; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct key*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct key*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct key *VAR_1)
{
 FUNC_1("%d", FUNC_4(VAR_1));

 FUNC_2(VAR_1);

 if (!FUNC_6(VAR_0, &VAR_1->flags)) {
  FUNC_0(&VAR_1->sem, 1);
  if (!FUNC_5(VAR_0, &VAR_1->flags))
   FUNC_3();
  FUNC_7(&VAR_1->sem);
 }
}
