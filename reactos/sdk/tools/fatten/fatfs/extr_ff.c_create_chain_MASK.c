
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int last_clust; int n_fatent; int free_clust; int fsi_flag; } ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ FATFS ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,int) ;

__attribute__((used)) static
DWORD FUNC_2 (
 FATFS* VAR_2,
 DWORD VAR_3
)
{
 DWORD VAR_4, VAR_5, VAR_6;
 FRESULT VAR_7;


 if (VAR_3 == 0) {
  VAR_6 = VAR_2->last_clust;
  if (!VAR_6 || VAR_6 >= VAR_2->n_fatent) VAR_6 = 1;
 }
 else {
  VAR_4 = FUNC_0(VAR_2, VAR_3);
  if (VAR_4 < 2) return 1;
  if (VAR_4 == 0xFFFFFFFF) return VAR_4;
  if (VAR_4 < VAR_2->n_fatent) return VAR_4;
  VAR_6 = VAR_3;
 }

 VAR_5 = VAR_6;
 for (;;) {
  VAR_5++;
  if (VAR_5 >= VAR_2->n_fatent) {
   VAR_5 = 2;
   if (VAR_5 > VAR_6) return 0;
  }
  VAR_4 = FUNC_0(VAR_2, VAR_5);
  if (VAR_4 == 0) break;
  if (VAR_4 == 0xFFFFFFFF || VAR_4 == 1)
   return VAR_4;
  if (VAR_5 == VAR_6) return 0;
 }

 VAR_7 = FUNC_1(VAR_2, VAR_5, 0x0FFFFFFF);
 if (VAR_7 == VAR_1 && VAR_3 != 0) {
  VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_5);
 }
 if (VAR_7 == VAR_1) {
  VAR_2->last_clust = VAR_5;
  if (VAR_2->free_clust != 0xFFFFFFFF) {
   VAR_2->free_clust--;
   VAR_2->fsi_flag |= 1;
  }
 } else {
  VAR_5 = (VAR_7 == VAR_0) ? 0xFFFFFFFF : 1;
 }

 return VAR_5;
}
