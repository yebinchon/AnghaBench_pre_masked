
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {int winsect; int csize; int drv; int * win; } ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ FATFS ;
typedef int DWORD ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (int ,int *,int,int) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static FRESULT FUNC_7 (
    FATFS *VAR_4,
    DWORD VAR_5
)
{
    DWORD VAR_6;
    UINT VAR_7, VAR_8;
    BYTE *VAR_9;


    if (FUNC_6(VAR_4) != VAR_1) return VAR_0;
    VAR_6 = FUNC_1(VAR_4, VAR_5);
    VAR_4->winsect = VAR_6;
    FUNC_5(VAR_4->win, 0, sizeof VAR_4->win);
    {
        VAR_9 = VAR_4->win; VAR_8 = 1;
        for (VAR_7 = 0; VAR_7 < VAR_4->csize && FUNC_2(VAR_4->drv, VAR_9, VAR_6 + VAR_7, VAR_8) == VAR_3; VAR_7 += VAR_8) ;
    }
    return (VAR_7 == VAR_4->csize) ? VAR_1 : VAR_0;
}
