
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int query ;
typedef int qbuf ;
struct TYPE_9__ {scalar_t__ status; int pversion; } ;
struct TYPE_8__ {scalar_t__ resultStatus; } ;
typedef TYPE_1__ PGresult ;
typedef TYPE_2__ PGconn ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,char*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_2__*,char*,char const*) ;
 int FUNC_6 (char*,char const*,char const*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 int FUNC_8 (char const*) ;

int
FUNC_9(PGconn *VAR_2, const char *VAR_3)
{
 char VAR_4[128];
 static const char VAR_5[] = "set client_encoding to '%s'";
 PGresult *VAR_6;
 int VAR_7;

 if (!VAR_2 || VAR_2->status != VAR_0)
  return -1;

 if (!VAR_3)
  return -1;


 if (FUNC_7(VAR_3, "auto") == 0)
  VAR_3 = FUNC_3(FUNC_4(((void*)0), 1));


 if (sizeof(VAR_4) < (sizeof(VAR_5) + FUNC_8(VAR_3)))
  return -1;


 FUNC_6(VAR_4, VAR_5, VAR_3);
 VAR_6 = FUNC_2(VAR_2, VAR_4);

 if (VAR_6 == ((void*)0))
  return -1;
 if (VAR_6->resultStatus != VAR_1)
  VAR_7 = -1;
 else
 {






  if (FUNC_0(VAR_2->pversion) < 3)
   FUNC_5(VAR_2, "client_encoding", VAR_3);
  VAR_7 = 0;
 }
 FUNC_1(VAR_6);
 return VAR_7;
}
