
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fd_set ;
struct TYPE_4__ {int isFree; int connection; } ;
typedef TYPE_1__ ParallelSlot ;
typedef int PGresult ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int,int *,int*) ;

ParallelSlot *
FUNC_13(ParallelSlot *VAR_0, int VAR_1)
{
 int VAR_2;
 int VAR_3 = -1;





 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
 {
  if (VAR_0[VAR_2].isFree)
  {
   VAR_0[VAR_2].isFree = 0;
   return VAR_0 + VAR_2;
  }
 }





 while (VAR_3 < 0)
 {
  fd_set VAR_4;
  int VAR_5 = 0;
  bool VAR_6;


  FUNC_3(&VAR_4);

  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  {
   int VAR_7 = FUNC_7(VAR_0[VAR_2].connection);





   if (VAR_7 < 0)
    continue;

   FUNC_2(VAR_7, &VAR_4);
   if (VAR_7 > VAR_5)
    VAR_5 = VAR_7;
  }

  FUNC_9(VAR_0->connection);
  VAR_2 = FUNC_12(VAR_5, &VAR_4, &VAR_6);
  FUNC_8();

  if (VAR_6)
  {




   FUNC_10(VAR_0->connection);
   return ((void*)0);
  }
  FUNC_0(VAR_2 != 0);

  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  {
   int VAR_8 = FUNC_7(VAR_0[VAR_2].connection);

   if (VAR_8 >= 0 && FUNC_1(VAR_8, &VAR_4))
   {

    FUNC_4(VAR_0[VAR_2].connection);
   }


   while (!FUNC_6(VAR_0[VAR_2].connection))
   {
    PGresult *VAR_9 = FUNC_5(VAR_0[VAR_2].connection);

    if (VAR_9 != ((void*)0))
    {

     if (!FUNC_11(VAR_0[VAR_2].connection, VAR_9))
      return ((void*)0);
    }
    else
    {

     VAR_0[VAR_2].isFree = 1;
     if (VAR_3 < 0)
      VAR_3 = VAR_2;
     break;
    }
   }
  }
 }

 VAR_0[VAR_3].isFree = 0;
 return VAR_0 + VAR_3;
}
