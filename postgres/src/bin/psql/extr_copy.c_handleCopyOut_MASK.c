
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;
typedef int PGconn ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char**,int ) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (char*,int,int,int *) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,int ) ;

bool
FUNC_9(PGconn *VAR_1, FILE *VAR_2, PGresult **VAR_3)
{
 bool VAR_4 = 1;
 char *VAR_5;
 int VAR_6;

 for (;;)
 {
  VAR_6 = FUNC_2(VAR_1, &VAR_5, 0);

  if (VAR_6 < 0)
   break;

  if (VAR_5)
  {
   if (VAR_4 && VAR_2 && FUNC_6(VAR_5, 1, VAR_6, VAR_2) != VAR_6)
   {
    FUNC_7("could not write COPY data: %m");

    VAR_4 = 0;
   }
   FUNC_1(VAR_5);
  }
 }

 if (VAR_4 && VAR_2 && FUNC_5(VAR_2))
 {
  FUNC_7("could not write COPY data: %m");
  VAR_4 = 0;
 }

 if (VAR_6 == -2)
 {
  FUNC_7("COPY data transfer failed: %s", FUNC_0(VAR_1));
  VAR_4 = 0;
 }
 *VAR_3 = FUNC_3(VAR_1);
 if (FUNC_4(*VAR_3) != VAR_0)
 {
  FUNC_8("%s", FUNC_0(VAR_1));
  VAR_4 = 0;
 }

 return VAR_4;
}
