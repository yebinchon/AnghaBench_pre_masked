
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vringh_kiov {int max_num; int used; int i; int consumed; int * iov; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct vringh_kiov *VAR_1)
{
 if (VAR_1->max_num & VAR_0)
  FUNC_0(VAR_1->iov);
 VAR_1->max_num = VAR_1->used = VAR_1->i = VAR_1->consumed = 0;
 VAR_1->iov = ((void*)0);
}
