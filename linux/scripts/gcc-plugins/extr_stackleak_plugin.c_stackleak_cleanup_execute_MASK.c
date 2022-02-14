
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx_insn ;
typedef int * rtx ;
struct TYPE_2__ {scalar_t__ calls_alloca; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int * FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ VAR_4 ;
 int * FUNC_4 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *,int ) ;
 int * FUNC_7 (int *,int ,int ) ;
 TYPE_1__* VAR_6 ;
 int FUNC_8 (int *) ;
 int * FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static unsigned int FUNC_11(void)
{
 rtx_insn *VAR_8, *VAR_9;

 if (VAR_6->calls_alloca)
  return 0;

 if (FUNC_10())
  return 0;
 for (VAR_8 = FUNC_9(); VAR_8; VAR_8 = VAR_9) {
  rtx VAR_10;

  VAR_9 = FUNC_2(VAR_8);


  if (!FUNC_0(VAR_8))
   continue;






  VAR_10 = FUNC_4(VAR_8);

  if (FUNC_1(VAR_10) == VAR_4)
   VAR_10 = FUNC_7(VAR_10, 0, 0);

  if (FUNC_1(VAR_10) != VAR_0)
   continue;






  VAR_10 = FUNC_6(VAR_10, 0);
  if (FUNC_1(VAR_10) != VAR_1)
   continue;

  VAR_10 = FUNC_6(VAR_10, 0);
  if (FUNC_1(VAR_10) != VAR_5)
   continue;

  if (FUNC_5(VAR_10) != VAR_7)
   continue;


  FUNC_8(VAR_8);
 }

 return 0;
}
