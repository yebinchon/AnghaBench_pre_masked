
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int data; } ;
typedef TYPE_1__* PQExpBuffer ;
typedef int PGconn ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,int ,int,int *) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int,char*,char*,char*) ;

void
FUNC_8(PGconn *VAR_2, char *VAR_3, PQExpBuffer VAR_4)
{
 char VAR_5[VAR_0];
 FILE *VAR_6;
 bool VAR_7;

 FUNC_0(VAR_2 != ((void*)0));

 VAR_7 =
  FUNC_1(VAR_2) < VAR_1;

 FUNC_7(VAR_5, VAR_0, "%s/%s", VAR_3,
    VAR_7 ? "recovery.conf" : "postgresql.auto.conf");

 VAR_6 = FUNC_4(VAR_5, VAR_7 ? "a" : "w");
 if (VAR_6 == ((void*)0))
 {
  FUNC_6("could not open file \"%s\": %m", VAR_5);
  FUNC_2(1);
 }

 if (FUNC_5(VAR_4->data, VAR_4->len, 1, VAR_6) != 1)
 {
  FUNC_6("could not write to file \"%s\": %m", VAR_5);
  FUNC_2(1);
 }

 FUNC_3(VAR_6);

 if (!VAR_7)
 {
  FUNC_7(VAR_5, VAR_0, "%s/%s", VAR_3, "standby.signal");
  VAR_6 = FUNC_4(VAR_5, "w");
  if (VAR_6 == ((void*)0))
  {
   FUNC_6("could not create file \"%s\": %m", VAR_5);
   FUNC_2(1);
  }

  FUNC_3(VAR_6);
 }
}
