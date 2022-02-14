
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int n_fatent; int free_clust; int fsi_flag; int csize; int drv; } ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ FATFS ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int,int ) ;

__attribute__((used)) static
FRESULT FUNC_4 (
 FATFS* VAR_4,
 DWORD VAR_5
)
{
 FRESULT VAR_6;
 DWORD VAR_7;




 if (VAR_5 < 2 || VAR_5 >= VAR_4->n_fatent) {
  VAR_6 = VAR_2;

 } else {
  VAR_6 = VAR_3;
  while (VAR_5 < VAR_4->n_fatent) {
   VAR_7 = FUNC_2(VAR_4, VAR_5);
   if (VAR_7 == 0) break;
   if (VAR_7 == 1) { VAR_6 = VAR_2; break; }
   if (VAR_7 == 0xFFFFFFFF) { VAR_6 = VAR_1; break; }
   VAR_6 = FUNC_3(VAR_4, VAR_5, 0);
   if (VAR_6 != VAR_3) break;
   if (VAR_4->free_clust != 0xFFFFFFFF) {
    VAR_4->free_clust++;
    VAR_4->fsi_flag |= 1;
   }
   VAR_5 = VAR_7;
  }
 }

 return VAR_6;
}
