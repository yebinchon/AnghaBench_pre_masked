
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ htried; int ourHostName; int hresult; int magic; } ;
typedef TYPE_1__* FTPLIPtr ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;

void
FUNC_3(const FTPLIPtr VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;
 if (FUNC_2(VAR_1->magic, VAR_0))
  return;

 if (VAR_1->htried == 0) {
  (void) FUNC_1(VAR_1->ourHostName, 0, sizeof(VAR_1->ourHostName));
  VAR_1->hresult = FUNC_0(VAR_1->ourHostName, sizeof(VAR_1->ourHostName));
 }
 VAR_1->htried++;
}
