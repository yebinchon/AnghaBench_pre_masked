
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llc_sap {int refcnt; int * sk_laddr_hash; int sk_lock; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct llc_sap* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct llc_sap *FUNC_4(void)
{
 struct llc_sap *VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 int VAR_4;

 if (VAR_3) {

  VAR_3->state = VAR_1;
  FUNC_3(&VAR_3->sk_lock);
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
   FUNC_0(&VAR_3->sk_laddr_hash[VAR_4], VAR_4);
  FUNC_2(&VAR_3->refcnt, 1);
 }
 return VAR_3;
}
