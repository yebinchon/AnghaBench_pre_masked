
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ WORD ;
typedef int WINE_MMIO ;
typedef scalar_t__ ULONG_PTR ;
struct TYPE_6__ {scalar_t__ hmmio; } ;
struct TYPE_7__ {struct TYPE_7__* lpNext; TYPE_1__ info; } ;
typedef TYPE_2__* LPWINE_MMIO ;
typedef scalar_t__ HMMIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static LPWINE_MMIO FUNC_5(void)
{
    static WORD VAR_3 = 0;
    LPWINE_MMIO VAR_4;

    VAR_4 = FUNC_2(FUNC_1(), VAR_0, sizeof(WINE_MMIO));
    if (VAR_4) {
 FUNC_0(&VAR_2);

 while (++VAR_3 == 0 || FUNC_4((HMMIO)(ULONG_PTR)VAR_3));
 VAR_4->info.hmmio = (HMMIO)(ULONG_PTR)VAR_3;
 VAR_4->lpNext = VAR_1;
 VAR_1 = VAR_4;
 FUNC_3(&VAR_2);
    }
    return VAR_4;
}
