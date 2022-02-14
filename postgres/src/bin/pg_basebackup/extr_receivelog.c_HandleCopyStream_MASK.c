
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int XLogRecPtr ;
typedef int TimestampTz ;
struct TYPE_9__ {int stop_socket; int standby_message_timeout; TYPE_1__* walmethod; scalar_t__ synchronous; int startpos; } ;
struct TYPE_8__ {scalar_t__ (* sync ) (int *) ;int (* getlasterror ) () ;} ;
typedef TYPE_2__ StreamCtl ;
typedef int PGresult ;
typedef int PGconn ;


 long FUNC_0 (int,int ,int) ;
 int FUNC_1 (int *,TYPE_2__*,int ,int *) ;
 int FUNC_2 (int *,long,int ,char**) ;
 int * FUNC_3 (int *,TYPE_2__*,char*,int ,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,TYPE_2__*,char*,int,int ,int*) ;
 int FUNC_6 (int *,TYPE_2__*,char*,int,int *) ;
 int VAR_0 ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int,int,int ) ;
 int VAR_1 ;
 int FUNC_10 (char*,char) ;
 int FUNC_11 (char*,int ,int ) ;
 int FUNC_12 (int *,int ,int,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 () ;
 int * VAR_3 ;

__attribute__((used)) static PGresult *
FUNC_15(PGconn *VAR_4, StreamCtl *VAR_5,
     XLogRecPtr *VAR_6)
{
 char *VAR_7 = ((void*)0);
 TimestampTz VAR_8 = -1;
 XLogRecPtr VAR_9 = VAR_5->startpos;

 VAR_2 = 1;

 while (1)
 {
  int VAR_10;
  TimestampTz VAR_11;
  long VAR_12;




  if (!FUNC_1(VAR_4, VAR_5, VAR_9, VAR_6))
   goto error;

  VAR_11 = FUNC_8();





  if (VAR_5->synchronous && VAR_1 < VAR_9 && VAR_3 != ((void*)0))
  {
   if (VAR_5->walmethod->sync(VAR_3) != 0)
   {
    FUNC_11("could not fsync file \"%s\": %s",
        VAR_0, VAR_5->walmethod->getlasterror());
    FUNC_7(1);
   }
   VAR_1 = VAR_9;





   if (!FUNC_12(VAR_4, VAR_9, VAR_11, 0))
    goto error;
   VAR_8 = VAR_11;
  }




  if (VAR_2 && VAR_5->standby_message_timeout > 0 &&
   FUNC_9(VAR_8, VAR_11,
           VAR_5->standby_message_timeout))
  {

   if (!FUNC_12(VAR_4, VAR_9, VAR_11, 0))
    goto error;
   VAR_8 = VAR_11;
  }




  VAR_12 = FUNC_0(VAR_11, VAR_5->standby_message_timeout,
             VAR_8);

  VAR_10 = FUNC_2(VAR_4, VAR_12, VAR_5->stop_socket, &VAR_7);
  while (VAR_10 != 0)
  {
   if (VAR_10 == -1)
    goto error;
   if (VAR_10 == -2)
   {
    PGresult *VAR_13 = FUNC_3(VAR_4, VAR_5, VAR_7, VAR_9, VAR_6);

    if (VAR_13 == ((void*)0))
     goto error;
    else
     return VAR_13;
   }


   if (VAR_7[0] == 'k')
   {
    if (!FUNC_5(VAR_4, VAR_5, VAR_7, VAR_10, VAR_9,
           &VAR_8))
     goto error;
   }
   else if (VAR_7[0] == 'w')
   {
    if (!FUNC_6(VAR_4, VAR_5, VAR_7, VAR_10, &VAR_9))
     goto error;





    if (!FUNC_1(VAR_4, VAR_5, VAR_9, VAR_6))
     goto error;
   }
   else
   {
    FUNC_10("unrecognized streaming header: \"%c\"",
        VAR_7[0]);
    goto error;
   }





   VAR_10 = FUNC_2(VAR_4, 0, VAR_5->stop_socket, &VAR_7);
  }
 }

error:
 if (VAR_7 != ((void*)0))
  FUNC_4(VAR_7);
 return ((void*)0);
}
