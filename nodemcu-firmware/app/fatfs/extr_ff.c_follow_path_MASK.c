
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef char UINT ;
struct TYPE_15__ {int c_size; int stat; int attr; scalar_t__ sclust; int c_ofs; scalar_t__ objsize; scalar_t__ c_scl; scalar_t__ n_frag; TYPE_1__* fs; } ;
struct TYPE_14__ {int* fn; int dptr; TYPE_4__ obj; int blk_ofs; } ;
struct TYPE_13__ {scalar_t__ fs_type; int cdc_size; int* dirbuf; scalar_t__ win; int cdc_ofs; scalar_t__ cdc_scl; scalar_t__ cdir; } ;
typedef char TCHAR ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ FATFS ;
typedef int DWORD ;
typedef TYPE_2__ DIR ;
typedef int BYTE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_10 ;
 size_t VAR_11 ;
 scalar_t__ FUNC_1 (TYPE_2__*,char const**) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_6 (int*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,TYPE_4__*) ;

__attribute__((used)) static FRESULT FUNC_8 (
 DIR* VAR_12,
 const TCHAR* VAR_13
)
{
 FRESULT VAR_14;
 BYTE VAR_15;
 FATFS *VAR_16 = VAR_12->obj.fs;







 {
  while (*VAR_13 == '/' || *VAR_13 == '\\') VAR_13++;
  VAR_12->obj.sclust = 0;
 }
 if ((UINT)*VAR_13 < ' ') {
  VAR_12->fn[VAR_6] = VAR_9;
  VAR_14 = FUNC_3(VAR_12, 0);

 } else {
  for (;;) {
   VAR_14 = FUNC_1(VAR_12, &VAR_13);
   if (VAR_14 != VAR_4) break;
   VAR_14 = FUNC_2(VAR_12);
   VAR_15 = VAR_12->fn[VAR_6];
   if (VAR_14 != VAR_4) {
    if (VAR_14 == VAR_2) {
     if (VAR_1 && (VAR_15 & VAR_7)) {
      if (!(VAR_15 & VAR_8)) continue;
      VAR_12->fn[VAR_6] = VAR_9;
      VAR_14 = VAR_4;
     } else {
      if (!(VAR_15 & VAR_8)) VAR_14 = VAR_3;
     }
    }
    break;
   }
   if (VAR_15 & VAR_8) break;

   if (!(VAR_12->obj.attr & VAR_0)) {
    VAR_14 = VAR_3; break;
   }
   {
    VAR_12->obj.sclust = FUNC_5(VAR_16, VAR_16->win + VAR_12->dptr % FUNC_0(VAR_16));
   }
  }
 }

 return VAR_14;
}
