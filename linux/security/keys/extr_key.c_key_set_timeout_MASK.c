
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int time64_t ;
struct key {unsigned int expiry; int sem; } ;


 int FUNC_0 (int *) ;
 unsigned int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (int *) ;

void FUNC_4(struct key *VAR_1, unsigned VAR_2)
{
 time64_t VAR_3 = 0;


 FUNC_0(&VAR_1->sem);

 if (VAR_2 > 0)
  VAR_3 = FUNC_2() + VAR_2;

 VAR_1->expiry = VAR_3;
 FUNC_1(VAR_1->expiry + VAR_0);

 FUNC_3(&VAR_1->sem);
}
