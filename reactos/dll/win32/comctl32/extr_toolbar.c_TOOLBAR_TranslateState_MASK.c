
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int fsState; scalar_t__ bHot; } ;
typedef TYPE_1__ TBUTTON_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static UINT
FUNC_0(const TBUTTON_INFO *VAR_11)
{
    UINT VAR_12 = 0;

    VAR_12 |= (VAR_11->fsState & VAR_6) ? VAR_0 : 0;
    VAR_12 |= (VAR_11->fsState & VAR_10) ? VAR_5 : 0;
    VAR_12 |= (VAR_11->fsState & VAR_7) ? 0 : VAR_1;
    VAR_12 |= (VAR_11->fsState & VAR_9 ) ? VAR_4 : 0;
    VAR_12 |= (VAR_11->bHot ) ? VAR_2 : 0;
    VAR_12 |= ((VAR_11->fsState & (VAR_7|VAR_8)) == (VAR_7|VAR_8)) ? VAR_3 : 0;

    return VAR_12;
}
