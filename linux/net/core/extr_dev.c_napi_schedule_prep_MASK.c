
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct napi_struct {int state; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int *,unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long) ;

bool FUNC_3(struct napi_struct *VAR_3)
{
 unsigned long VAR_4, VAR_5;

 do {
  VAR_4 = FUNC_0(VAR_3->state);
  if (FUNC_2(VAR_4 & VAR_0))
   return 0;
  VAR_5 = VAR_4 | VAR_2;







  VAR_5 |= (VAR_4 & VAR_2) / VAR_2 *
         VAR_1;
 } while (FUNC_1(&VAR_3->state, VAR_4, VAR_5) != VAR_4);

 return !(VAR_4 & VAR_2);
}
