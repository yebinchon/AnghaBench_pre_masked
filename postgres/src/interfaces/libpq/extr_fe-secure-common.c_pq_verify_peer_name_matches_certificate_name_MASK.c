
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t whichhost; int errorMessage; TYPE_1__* connhost; } ;
struct TYPE_4__ {char* host; } ;
typedef TYPE_2__ PGconn ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,char const*,size_t) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,int ) ;
 size_t FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;

int
FUNC_8(PGconn *VAR_0,
            const char *VAR_1, size_t VAR_2,
            char **VAR_3)
{
 char *VAR_4;
 int VAR_5;
 char *VAR_6 = VAR_0->connhost[VAR_0->whichhost].host;

 *VAR_3 = ((void*)0);

 if (!(VAR_6 && VAR_6[0] != '\0'))
 {
  FUNC_5(&VAR_0->errorMessage,
        FUNC_1("host name must be specified\n"));
  return -1;
 }





 VAR_4 = FUNC_2(VAR_2 + 1);
 if (VAR_4 == ((void*)0))
 {
  FUNC_5(&VAR_0->errorMessage,
        FUNC_1("out of memory\n"));
  return -1;
 }
 FUNC_3(VAR_4, VAR_1, VAR_2);
 VAR_4[VAR_2] = '\0';





 if (VAR_2 != FUNC_6(VAR_4))
 {
  FUNC_0(VAR_4);
  FUNC_5(&VAR_0->errorMessage,
        FUNC_1("SSL certificate's name contains embedded null\n"));
  return -1;
 }

 if (FUNC_4(VAR_4, VAR_6) == 0)
 {

  VAR_5 = 1;
 }
 else if (FUNC_7(VAR_4, VAR_6))
 {

  VAR_5 = 1;
 }
 else
 {
  VAR_5 = 0;
 }

 *VAR_3 = VAR_4;
 return VAR_5;
}
