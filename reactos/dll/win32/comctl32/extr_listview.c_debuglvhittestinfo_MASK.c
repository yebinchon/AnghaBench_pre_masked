
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int iSubItem; int iItem; int flags; int pt; } ;
typedef TYPE_1__ LVHITTESTINFO ;


 char const* FUNC_0 (char*,int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static const char* FUNC_2(const LVHITTESTINFO *VAR_0)
{
    if (!VAR_0) return "(null)";

    return FUNC_0("{pt=%s, flags=0x%x, iItem=%d, iSubItem=%d}",
   FUNC_1(&VAR_0->pt), VAR_0->flags, VAR_0->iItem, VAR_0->iSubItem);
}
