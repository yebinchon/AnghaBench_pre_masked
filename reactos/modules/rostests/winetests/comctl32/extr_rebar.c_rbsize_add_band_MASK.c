
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t nBands; TYPE_1__* bands; } ;
typedef TYPE_2__ rbsize_result_t ;
typedef int UINT ;
struct TYPE_4__ {int cx; int fStyle; int rc; } ;
typedef int DWORD ;


 int FUNC_0 (int *,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(rbsize_result_t *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, DWORD VAR_5, UINT VAR_6)
{
    FUNC_0(&(VAR_0->bands[VAR_0->nBands].rc), VAR_1, VAR_2, VAR_3, VAR_4);
    VAR_0->bands[VAR_0->nBands].fStyle = VAR_5;
    VAR_0->bands[VAR_0->nBands].cx = VAR_6;
    VAR_0->nBands++;
}
