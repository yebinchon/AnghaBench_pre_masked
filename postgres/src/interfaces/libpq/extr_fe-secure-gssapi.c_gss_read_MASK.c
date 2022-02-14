
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int PostgresPollingStatusType ;
typedef int PGconn ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,void*,size_t) ;

__attribute__((used)) static PostgresPollingStatusType
FUNC_2(PGconn *VAR_5, void *VAR_6, size_t VAR_7, ssize_t *VAR_8)
{
 *VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_7);
 if (*VAR_8 < 0 && VAR_4 == VAR_0)
  return VAR_3;
 else if (*VAR_8 < 0)
  return VAR_1;


 if (*VAR_8 == 0)
 {
  int VAR_9 = FUNC_0(VAR_5);

  if (VAR_9 < 0)
   return VAR_1;

  if (!VAR_9)
   return VAR_3;

  *VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_7);
  if (*VAR_8 == 0)
   return VAR_1;
 }

 return VAR_2;
}
