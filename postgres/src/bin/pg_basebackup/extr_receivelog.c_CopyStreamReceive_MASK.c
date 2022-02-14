
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pgsocket ;
typedef int PGconn ;


 int FUNC_0 (int *,long,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char**,int) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static int
FUNC_6(PGconn *VAR_0, long VAR_1, pgsocket VAR_2,
      char **VAR_3)
{
 char *VAR_4 = ((void*)0);
 int VAR_5;

 if (*VAR_3 != ((void*)0))
  FUNC_3(*VAR_3);
 *VAR_3 = ((void*)0);


 VAR_5 = FUNC_4(VAR_0, &VAR_4, 1);
 if (VAR_5 == 0)
 {
  int VAR_6;






  VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2);
  if (VAR_6 <= 0)
   return VAR_6;


  if (FUNC_1(VAR_0) == 0)
  {
   FUNC_5("could not receive data from WAL stream: %s",
       FUNC_2(VAR_0));
   return -1;
  }


  VAR_5 = FUNC_4(VAR_0, &VAR_4, 1);
  if (VAR_5 == 0)
   return 0;
 }
 if (VAR_5 == -1)
  return -2;
 if (VAR_5 == -2)
 {
  FUNC_5("could not read COPY data: %s", FUNC_2(VAR_0));
  return -1;
 }


 *VAR_3 = VAR_4;
 return VAR_5;
}
