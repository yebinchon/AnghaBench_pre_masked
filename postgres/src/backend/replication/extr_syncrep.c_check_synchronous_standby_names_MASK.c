
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ num_sync; int config_size; } ;
typedef int SyncRepConfigData ;
typedef int GucSource ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,TYPE_1__*,int ) ;
 int * VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;

bool
FUNC_8(char **VAR_3, void **VAR_4, GucSource VAR_5)
{
 if (*VAR_3 != ((void*)0) && (*VAR_3)[0] != '\0')
 {
  int VAR_6;
  SyncRepConfigData *VAR_7;


  VAR_2 = ((void*)0);
  VAR_1 = ((void*)0);


  FUNC_6(*VAR_3);
  VAR_6 = FUNC_7();
  FUNC_5();

  if (VAR_6 != 0 || VAR_2 == ((void*)0))
  {
   FUNC_0(VAR_0);
   if (VAR_1)
    FUNC_1("%s", VAR_1);
   else
    FUNC_1("synchronous_standby_names parser failed");
   return 0;
  }

  if (VAR_2->num_sync <= 0)
  {
   FUNC_2("number of synchronous standbys (%d) must be greater than zero",
        VAR_2->num_sync);
   return 0;
  }


  VAR_7 = (SyncRepConfigData *)
   FUNC_3(VAR_2->config_size);
  if (VAR_7 == ((void*)0))
   return 0;
  FUNC_4(VAR_7, VAR_2, VAR_2->config_size);

  *VAR_4 = (void *) VAR_7;
 }
 else
  *VAR_4 = ((void*)0);

 return 1;
}
