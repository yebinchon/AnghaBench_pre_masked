
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_conn {int flags; int lock; int c_list; int refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (struct ip_vs_conn*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline bool FUNC_7(struct ip_vs_conn *VAR_2)
{
 unsigned int VAR_3;
 bool VAR_4 = 0;

 if (VAR_2->flags & VAR_1)
  return FUNC_4(&VAR_2->refcnt);

 VAR_3 = FUNC_3(VAR_2);

 FUNC_0(VAR_3);
 FUNC_5(&VAR_2->lock);

 if (VAR_2->flags & VAR_0) {

  if (FUNC_4(&VAR_2->refcnt)) {
   FUNC_2(&VAR_2->c_list);
   VAR_2->flags &= ~VAR_0;
   VAR_4 = 1;
  }
 }

 FUNC_6(&VAR_2->lock);
 FUNC_1(VAR_3);

 return VAR_4;
}
