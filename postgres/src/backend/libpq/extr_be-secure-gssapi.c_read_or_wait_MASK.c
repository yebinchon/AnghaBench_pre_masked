
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_4__ {int sock; } ;
typedef TYPE_1__ Port ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int,int ,int ,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static ssize_t
FUNC_2(Port *VAR_9, ssize_t VAR_10)
{
 ssize_t VAR_11;





 while (VAR_4 != VAR_10)
 {
  VAR_11 = FUNC_1(VAR_9, VAR_3 + VAR_4, VAR_10 - VAR_4);





  if (VAR_11 < 0 && !(VAR_8 == VAR_1 || VAR_8 == VAR_0))
   return -1;
  if (VAR_11 <= 0)
  {




   if (VAR_11 < 0 && !(VAR_8 == VAR_1 || VAR_8 == VAR_0))
    return -1;





   FUNC_0(VAR_2,
         VAR_7 | VAR_6,
         VAR_9->sock, 0, VAR_5);
   if (VAR_11 == 0)
   {
    VAR_11 = FUNC_1(VAR_9, VAR_3 + VAR_4, VAR_10 - VAR_4);
    if (VAR_11 == 0)
     return -1;
   }
   else
    continue;
  }

  VAR_4 += VAR_11;
 }

 return VAR_10;
}
