
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* noticeRecArg; int * noticeRec; } ;
struct TYPE_5__ {TYPE_1__ noticeHooks; } ;
typedef int * PQnoticeReceiver ;
typedef TYPE_2__ PGconn ;



PQnoticeReceiver
FUNC_0(PGconn *VAR_0, PQnoticeReceiver VAR_1, void *VAR_2)
{
 PQnoticeReceiver VAR_3;

 if (VAR_0 == ((void*)0))
  return ((void*)0);

 VAR_3 = VAR_0->noticeHooks.noticeRec;
 if (VAR_1)
 {
  VAR_0->noticeHooks.noticeRec = VAR_1;
  VAR_0->noticeHooks.noticeRecArg = VAR_2;
 }
 return VAR_3;
}
