
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char UINT ;
struct TYPE_8__ {int cdir; } ;
struct TYPE_7__ {int* dir; int* fn; TYPE_2__* fs; int sclust; } ;
typedef char TCHAR ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ DIR ;
typedef int BYTE ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char const**) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_2__*,int*) ;

__attribute__((used)) static
FRESULT FUNC_4 (
 DIR* VAR_9,
 const TCHAR* VAR_10
)
{
 FRESULT VAR_11;
 BYTE *VAR_12, VAR_13;
 if (*VAR_10 == '/' || *VAR_10 == '\\')
  VAR_10++;
 VAR_9->sclust = 0;


 if ((UINT)*VAR_10 < ' ') {
  VAR_11 = FUNC_2(VAR_9, 0);
  VAR_9->dir = 0;
 } else {
  for (;;) {
   VAR_11 = FUNC_0(VAR_9, &VAR_10);
   if (VAR_11 != VAR_4) break;
   VAR_11 = FUNC_1(VAR_9);
   VAR_13 = VAR_9->fn[VAR_5];
   if (VAR_11 != VAR_4) {
    if (VAR_11 == VAR_2) {
     if (VAR_8 && (VAR_13 & VAR_6)) {
      VAR_9->sclust = 0; VAR_9->dir = 0;
      if (!(VAR_13 & VAR_7)) continue;
      VAR_11 = VAR_4;
     } else {
      if (!(VAR_13 & VAR_7)) VAR_11 = VAR_3;
     }
    }
    break;
   }
   if (VAR_13 & VAR_7) break;
   VAR_12 = VAR_9->dir;
   if (!(VAR_12[VAR_1] & VAR_0)) {
    VAR_11 = VAR_3; break;
   }
   VAR_9->sclust = FUNC_3(VAR_9->fs, VAR_12);
  }
 }

 return VAR_11;
}
