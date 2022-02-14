
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int pt; } ;
typedef int TAB_INFO ;
typedef int LRESULT ;
typedef TYPE_1__* LPTCHITTESTINFO ;


 int FUNC_0 (int const*,int ,int *) ;
 int FUNC_1 (char*,int const*,TYPE_1__*) ;

__attribute__((used)) static inline LRESULT
FUNC_2 (const TAB_INFO *VAR_0, LPTCHITTESTINFO VAR_1)
{
  FUNC_1("(%p, %p)\n", VAR_0, VAR_1);
  return FUNC_0 (VAR_0, VAR_1->pt, &VAR_1->flags);
}
