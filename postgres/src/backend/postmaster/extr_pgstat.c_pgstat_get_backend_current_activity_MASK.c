
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int st_procpid; scalar_t__ st_userid; char* st_activity_raw; } ;
typedef TYPE_1__ PgBackendStatus ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__ volatile*,int) ;
 char const* FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__ volatile*,int) ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 () ;

const char *
FUNC_7(int VAR_2, bool VAR_3)
{
 PgBackendStatus *VAR_4;
 int VAR_5;

 VAR_4 = VAR_0;
 for (VAR_5 = 1; VAR_5 <= VAR_1; VAR_5++)
 {
  volatile PgBackendStatus *VAR_6 = VAR_4;
  bool VAR_7;

  for (;;)
  {
   int VAR_8;
   int VAR_9;

   FUNC_2(VAR_6, VAR_8);

   VAR_7 = (VAR_6->st_procpid == VAR_2);

   FUNC_4(VAR_6, VAR_9);

   if (FUNC_5(VAR_8,
             VAR_9))
    break;


   FUNC_0();
  }

  if (VAR_7)
  {

   if (VAR_3 && !FUNC_6() && VAR_4->st_userid != FUNC_1())
    return "<insufficient privilege>";
   else if (*(VAR_4->st_activity_raw) == '\0')
    return "<command string not enabled>";
   else
   {

    return FUNC_3(VAR_4->st_activity_raw);
   }
  }

  VAR_4++;
 }


 return "<backend information not available>";
}
