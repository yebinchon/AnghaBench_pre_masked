
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dboid; char* data; int srcPid; int xid; int length; } ;
typedef int Snapshot ;
typedef int volatile QueuePosition ;
typedef TYPE_1__ AsyncQueueEntry ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,char*,int ) ;
 scalar_t__ FUNC_2 (int volatile,int volatile) ;
 int FUNC_3 (int volatile) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int volatile*,int ) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static bool
FUNC_8(volatile QueuePosition *VAR_1,
        QueuePosition VAR_2,
        char *VAR_3,
        Snapshot VAR_4)
{
 bool VAR_5 = 0;
 bool VAR_6;
 AsyncQueueEntry *VAR_7;

 do
 {
  QueuePosition VAR_8 = *VAR_1;

  if (FUNC_2(VAR_8, VAR_2))
   break;

  VAR_7 = (AsyncQueueEntry *) (VAR_3 + FUNC_3(VAR_8));






  VAR_6 = FUNC_6(VAR_1, VAR_7->length);


  if (VAR_7->dboid == VAR_0)
  {
   if (FUNC_5(VAR_7->xid, VAR_4))
   {
    *VAR_1 = VAR_8;
    VAR_5 = 1;
    break;
   }
   else if (FUNC_4(VAR_7->xid))
   {

    char *VAR_9 = VAR_7->data;

    if (FUNC_0(VAR_9))
    {

     char *VAR_10 = VAR_7->data + FUNC_7(VAR_9) + 1;

     FUNC_1(VAR_9, VAR_10, VAR_7->srcPid);
    }
   }
   else
   {




   }
  }


 } while (!VAR_6);

 if (FUNC_2(*VAR_1, VAR_2))
  VAR_5 = 1;

 return VAR_5;
}
