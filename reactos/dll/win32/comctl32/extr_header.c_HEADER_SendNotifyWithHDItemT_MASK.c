
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {scalar_t__ nNotifyFormat; } ;
struct TYPE_5__ {int * pitem; scalar_t__ iButton; int iItem; } ;
typedef TYPE_1__ NMHEADERW ;
typedef int NMHDR ;
typedef int INT ;
typedef TYPE_2__ HEADER_INFO ;
typedef int HDITEMW ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__ const*,int ,int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static BOOL
FUNC_2(const HEADER_INFO *VAR_1, UINT VAR_2, INT VAR_3, HDITEMW *VAR_4)
{
    NMHEADERW VAR_5;

    if (VAR_1->nNotifyFormat != VAR_0)
        VAR_2 = FUNC_0(VAR_2);
    VAR_5.iItem = VAR_3;
    VAR_5.iButton = 0;
    VAR_5.pitem = VAR_4;

    return (BOOL)FUNC_1(VAR_1, VAR_2, (NMHDR *)&VAR_5);
}
