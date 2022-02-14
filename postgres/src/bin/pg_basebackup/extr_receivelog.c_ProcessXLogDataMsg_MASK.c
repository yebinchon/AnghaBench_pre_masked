
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int XLogRecPtr ;
struct TYPE_7__ {int timeline; scalar_t__ (* stream_stop ) (int,int ,int) ;TYPE_1__* walmethod; } ;
struct TYPE_6__ {int (* get_current_pos ) (int *) ;int (* write ) (int *,char*,int) ;int (* getlasterror ) () ;} ;
typedef TYPE_2__ StreamCtl ;
typedef int PGconn ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int VAR_1 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (char*,int,...) ;
 int VAR_2 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*,int) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int,int ,int) ;
 int * VAR_3 ;

__attribute__((used)) static bool
FUNC_13(PGconn *VAR_4, StreamCtl *VAR_5, char *VAR_6, int VAR_7,
       XLogRecPtr *VAR_8)
{
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;





 if (!(VAR_2))
  return 1;






 VAR_12 = 1;
 VAR_12 += 8;
 VAR_12 += 8;
 VAR_12 += 8;
 if (VAR_7 < VAR_12)
 {
  FUNC_7("streaming header too small: %d", VAR_7);
  return 0;
 }
 *VAR_8 = FUNC_5(&VAR_6[1]);


 VAR_9 = FUNC_3(*VAR_8, VAR_0);





 if (VAR_3 == ((void*)0))
 {

  if (VAR_9 != 0)
  {
   FUNC_7("received write-ahead log record for offset %u with no file open",
       VAR_9);
   return 0;
  }
 }
 else
 {

  if (VAR_5->walmethod->get_current_pos(VAR_3) != VAR_9)
  {
   FUNC_7("got WAL data offset %08x, expected %08x",
       VAR_9, (int) VAR_5->walmethod->get_current_pos(VAR_3));
   return 0;
  }
 }

 VAR_10 = VAR_7 - VAR_12;
 VAR_11 = 0;

 while (VAR_10)
 {
  int VAR_13;





  if (VAR_9 + VAR_10 > VAR_0)
   VAR_13 = VAR_0 - VAR_9;
  else
   VAR_13 = VAR_10;

  if (VAR_3 == ((void*)0))
  {
   if (!FUNC_6(VAR_5, *VAR_8))
   {

    return 0;
   }
  }

  if (VAR_5->walmethod->write(VAR_3, VAR_6 + VAR_12 + VAR_11,
          VAR_13) != VAR_13)
  {
   FUNC_7("could not write %u bytes to WAL file \"%s\": %s",
       VAR_13, VAR_1,
       VAR_5->walmethod->getlasterror());
   return 0;
  }


  VAR_11 += VAR_13;
  VAR_10 -= VAR_13;
  *VAR_8 += VAR_13;
  VAR_9 += VAR_13;


  if (FUNC_3(*VAR_8, VAR_0) == 0)
  {
   if (!FUNC_4(VAR_5, *VAR_8))

    return 0;

   VAR_9 = 0;

   if (VAR_2 && VAR_5->stream_stop(*VAR_8, VAR_5->timeline, 1))
   {
    if (FUNC_2(VAR_4, ((void*)0)) <= 0 || FUNC_1(VAR_4))
    {
     FUNC_7("could not send copy-end packet: %s",
         FUNC_0(VAR_4));
     return 0;
    }
    VAR_2 = 0;
    return 1;
   }
  }
 }


 return 1;
}
