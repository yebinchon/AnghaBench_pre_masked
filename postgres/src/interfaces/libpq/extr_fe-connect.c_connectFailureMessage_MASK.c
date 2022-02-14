
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int service ;
typedef int sebuf ;
struct TYPE_10__ {int ss_family; } ;
struct TYPE_7__ {int salen; TYPE_4__ addr; } ;
struct TYPE_9__ {size_t whichhost; int errorMessage; TYPE_2__* connhost; TYPE_1__ raddr; } ;
struct TYPE_8__ {scalar_t__ type; char* hostaddr; char* host; char* port; } ;
typedef TYPE_3__ PGconn ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int *,int ,int ,char const*,...) ;
 int FUNC_3 (TYPE_3__*,char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_4__*,int ,int *,int ,char*,int,int ) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 scalar_t__ FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(PGconn *VAR_5, int VAR_6)
{
 char VAR_7[VAR_4];
 {
  char VAR_8[VAR_2];
  const char *VAR_9;
  const char *VAR_10;





  FUNC_3(VAR_5, VAR_8, VAR_2);


  if (VAR_5->connhost[VAR_5->whichhost].type == VAR_0)
   VAR_9 = VAR_5->connhost[VAR_5->whichhost].hostaddr;
  else
   VAR_9 = VAR_5->connhost[VAR_5->whichhost].host;
  VAR_10 = VAR_5->connhost[VAR_5->whichhost].port;
  if (VAR_10 == ((void*)0) || VAR_10[0] == '\0')
   VAR_10 = VAR_1;






  if (VAR_5->connhost[VAR_5->whichhost].type != VAR_0 &&
   FUNC_7(VAR_8) > 0 &&
   FUNC_6(VAR_9, VAR_8) != 0)
   FUNC_2(&VAR_5->errorMessage,
         FUNC_4("could not connect to server: %s\n"
           "\tIs the server running on host \"%s\" (%s) and accepting\n"
           "\tTCP/IP connections on port %s?\n"),
         FUNC_1(VAR_6, VAR_7, sizeof(VAR_7)),
         VAR_9, VAR_8,
         VAR_10);
  else
   FUNC_2(&VAR_5->errorMessage,
         FUNC_4("could not connect to server: %s\n"
           "\tIs the server running on host \"%s\" and accepting\n"
           "\tTCP/IP connections on port %s?\n"),
         FUNC_1(VAR_6, VAR_7, sizeof(VAR_7)),
         VAR_9,
         VAR_10);
 }
}
