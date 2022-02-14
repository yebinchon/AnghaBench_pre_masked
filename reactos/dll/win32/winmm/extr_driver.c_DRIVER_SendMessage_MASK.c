
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int dwDriverID; int (* lpDrvProc ) (int ,int ,int ,int ,int ) ;} ;
typedef int LRESULT ;
typedef TYPE_1__* LPWINE_DRIVER ;
typedef int LPARAM ;
typedef int HDRVR ;


 int FUNC_0 (char*,int (*) (int ,int ,int ,int ,int ),int ,TYPE_1__*,int ,int ,int ,...) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static inline LRESULT FUNC_2(LPWINE_DRIVER VAR_0, UINT VAR_1,
                                         LPARAM VAR_2, LPARAM VAR_3)
{
    LRESULT VAR_4 = 0;

    FUNC_0("Before call32 proc=%p drvrID=%08lx hDrv=%p wMsg=%04x p1=%08lx p2=%08lx\n",
          VAR_0->lpDrvProc, VAR_0->dwDriverID, VAR_0, VAR_1, VAR_2, VAR_3);
    VAR_4 = VAR_0->lpDrvProc(VAR_0->dwDriverID, (HDRVR)VAR_0, VAR_1, VAR_2, VAR_3);
    FUNC_0("After  call32 proc=%p drvrID=%08lx hDrv=%p wMsg=%04x p1=%08lx p2=%08lx => %08lx\n",
          VAR_0->lpDrvProc, VAR_0->dwDriverID, VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

    return VAR_4;
}
