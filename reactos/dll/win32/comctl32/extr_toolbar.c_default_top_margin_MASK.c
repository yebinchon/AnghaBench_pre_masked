
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cy; } ;
struct TYPE_5__ {int iVersion; int dwStyle; TYPE_1__ szBarPadding; } ;
typedef TYPE_2__ TOOLBAR_INFO ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(const TOOLBAR_INFO *VAR_2)
{




    return (VAR_2->dwStyle & VAR_0 ? 0 : VAR_1);
}
