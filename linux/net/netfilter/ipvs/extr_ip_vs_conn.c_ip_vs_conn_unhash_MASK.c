
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_conn {int flags; int lock; int refcnt; int c_list; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (struct ip_vs_conn*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline int FUNC_7(struct ip_vs_conn *VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;


 VAR_2 = FUNC_3(VAR_1);

 FUNC_0(VAR_2);
 FUNC_5(&VAR_1->lock);

 if (VAR_1->flags & VAR_0) {
  FUNC_2(&VAR_1->c_list);
  VAR_1->flags &= ~VAR_0;
  FUNC_4(&VAR_1->refcnt);
  VAR_3 = 1;
 } else
  VAR_3 = 0;

 FUNC_6(&VAR_1->lock);
 FUNC_1(VAR_2);

 return VAR_3;
}
