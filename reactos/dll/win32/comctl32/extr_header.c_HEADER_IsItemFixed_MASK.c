
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dwStyle; TYPE_1__* items; } ;
struct TYPE_4__ {int fmt; } ;
typedef size_t INT ;
typedef TYPE_2__ HEADER_INFO ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline BOOL
FUNC_0(const HEADER_INFO *VAR_2, INT VAR_3)
{
    return (VAR_2->dwStyle & VAR_1) || (VAR_2->items[VAR_3].fmt & VAR_0);
}
