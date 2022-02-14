
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* TransactionState ;
struct TYPE_3__ {scalar_t__ blockState; struct TYPE_3__* parent; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char const*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

bool
FUNC_3(const char *VAR_7)
{
 TransactionState VAR_8;
 bool VAR_9;


 VAR_9 = FUNC_1(0);


 if (VAR_9)
 {
  VAR_8 = VAR_0;

  while (VAR_8->parent != ((void*)0))
   VAR_8 = VAR_8->parent;

  if (VAR_8->blockState == VAR_1)
  {

   VAR_6 = FUNC_2(VAR_5, VAR_7);

   VAR_8->blockState = VAR_3;
  }
  else
  {




   FUNC_0(VAR_8->blockState == VAR_4 ||
       VAR_8->blockState == VAR_2);

   VAR_9 = 0;
  }
 }

 return VAR_9;
}
