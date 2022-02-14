
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sock; scalar_t__ asyncStatus; int errorMessage; scalar_t__ copy_is_binary; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int,int,TYPE_1__*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*,char*) ;

int
FUNC_6(PGconn *VAR_4, char *VAR_5, int VAR_6)
{
 int VAR_7;

 if (VAR_4->sock == VAR_3 ||
  (VAR_4->asyncStatus != VAR_2 &&
   VAR_4->asyncStatus != VAR_1) ||
  VAR_4->copy_is_binary)
 {
  FUNC_4(&VAR_4->errorMessage,
        FUNC_1("PQgetline: not doing text COPY OUT\n"));
  *VAR_5 = '\0';
  return VAR_0;
 }

 while ((VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6 - 1)) == 0)
 {

  if (FUNC_3(1, 0, VAR_4) ||
   FUNC_2(VAR_4) < 0)
  {
   *VAR_5 = '\0';
   return VAR_0;
  }
 }

 if (VAR_7 < 0)
 {

  FUNC_5(VAR_5, "\\.");
  return 0;
 }


 if (VAR_5[VAR_7 - 1] == '\n')
 {
  VAR_5[VAR_7 - 1] = '\0';
  return 0;
 }
 else
 {
  VAR_5[VAR_7] = '\0';
  return 1;
 }
}
