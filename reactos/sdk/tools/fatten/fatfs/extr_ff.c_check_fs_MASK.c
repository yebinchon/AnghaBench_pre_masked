
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int winsect; int * win; scalar_t__ wflag; } ;
typedef TYPE_1__ FATFS ;
typedef int DWORD ;
typedef int BYTE ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static
BYTE FUNC_3 (
 FATFS* VAR_4,
 DWORD VAR_5
)
{
 VAR_4->wflag = 0; VAR_4->winsect = 0xFFFFFFFF;
 if (FUNC_2(VAR_4, VAR_5) != VAR_3)
  return 3;

 if (FUNC_1(&VAR_4->win[VAR_0]) != 0xAA55)
  return 2;

 if ((FUNC_0(&VAR_4->win[VAR_1]) & 0xFFFFFF) == 0x544146)
  return 0;
 if ((FUNC_0(&VAR_4->win[VAR_2]) & 0xFFFFFF) == 0x544146)
  return 0;

 return 1;
}
