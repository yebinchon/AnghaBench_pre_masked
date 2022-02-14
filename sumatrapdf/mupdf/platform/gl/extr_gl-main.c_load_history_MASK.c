
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_5__ {void* loc; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int,char*) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int * FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,int) ;
 TYPE_1__* VAR_7 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*) ;
 void* FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(void)
{
 js_State *VAR_8;
 char VAR_9[VAR_0];
 int VAR_10, VAR_11;

 if (!FUNC_10(VAR_2, VAR_9))
  return;

 VAR_8 = FUNC_6(((void*)0), ((void*)0), 0);

 FUNC_9(VAR_8);

 if (FUNC_4(VAR_8, -1, VAR_9))
 {
  if (FUNC_4(VAR_8, -1, "current"))
  {
   VAR_1 = FUNC_11(VAR_8);
   FUNC_7(VAR_8, 1);
  }

  if (FUNC_4(VAR_8, -1, "history"))
  {
   if (FUNC_5(VAR_8, -1))
   {
    VAR_6 = FUNC_0(FUNC_3(VAR_8, -1), 0, FUNC_8(VAR_5));
    for (VAR_10 = 0; VAR_10 < VAR_6; ++VAR_10)
    {
     FUNC_2(VAR_8, -1, VAR_10);
     VAR_5[VAR_10].loc = FUNC_11(VAR_8);
     FUNC_7(VAR_8, 1);
    }
   }
   FUNC_7(VAR_8, 1);
  }

  if (FUNC_4(VAR_8, -1, "future"))
  {
   if (FUNC_5(VAR_8, -1))
   {
    VAR_4 = FUNC_0(FUNC_3(VAR_8, -1), 0, FUNC_8(VAR_3));
    for (VAR_10 = 0; VAR_10 < VAR_4; ++VAR_10)
    {
     FUNC_2(VAR_8, -1, VAR_10);
     VAR_3[VAR_10].loc = FUNC_11(VAR_8);
     FUNC_7(VAR_8, 1);
    }
   }
   FUNC_7(VAR_8, 1);
  }

  if (FUNC_4(VAR_8, -1, "marks"))
  {
   if (FUNC_5(VAR_8, -1))
   {
    VAR_11 = FUNC_0(FUNC_3(VAR_8, -1), 0, FUNC_8(VAR_7));
    for (VAR_10 = 0; VAR_10 < VAR_11; ++VAR_10)
    {
     FUNC_2(VAR_8, -1, VAR_10);
     VAR_7[VAR_10].loc = FUNC_11(VAR_8);
     FUNC_7(VAR_8, 1);
    }
   }
   FUNC_7(VAR_8, 1);
  }
 }

 FUNC_1(VAR_8);
}
