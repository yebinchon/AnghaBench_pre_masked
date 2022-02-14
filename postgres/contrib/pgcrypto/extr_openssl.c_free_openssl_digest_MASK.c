
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* prev; } ;
struct TYPE_7__ {TYPE_1__* prev; TYPE_4__* next; int ctx; } ;
struct TYPE_6__ {TYPE_4__* next; } ;
typedef TYPE_2__ OSSLDigest ;


 int FUNC_0 (int ) ;
 TYPE_4__* VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(OSSLDigest *VAR_1)
{
 FUNC_0(VAR_1->ctx);
 if (VAR_1->prev)
  VAR_1->prev->next = VAR_1->next;
 else
  VAR_0 = VAR_1->next;
 if (VAR_1->next)
  VAR_1->next->prev = VAR_1->prev;
 FUNC_1(VAR_1);
}
