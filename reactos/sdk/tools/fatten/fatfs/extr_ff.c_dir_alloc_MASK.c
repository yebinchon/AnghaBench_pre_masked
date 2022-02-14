
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {scalar_t__* dir; int sect; int fs; } ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ DIR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static
FRESULT FUNC_3 (
 DIR* VAR_4,
 UINT VAR_5
)
{
 FRESULT VAR_6;
 UINT VAR_7;


 VAR_6 = FUNC_1(VAR_4, 0);
 if (VAR_6 == VAR_3) {
  VAR_7 = 0;
  do {
   VAR_6 = FUNC_2(VAR_4->fs, VAR_4->sect);
   if (VAR_6 != VAR_3) break;
   if (VAR_4->dir[0] == VAR_0 || VAR_4->dir[0] == 0) {
    if (++VAR_7 == VAR_5) break;
   } else {
    VAR_7 = 0;
   }
   VAR_6 = FUNC_0(VAR_4, 1);
  } while (VAR_6 == VAR_3);
 }
 if (VAR_6 == VAR_2) VAR_6 = VAR_1;
 return VAR_6;
}
