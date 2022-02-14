
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ax25_protocol {unsigned int pid; struct ax25_protocol* next; } ;


 struct ax25_protocol* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(unsigned int VAR_2)
{
 struct ax25_protocol *VAR_3;

 FUNC_0(&VAR_1);
 VAR_3 = VAR_0;
 if (VAR_3 == ((void*)0))
  goto out;

 if (VAR_3->pid == VAR_2) {
  VAR_0 = VAR_3->next;
  goto out;
 }

 while (VAR_3 != ((void*)0) && VAR_3->next != ((void*)0)) {
  if (VAR_3->next->pid == VAR_2) {
   VAR_3->next = VAR_3->next->next;
   goto out;
  }

  VAR_3 = VAR_3->next;
 }
out:
 FUNC_1(&VAR_1);
}
