
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_10__ {int free_clst; int n_fatent; scalar_t__ fs_type; int bitbase; int* win; int fatbase; int fsi_flag; } ;
struct TYPE_9__ {TYPE_2__* fs; } ;
typedef int TCHAR ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ FFOBJID ;
typedef TYPE_2__ FATFS ;
typedef int DWORD ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 size_t FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int const**,TYPE_2__**,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int*) ;
 scalar_t__ FUNC_5 (int*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ) ;

FRESULT FUNC_7 (
 const TCHAR* VAR_6,
 DWORD* VAR_7,
 FATFS** VAR_8
)
{
 FRESULT VAR_9;
 FATFS *VAR_10;
 DWORD VAR_11, VAR_12, VAR_13, VAR_14;
 UINT VAR_15;
 FFOBJID VAR_16;



 VAR_9 = FUNC_2(&VAR_6, &VAR_10, 0);
 if (VAR_9 == VAR_2) {
  *VAR_8 = VAR_10;

  if (VAR_10->free_clst <= VAR_10->n_fatent - 2) {
   *VAR_7 = VAR_10->free_clst;
  } else {

   VAR_11 = 0;
   if (VAR_10->fs_type == VAR_4) {
    VAR_12 = 2; VAR_16.fs = VAR_10;
    do {
     VAR_14 = FUNC_3(&VAR_16, VAR_12);
     if (VAR_14 == 0xFFFFFFFF) { VAR_9 = VAR_0; break; }
     if (VAR_14 == 1) { VAR_9 = VAR_1; break; }
     if (VAR_14 == 0) VAR_11++;
    } while (++VAR_12 < VAR_10->n_fatent);
   } else {
    {
     VAR_12 = VAR_10->n_fatent;
     VAR_13 = VAR_10->fatbase;
     VAR_15 = 0;
     do {
      if (VAR_15 == 0) {
       VAR_9 = FUNC_6(VAR_10, VAR_13++);
       if (VAR_9 != VAR_2) break;
      }
      if (VAR_10->fs_type == VAR_5) {
       if (FUNC_5(VAR_10->win + VAR_15) == 0) VAR_11++;
       VAR_15 += 2;
      } else {
       if ((FUNC_4(VAR_10->win + VAR_15) & 0x0FFFFFFF) == 0) VAR_11++;
       VAR_15 += 4;
      }
      VAR_15 %= FUNC_1(VAR_10);
     } while (--VAR_12);
    }
   }
   *VAR_7 = VAR_11;
   VAR_10->free_clst = VAR_11;
   VAR_10->fsi_flag |= 1;
  }
 }

 FUNC_0(VAR_10, VAR_9);
}
