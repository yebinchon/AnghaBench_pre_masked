
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* dir; int lfn_idx; int index; scalar_t__ sect; int lfn; int fs; } ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ DIR ;
typedef char BYTE ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 char VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 char FUNC_3 (char*) ;

__attribute__((used)) static
FRESULT FUNC_4 (
 DIR* VAR_12,
 int VAR_13
)
{
 FRESULT VAR_14;
 BYTE VAR_15, VAR_16, *VAR_17;




 VAR_14 = VAR_7;
 while (VAR_12->sect) {
  VAR_14 = FUNC_1(VAR_12->fs, VAR_12->sect);
  if (VAR_14 != VAR_8) break;
  VAR_17 = VAR_12->dir;
  VAR_16 = VAR_17[VAR_6];
  if (VAR_16 == 0) { VAR_14 = VAR_7; break; }
  VAR_15 = VAR_17[VAR_5] & VAR_2;
  if (VAR_16 != VAR_4 && (VAR_11 || VAR_16 != '.') && VAR_15 != VAR_1 && (int)((VAR_15 & ~VAR_0) == VAR_3) == VAR_13)
   break;

  VAR_14 = FUNC_0(VAR_12, 0);
  if (VAR_14 != VAR_8) break;
 }

 if (VAR_14 != VAR_8) VAR_12->sect = 0;

 return VAR_14;
}
