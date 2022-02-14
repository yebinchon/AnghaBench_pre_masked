
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lfn_idx; int* dir; int index; int* fn; scalar_t__ lfn; int sect; int fs; } ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ DIR ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (scalar_t__,int*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int*,int*,int) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int*) ;

__attribute__((used)) static
FRESULT FUNC_6 (
 DIR* VAR_12
)
{
 FRESULT VAR_13;
 BYTE VAR_14, *VAR_15;




 VAR_13 = FUNC_2(VAR_12, 0);
 if (VAR_13 != VAR_7) return VAR_13;




 do {
  VAR_13 = FUNC_4(VAR_12->fs, VAR_12->sect);
  if (VAR_13 != VAR_7) break;
  VAR_15 = VAR_12->dir;
  VAR_14 = VAR_15[VAR_5];
  if (VAR_14 == 0) { VAR_13 = VAR_6; break; }
  if (!(VAR_15[VAR_4] & VAR_2) && !FUNC_3(VAR_15, VAR_12->fn, 11))
   break;

  VAR_13 = FUNC_1(VAR_12, 0);
 } while (VAR_13 == VAR_7);

 return VAR_13;
}
