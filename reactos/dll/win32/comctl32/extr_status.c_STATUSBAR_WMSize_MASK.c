
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_7__ {scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_6__ {scalar_t__ height; int Self; int Notify; } ;
typedef TYPE_1__ STATUS_INFO ;
typedef TYPE_2__ RECT ;
typedef scalar_t__ INT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,scalar_t__) ;
 int VAR_5 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static BOOL
FUNC_6 (STATUS_INFO *VAR_6, WORD VAR_7)
{
    INT VAR_8, VAR_9, VAR_10;
    RECT VAR_11;


    FUNC_4("flags %04x\n", VAR_7);

    if (VAR_7 != VAR_4 && VAR_7 != VAR_3) {
 FUNC_5("flags MUST be SIZE_RESTORED or SIZE_MAXIMIZED\n");
 return VAR_1;
    }

    if (FUNC_1(VAR_6->Self, VAR_2) & VAR_0) return VAR_1;


    if (!FUNC_0 (VAR_6->Notify, &VAR_11))
        return VAR_1;

    VAR_8 = VAR_11.right - VAR_11.left;
    VAR_9 = VAR_11.left;
    VAR_10 = VAR_11.bottom - VAR_6->height;
    FUNC_2 (VAR_6->Self, VAR_9, VAR_10, VAR_8, VAR_6->height, VAR_5);
    FUNC_3 (VAR_6);
    return VAR_5;
}
