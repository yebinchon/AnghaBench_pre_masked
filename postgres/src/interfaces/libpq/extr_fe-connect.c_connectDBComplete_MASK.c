
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct addrinfo {int dummy; } ;
struct TYPE_6__ {scalar_t__ status; int whichhost; int try_next_addr; int errorMessage; struct addrinfo* addr_cur; int * connect_timeout; } ;
typedef int PostgresPollingStatusType ;
typedef TYPE_1__ PGconn ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int*,TYPE_1__*,char*) ;
 int FUNC_2 (int,int,TYPE_1__*,scalar_t__) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(PGconn *VAR_2)
{
 PostgresPollingStatusType VAR_3 = 128;
 time_t VAR_4 = ((time_t) -1);
 int VAR_5 = 0;
 int VAR_6 = -2;
 struct addrinfo *VAR_7 = ((void*)0);

 if (VAR_2 == ((void*)0) || VAR_2->status == VAR_0)
  return 0;




 if (VAR_2->connect_timeout != ((void*)0))
 {
  if (!FUNC_1(VAR_2->connect_timeout, &VAR_5, VAR_2,
        "connect_timeout"))
  {

   VAR_2->status = VAR_0;
   return 0;
  }

  if (VAR_5 > 0)
  {





   if (VAR_5 < 2)
    VAR_5 = 2;
  }
  else
   VAR_5 = 0;
 }

 for (;;)
 {
  int VAR_8 = 0;






  if (VAR_3 != 130 &&
   VAR_5 > 0 &&
   (VAR_2->whichhost != VAR_6 ||
    VAR_2->addr_cur != VAR_7))
  {
   VAR_4 = FUNC_4(((void*)0)) + VAR_5;
   VAR_6 = VAR_2->whichhost;
   VAR_7 = VAR_2->addr_cur;
  }





  switch (VAR_3)
  {
   case 130:





    FUNC_3(&VAR_2->errorMessage);
    return 1;

   case 129:
    VAR_8 = FUNC_2(1, 0, VAR_2, VAR_4);
    if (VAR_8 == -1)
    {

     VAR_2->status = VAR_0;
     return 0;
    }
    break;

   case 128:
    VAR_8 = FUNC_2(0, 1, VAR_2, VAR_4);
    if (VAR_8 == -1)
    {

     VAR_2->status = VAR_0;
     return 0;
    }
    break;

   default:

    VAR_2->status = VAR_0;
    return 0;
  }

  if (VAR_8 == 1)
  {



   VAR_2->try_next_addr = 1;
   VAR_2->status = VAR_1;
  }




  VAR_3 = FUNC_0(VAR_2);
 }
}
