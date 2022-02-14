
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int flags; int iItem; int pt; } ;
typedef int LRESULT ;
typedef TYPE_1__* LPHDHITTESTINFO ;
typedef int HEADER_INFO ;


 int FUNC_0 (int const*,int *,int*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static LRESULT
FUNC_1 (const HEADER_INFO *VAR_5, LPHDHITTESTINFO VAR_6)
{
    UINT VAR_7 = VAR_2 | VAR_0 | VAR_1 | VAR_3 | VAR_4;

    FUNC_0 (VAR_5, &VAR_6->pt, &VAR_6->flags, &VAR_6->iItem);

    if (VAR_6->flags & VAR_7)
 return VAR_6->iItem = -1;
    else
        return VAR_6->iItem;
}
