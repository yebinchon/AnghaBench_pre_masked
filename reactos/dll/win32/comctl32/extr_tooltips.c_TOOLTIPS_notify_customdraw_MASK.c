
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int hwndFrom; int code; } ;
struct TYPE_5__ {TYPE_2__ hdr; scalar_t__ dwDrawStage; } ;
struct TYPE_7__ {TYPE_1__ nmcd; int uDrawFlags; } ;
typedef TYPE_3__ NMTTCUSTOMDRAW ;
typedef scalar_t__ LRESULT ;
typedef int LPARAM ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (char*,unsigned int,...) ;
 int VAR_0 ;

__attribute__((used)) static inline DWORD
FUNC_3 (DWORD VAR_1, NMTTCUSTOMDRAW *VAR_2)
{
    LRESULT VAR_3;
    VAR_2->nmcd.dwDrawStage = VAR_1;

    FUNC_2("Notifying stage %d, flags %x, id %x\n", VAR_2->nmcd.dwDrawStage,
          VAR_2->uDrawFlags, VAR_2->nmcd.hdr.code);

    VAR_3 = FUNC_1(FUNC_0(VAR_2->nmcd.hdr.hwndFrom), VAR_0,
                          0, (LPARAM)VAR_2);

    FUNC_2("Notify result %x\n", (unsigned int)VAR_3);

    return VAR_3;
}
