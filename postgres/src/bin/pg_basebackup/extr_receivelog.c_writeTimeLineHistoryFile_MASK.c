
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int Walfile ;
struct TYPE_6__ {char* timeline; scalar_t__ mark_done; TYPE_1__* walmethod; } ;
struct TYPE_5__ {char* (* getlasterror ) () ;scalar_t__ (* close ) (int *,int ) ;scalar_t__ (* write ) (int *,char*,int) ;int * (* open_for_write ) (char*,char*,int ) ;} ;
typedef TYPE_2__ StreamCtl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (char*,char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (char*,char*,int ) ;
 char* FUNC_6 () ;
 scalar_t__ FUNC_7 (int *,char*,int) ;
 char* FUNC_8 () ;
 scalar_t__ FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 char* FUNC_11 () ;

__attribute__((used)) static bool
FUNC_12(StreamCtl *VAR_3, char *VAR_4, char *VAR_5)
{
 int VAR_6 = FUNC_4(VAR_5);
 char VAR_7[VAR_2];
 Walfile *VAR_8;





 FUNC_0(VAR_7, VAR_3->timeline);
 if (FUNC_3(VAR_7, VAR_4) != 0)
 {
  FUNC_2("server reported unexpected history file name for timeline %u: %s",
      VAR_3->timeline, VAR_4);
  return 0;
 }

 VAR_8 = VAR_3->walmethod->open_for_write(VAR_7, ".tmp", 0);
 if (VAR_8 == ((void*)0))
 {
  FUNC_2("could not create timeline history file \"%s\": %s",
      VAR_7, VAR_3->walmethod->getlasterror());
  return 0;
 }

 if ((int) VAR_3->walmethod->write(VAR_8, VAR_5, VAR_6) != VAR_6)
 {
  FUNC_2("could not write timeline history file \"%s\": %s",
      VAR_7, VAR_3->walmethod->getlasterror());




  VAR_3->walmethod->close(VAR_8, VAR_1);

  return 0;
 }

 if (VAR_3->walmethod->close(VAR_8, VAR_0) != 0)
 {
  FUNC_2("could not close file \"%s\": %s",
      VAR_7, VAR_3->walmethod->getlasterror());
  return 0;
 }


 if (VAR_3->mark_done)
 {

  if (!FUNC_1(VAR_3, VAR_7))
   return 0;
 }

 return 1;
}
