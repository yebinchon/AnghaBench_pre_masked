
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int off_t ;
typedef int XLogRecPtr ;
struct TYPE_6__ {scalar_t__ mark_done; TYPE_1__* walmethod; scalar_t__ partial_suffix; } ;
struct TYPE_5__ {int (* get_current_pos ) (int *) ;int (* close ) (int *,int ) ;int (* getlasterror ) () ;} ;
typedef TYPE_2__ StreamCtl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 () ;
 int * VAR_6 ;

__attribute__((used)) static bool
FUNC_10(StreamCtl *VAR_7, XLogRecPtr VAR_8)
{
 off_t VAR_9;
 int VAR_10;

 if (VAR_6 == ((void*)0))
  return 1;

 VAR_9 = VAR_7->walmethod->get_current_pos(VAR_6);
 if (VAR_9 == -1)
 {
  FUNC_1("could not determine seek position in file \"%s\": %s",
      VAR_4, VAR_7->walmethod->getlasterror());
  VAR_7->walmethod->close(VAR_6, VAR_2);
  VAR_6 = ((void*)0);

  return 0;
 }

 if (VAR_7->partial_suffix)
 {
  if (VAR_9 == VAR_3)
   VAR_10 = VAR_7->walmethod->close(VAR_6, VAR_0);
  else
  {
   FUNC_2("not renaming \"%s%s\", segment is not complete",
      VAR_4, VAR_7->partial_suffix);
   VAR_10 = VAR_7->walmethod->close(VAR_6, VAR_1);
  }
 }
 else
  VAR_10 = VAR_7->walmethod->close(VAR_6, VAR_0);

 VAR_6 = ((void*)0);

 if (VAR_10 != 0)
 {
  FUNC_1("could not close file \"%s\": %s",
      VAR_4, VAR_7->walmethod->getlasterror());
  return 0;
 }







 if (VAR_9 == VAR_3 && VAR_7->mark_done)
 {

  if (!FUNC_0(VAR_7, VAR_4))
   return 0;
 }

 VAR_5 = VAR_8;
 return 1;
}
