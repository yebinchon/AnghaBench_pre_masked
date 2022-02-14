
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
typedef int TimestampTz ;
struct TYPE_5__ {TYPE_1__* walmethod; } ;
struct TYPE_4__ {scalar_t__ (* sync ) (int *) ;int (* getlasterror ) () ;} ;
typedef TYPE_2__ StreamCtl ;
typedef int PGconn ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *,scalar_t__,int ,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 () ;
 int * VAR_4 ;

__attribute__((used)) static bool
FUNC_7(PGconn *VAR_5, StreamCtl *VAR_6, char *VAR_7, int VAR_8,
     XLogRecPtr VAR_9, TimestampTz *VAR_10)
{
 int VAR_11;
 bool VAR_12;
 TimestampTz VAR_13;





 VAR_11 = 1;
 VAR_11 += 8;
 VAR_11 += 8;

 if (VAR_8 < VAR_11 + 1)
 {
  FUNC_2("streaming header too small: %d", VAR_8);
  return 0;
 }
 VAR_12 = VAR_7[VAR_11];


 if (VAR_12 && VAR_3)
 {
  if (VAR_2 && VAR_1 < VAR_9 &&
   VAR_4 != ((void*)0))
  {







   if (VAR_6->walmethod->sync(VAR_4) != 0)
   {
    FUNC_3("could not fsync file \"%s\": %s",
        VAR_0, VAR_6->walmethod->getlasterror());
    FUNC_0(1);
   }
   VAR_1 = VAR_9;
  }

  VAR_13 = FUNC_1();
  if (!FUNC_4(VAR_5, VAR_9, VAR_13, 0))
   return 0;
  *VAR_10 = VAR_13;
 }

 return 1;
}
