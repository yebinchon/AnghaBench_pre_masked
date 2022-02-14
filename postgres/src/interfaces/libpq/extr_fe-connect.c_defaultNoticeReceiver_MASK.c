
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int noticeProcArg; int (* noticeProc ) (int ,int ) ;} ;
struct TYPE_6__ {TYPE_1__ noticeHooks; } ;
typedef TYPE_2__ PGresult ;


 int FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, const PGresult *VAR_1)
{
 (void) VAR_0;
 if (VAR_1->noticeHooks.noticeProc != ((void*)0))
  VAR_1->noticeHooks.noticeProc(VAR_1->noticeHooks.noticeProcArg,
         FUNC_0(VAR_1));
}
