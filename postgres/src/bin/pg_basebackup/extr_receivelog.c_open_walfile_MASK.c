
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int fn ;
typedef int XLogSegNo ;
typedef int XLogRecPtr ;
typedef int Walfile ;
struct TYPE_5__ {char* partial_suffix; TYPE_1__* walmethod; int timeline; } ;
struct TYPE_4__ {scalar_t__ (* get_file_size ) (char*) ;scalar_t__ (* sync ) (int *) ;int (* getlasterror ) () ;int * (* open_for_write ) (char*,char*,scalar_t__) ;int (* close ) (int *,int ) ;scalar_t__ (* existsfile ) (char*) ;} ;
typedef TYPE_2__ StreamCtl ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (char*,int ,int ,scalar_t__) ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*,scalar_t__) ;
 int FUNC_4 (char*,char*,int,...) ;
 int FUNC_5 (char*,char*,int ) ;
 int FUNC_6 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 () ;
 int * FUNC_11 (char*,char*,scalar_t__) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 () ;
 int FUNC_15 (int *,int ) ;
 int * FUNC_16 (char*,char*,scalar_t__) ;
 int * VAR_6 ;

__attribute__((used)) static bool
FUNC_17(StreamCtl *VAR_7, XLogRecPtr VAR_8)
{
 Walfile *VAR_9;
 char VAR_10[VAR_2];
 ssize_t VAR_11;
 XLogSegNo VAR_12;

 FUNC_0(VAR_8, VAR_12, VAR_3);
 FUNC_1(VAR_4, VAR_7->timeline, VAR_12, VAR_3);

 FUNC_6(VAR_10, sizeof(VAR_10), "%s%s", VAR_4,
    VAR_7->partial_suffix ? VAR_7->partial_suffix : "");
 if (VAR_7->walmethod->existsfile(VAR_10))
 {
  VAR_11 = VAR_7->walmethod->get_file_size(VAR_10);
  if (VAR_11 < 0)
  {
   FUNC_4("could not get size of write-ahead log file \"%s\": %s",
       VAR_10, VAR_7->walmethod->getlasterror());
   return 0;
  }
  if (VAR_11 == VAR_3)
  {

   VAR_9 = VAR_7->walmethod->open_for_write(VAR_4, VAR_7->partial_suffix, 0);
   if (VAR_9 == ((void*)0))
   {
    FUNC_4("could not open existing write-ahead log file \"%s\": %s",
        VAR_10, VAR_7->walmethod->getlasterror());
    return 0;
   }


   if (VAR_7->walmethod->sync(VAR_9) != 0)
   {
    FUNC_5("could not fsync existing write-ahead log file \"%s\": %s",
        VAR_10, VAR_7->walmethod->getlasterror());
    VAR_7->walmethod->close(VAR_9, VAR_0);
    FUNC_2(1);
   }

   VAR_6 = VAR_9;
   return 1;
  }
  if (VAR_11 != 0)
  {

   if (VAR_5 == 0)
    VAR_5 = VAR_1;
   FUNC_4(FUNC_3("write-ahead log file \"%s\" has %d byte, should be 0 or %d",
          "write-ahead log file \"%s\" has %d bytes, should be 0 or %d",
          VAR_11),
       VAR_10, (int) VAR_11, VAR_3);
   return 0;
  }

 }



 VAR_9 = VAR_7->walmethod->open_for_write(VAR_4,
            VAR_7->partial_suffix, VAR_3);
 if (VAR_9 == ((void*)0))
 {
  FUNC_4("could not open write-ahead log file \"%s\": %s",
      VAR_10, VAR_7->walmethod->getlasterror());
  return 0;
 }

 VAR_6 = VAR_9;
 return 1;
}
