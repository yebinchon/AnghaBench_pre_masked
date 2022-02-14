
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int name; TYPE_2__* rconn; } ;
typedef TYPE_1__ remoteConnHashEnt ;
struct TYPE_6__ {int conn; } ;
typedef TYPE_2__ remoteConn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (scalar_t__,char*,int ,int*) ;
 int FUNC_6 (TYPE_2__*) ;
 char* FUNC_7 (char const*) ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (int ,char const*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int ,int) ;

__attribute__((used)) static void
FUNC_11(const char *VAR_4, remoteConn *VAR_5)
{
 remoteConnHashEnt *VAR_6;
 bool VAR_7;
 char *VAR_8;

 if (!VAR_3)
  VAR_3 = FUNC_1();

 VAR_8 = FUNC_7(VAR_4);
 FUNC_10(VAR_8, FUNC_9(VAR_8), 1);
 VAR_6 = (remoteConnHashEnt *) FUNC_5(VAR_3, VAR_8,
              VAR_2, &VAR_7);

 if (VAR_7)
 {
  FUNC_0(VAR_5->conn);
  FUNC_6(VAR_5);

  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),
     FUNC_4("duplicate connection name")));
 }

 VAR_6->rconn = VAR_5;
 FUNC_8(VAR_6->name, VAR_4, sizeof(VAR_6->name));
}
