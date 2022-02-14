
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int * streamConn; } ;
typedef TYPE_1__ WalReceiverConn ;
struct TYPE_13__ {scalar_t__ len; int data; } ;
struct TYPE_12__ {char* val; int * keyword; int dispchar; } ;
typedef TYPE_2__ PQconninfoOption ;
typedef TYPE_3__ PQExpBufferData ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_3__) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_3__*,char*,char*,int *,char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 char* FUNC_9 (int ) ;
 int * FUNC_10 (int ,char) ;
 int FUNC_11 (TYPE_3__*) ;

__attribute__((used)) static char *
FUNC_12(WalReceiverConn *VAR_1)
{
 PQconninfoOption *VAR_2;
 PQconninfoOption *VAR_3;
 PQExpBufferData VAR_4;
 char *VAR_5;

 FUNC_0(VAR_1->streamConn != ((void*)0));

 FUNC_8(&VAR_4);
 VAR_2 = FUNC_2(VAR_1->streamConn);

 if (VAR_2 == ((void*)0))
  FUNC_6(VAR_0,
    (FUNC_7("could not parse connection string: %s",
      FUNC_4("out of memory"))));


 for (VAR_3 = VAR_2; VAR_3->keyword != ((void*)0); VAR_3++)
 {
  bool VAR_6;


  if (FUNC_10(VAR_3->dispchar, 'D') ||
   VAR_3->val == ((void*)0) ||
   VAR_3->val[0] == '\0')
   continue;


  VAR_6 = FUNC_10(VAR_3->dispchar, '*') != ((void*)0);

  FUNC_5(&VAR_4, "%s%s=%s",
        VAR_4.len == 0 ? "" : " ",
        VAR_3->keyword,
        VAR_6 ? "********" : VAR_3->val);
 }

 FUNC_3(VAR_2);

 VAR_5 = FUNC_1(VAR_4) ? ((void*)0) : FUNC_9(VAR_4.data);
 FUNC_11(&VAR_4);
 return VAR_5;
}
