
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int winsect; int* win; scalar_t__ wflag; } ;
typedef TYPE_1__ FATFS ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*,char*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static BYTE FUNC_3 (
    FATFS* VAR_5,
    DWORD VAR_6
)
{
    VAR_5->wflag = 0; VAR_5->winsect = 0xFFFFFFFF;
    if (FUNC_2(VAR_5, VAR_6) != VAR_4) return 4;

    if (FUNC_0(VAR_5->win + VAR_0) != 0xAA55) return 3;




    if (VAR_5->win[VAR_3] == 0xE9 || VAR_5->win[VAR_3] == 0xEB || VAR_5->win[VAR_3] == 0xE8) {
        if (!FUNC_1(VAR_5->win + VAR_1, "FAT", 3)) return 0;
        if (!FUNC_1(VAR_5->win + VAR_2, "FAT32", 5)) return 0;
    }
    return 2;
}
