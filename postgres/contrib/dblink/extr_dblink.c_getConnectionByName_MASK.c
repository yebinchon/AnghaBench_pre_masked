
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * rconn; } ;
typedef TYPE_1__ remoteConnHashEnt ;
typedef int remoteConn ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__,char*,int ,int *) ;
 char* FUNC_2 (char const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,int) ;

__attribute__((used)) static remoteConn *
FUNC_5(const char *VAR_2)
{
 remoteConnHashEnt *VAR_3;
 char *VAR_4;

 if (!VAR_1)
  VAR_1 = FUNC_0();

 VAR_4 = FUNC_2(VAR_2);
 FUNC_4(VAR_4, FUNC_3(VAR_4), 0);
 VAR_3 = (remoteConnHashEnt *) FUNC_1(VAR_1,
              VAR_4, VAR_0, ((void*)0));

 if (VAR_3)
  return VAR_3->rconn;

 return ((void*)0);
}
