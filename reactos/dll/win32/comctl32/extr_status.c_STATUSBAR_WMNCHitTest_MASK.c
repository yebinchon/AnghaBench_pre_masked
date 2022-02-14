
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ x; void* y; } ;
struct TYPE_8__ {scalar_t__ right; } ;
struct TYPE_7__ {int Self; int Notify; } ;
typedef TYPE_1__ STATUS_INFO ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__ POINT ;
typedef void* INT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static BOOL
FUNC_4 (const STATUS_INFO *VAR_9, INT VAR_10, INT VAR_11)
{
    if ((FUNC_2 (VAR_9->Self, VAR_1) & VAR_5)
            && !(FUNC_2 (VAR_9->Notify, VAR_1) & VAR_8)) {
 RECT VAR_12;
 POINT VAR_13;

 FUNC_0 (VAR_9->Self, &VAR_12);

 VAR_13.x = VAR_10;
 VAR_13.y = VAR_11;
 FUNC_3 (VAR_9->Self, &VAR_13);

 if (VAR_13.x >= VAR_12.right - FUNC_1(VAR_6))
        {
            if (FUNC_2( VAR_9->Self, VAR_0 ) & VAR_7) return VAR_2;
     else return VAR_3;
        }
    }

    return VAR_4;
}
