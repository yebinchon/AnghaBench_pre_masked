
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGconn ;
typedef int ClusterInfo ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int) ;
 int * FUNC_7 (int *,char const*) ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (char*) ;

PGconn *
FUNC_10(ClusterInfo *VAR_3, const char *VAR_4)
{
 PGconn *VAR_5 = FUNC_7(VAR_3, VAR_4);

 if (VAR_5 == ((void*)0) || FUNC_3(VAR_5) != VAR_1)
 {
  FUNC_8(VAR_2, "connection to database failed: %s",
      FUNC_1(VAR_5));

  if (VAR_5)
   FUNC_2(VAR_5);

  FUNC_9(FUNC_4("Failure, exiting\n"));
  FUNC_6(1);
 }

 FUNC_0(FUNC_5(VAR_5, VAR_0));

 return VAR_5;
}
