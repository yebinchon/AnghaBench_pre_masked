
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int data; } ;
struct TYPE_9__ {char* outBuffer; int outCount; int write_failed; scalar_t__ sock; TYPE_2__ errorMessage; void* write_err_msg; } ;
typedef TYPE_1__ PGconn ;





 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int,int,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char*,int) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 void* FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(PGconn *VAR_2, int VAR_3)
{
 char *VAR_4 = VAR_2->outBuffer;
 int VAR_5 = VAR_2->outCount;
 int VAR_6 = 0;
 if (VAR_2->write_failed)
 {

  VAR_2->outCount = 0;
  return 0;
 }

 if (VAR_2->sock == VAR_0)
 {
  FUNC_7(&VAR_2->errorMessage,
        FUNC_1("connection not open\n"));
  VAR_2->write_failed = 1;


  VAR_2->write_err_msg = FUNC_9(VAR_2->errorMessage.data);
  FUNC_8(&VAR_2->errorMessage);

  VAR_2->outCount = 0;
  return 0;
 }


 while (VAR_3 > 0)
 {
  int VAR_7;


  VAR_7 = FUNC_6(VAR_2, VAR_4, VAR_3);
  if (VAR_7 < 0)
  {

   switch (VAR_1)
   {

    case 130:
     break;


    case 128:
     break;

    case 129:
     continue;

    default:

     VAR_2->write_failed = 1;
     VAR_2->write_err_msg = FUNC_9(VAR_2->errorMessage.data);
     FUNC_8(&VAR_2->errorMessage);


     VAR_2->outCount = 0;
     return 0;
   }
  }
  else
  {
   VAR_4 += VAR_7;
   VAR_3 -= VAR_7;
   VAR_5 -= VAR_7;
  }

  if (VAR_3 > 0)
  {
   if (FUNC_4(VAR_2) < 0)
   {
    VAR_6 = -1;
    break;
   }

   if (FUNC_3(VAR_2))
   {
    VAR_6 = 1;
    break;
   }

   if (FUNC_5(1, 1, VAR_2))
   {
    VAR_6 = -1;
    break;
   }
  }
 }


 if (VAR_5 > 0)
  FUNC_2(VAR_2->outBuffer, VAR_4, VAR_5);
 VAR_2->outCount = VAR_5;

 return VAR_6;
}
