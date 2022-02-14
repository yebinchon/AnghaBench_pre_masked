
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {int free_clust; int n_fatent; scalar_t__ fs_type; int fatbase; int fsi_flag; scalar_t__* win; } ;
typedef int TCHAR ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ FATFS ;
typedef int DWORD ;
typedef scalar_t__ BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__**,int const**,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;

FRESULT FUNC_7 (
 const TCHAR* VAR_5,
 DWORD* VAR_6,
 FATFS** VAR_7
)
{
 FRESULT VAR_8;
 FATFS *VAR_9;
 DWORD VAR_10, VAR_11, VAR_12, VAR_13;
 UINT VAR_14;
 BYTE VAR_15, *VAR_16;



 VAR_8 = FUNC_4(VAR_7, &VAR_5, 0);
 VAR_9 = *VAR_7;
 if (VAR_8 == VAR_2) {

  if (VAR_9->free_clust <= VAR_9->n_fatent - 2) {
   *VAR_6 = VAR_9->free_clust;
  } else {

   VAR_15 = VAR_9->fs_type;
   VAR_10 = 0;
   if (VAR_15 == VAR_3) {
    VAR_11 = 2;
    do {
     VAR_13 = FUNC_5(VAR_9, VAR_11);
     if (VAR_13 == 0xFFFFFFFF) { VAR_8 = VAR_0; break; }
     if (VAR_13 == 1) { VAR_8 = VAR_1; break; }
     if (VAR_13 == 0) VAR_10++;
    } while (++VAR_11 < VAR_9->n_fatent);
   } else {
    VAR_11 = VAR_9->n_fatent; VAR_12 = VAR_9->fatbase;
    VAR_14 = 0; VAR_16 = 0;
    do {
     if (!VAR_14) {
      VAR_8 = FUNC_6(VAR_9, VAR_12++);
      if (VAR_8 != VAR_2) break;
      VAR_16 = VAR_9->win;
      VAR_14 = FUNC_3(VAR_9);
     }
     if (VAR_15 == VAR_4) {
      if (FUNC_1(VAR_16) == 0) VAR_10++;
      VAR_16 += 2; VAR_14 -= 2;
     } else {
      if ((FUNC_0(VAR_16) & 0x0FFFFFFF) == 0) VAR_10++;
      VAR_16 += 4; VAR_14 -= 4;
     }
    } while (--VAR_11);
   }
   VAR_9->free_clust = VAR_10;
   VAR_9->fsi_flag |= 1;
   *VAR_6 = VAR_10;
  }
 }
 FUNC_2(VAR_9, VAR_8);
}
