
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* noticeProcArg; int * noticeProc; } ;
struct TYPE_5__ {TYPE_1__ noticeHooks; } ;
typedef int * PQnoticeProcessor ;
typedef TYPE_2__ PGconn ;



PQnoticeProcessor
FUNC_0(PGconn *VAR_0, PQnoticeProcessor VAR_1, void *VAR_2)
{
 PQnoticeProcessor VAR_3;

 if (VAR_0 == ((void*)0))
  return ((void*)0);

 VAR_3 = VAR_0->noticeHooks.noticeProc;
 if (VAR_1)
 {
  VAR_0->noticeHooks.noticeProc = VAR_1;
  VAR_0->noticeHooks.noticeProcArg = VAR_2;
 }
 return VAR_3;
}
