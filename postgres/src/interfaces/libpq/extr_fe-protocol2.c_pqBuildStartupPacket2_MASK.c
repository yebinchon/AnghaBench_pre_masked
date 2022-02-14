
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pgoptions; int pgtty; int dbName; int pguser; int pversion; } ;
struct TYPE_5__ {int options; int tty; int database; int user; int protoVersion; } ;
typedef TYPE_1__ StartupPacket ;
typedef int PQEnvironmentOption ;
typedef TYPE_2__ PGconn ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;

char *
FUNC_4(PGconn *VAR_4, int *VAR_5,
       const PQEnvironmentOption *VAR_6)
{
 StartupPacket *VAR_7;

 *VAR_5 = sizeof(StartupPacket);
 VAR_7 = (StartupPacket *) FUNC_1(sizeof(StartupPacket));
 if (!VAR_7)
  return ((void*)0);

 FUNC_0(VAR_7, 0, sizeof(StartupPacket));

 VAR_7->protoVersion = FUNC_2(VAR_4->pversion);


 FUNC_3(VAR_7->user, VAR_4->pguser, VAR_3);
 FUNC_3(VAR_7->database, VAR_4->dbName, VAR_0);
 FUNC_3(VAR_7->tty, VAR_4->pgtty, VAR_2);

 if (VAR_4->pgoptions)
  FUNC_3(VAR_7->options, VAR_4->pgoptions, VAR_1);

 return (char *) VAR_7;
}
