
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_11__ {short x; short y; } ;
struct TYPE_12__ {scalar_t__ dwHitInfo; TYPE_2__ pt; scalar_t__ dwItemData; int dwItemSpec; } ;
struct TYPE_10__ {int hwndSelf; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef TYPE_2__ POINT ;
typedef TYPE_3__ NMMOUSE ;
typedef int NMHDR ;
typedef scalar_t__ LRESULT ;
typedef int LPARAM ;
typedef scalar_t__ INT ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__ const*,TYPE_2__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__ const*,int ) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static LRESULT
FUNC_7 (const REBAR_INFO *VAR_2, LPARAM VAR_3)
{
    NMMOUSE VAR_4;
    POINT VAR_5;
    INT VAR_6;
    UINT VAR_7;
    LRESULT VAR_8 = VAR_0;
    VAR_5.x = (short)FUNC_1(VAR_3);
    VAR_5.y = (short)FUNC_0(VAR_3);
    FUNC_4 (VAR_2->hwndSelf, &VAR_5);
    FUNC_2 (VAR_2, &VAR_5, &VAR_7,
      (INT *)&VAR_4.dwItemSpec);
    VAR_4.dwItemData = 0;
    VAR_4.pt = VAR_5;



    VAR_4.dwHitInfo = 0;

    if ((VAR_6 = FUNC_3((NMHDR *) &VAR_4, VAR_2, VAR_1))) {
 FUNC_5("notify changed return value from %ld to %d\n",
       VAR_8, VAR_6);
 VAR_8 = (LRESULT) VAR_6;
    }
    FUNC_5("returning %ld, client point %s\n", VAR_8, FUNC_6(&VAR_5));
    return VAR_8;
}
