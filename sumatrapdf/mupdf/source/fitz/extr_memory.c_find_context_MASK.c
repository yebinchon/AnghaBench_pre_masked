
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int user; int (* unlock ) (int ,int ) ;int (* lock ) (int ,int ) ;} ;
struct TYPE_6__ {TYPE_1__ locks; } ;
typedef TYPE_2__ fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__** VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(fz_context *VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
 {
  if (VAR_4[VAR_7] == VAR_6)
   return VAR_7;
  if (VAR_4[VAR_7] == ((void*)0))
  {
   int VAR_8 = 0;





   VAR_6->locks.lock(VAR_6->locks.user, VAR_0);


   if (VAR_4[VAR_7] == ((void*)0))
   {
    VAR_8 = 1;
    VAR_4[VAR_7] = VAR_6;
   }
   VAR_6->locks.unlock(VAR_6->locks.user, VAR_0);
   if (VAR_8)
    return VAR_7;
  }
 }
 return -1;
}
