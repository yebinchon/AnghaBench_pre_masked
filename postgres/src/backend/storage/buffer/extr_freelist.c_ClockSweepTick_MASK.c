
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_2__ {int buffer_strategy_lock; int completePasses; int nextVictimBuffer; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int *,int*,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static inline uint32
FUNC_4(void)
{
 uint32 VAR_2;






 VAR_2 =
  FUNC_3(&VAR_1->nextVictimBuffer, 1);

 if (VAR_2 >= VAR_0)
 {
  uint32 VAR_3 = VAR_2;


  VAR_2 = VAR_2 % VAR_0;







  if (VAR_2 == 0)
  {
   uint32 VAR_4;
   uint32 VAR_5;
   bool VAR_6 = 0;

   VAR_4 = VAR_3 + 1;

   while (!VAR_6)
   {
    FUNC_0(&VAR_1->buffer_strategy_lock);

    VAR_5 = VAR_4 % VAR_0;

    VAR_6 = FUNC_2(&VAR_1->nextVictimBuffer,
               &VAR_4, VAR_5);
    if (VAR_6)
     VAR_1->completePasses++;
    FUNC_1(&VAR_1->buffer_strategy_lock);
   }
  }
 }
 return VAR_2;
}
