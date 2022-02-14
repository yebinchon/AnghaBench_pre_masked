
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_8__ {scalar_t__ fs_type; int * win; int volbase; } ;
struct TYPE_7__ {char* dir; TYPE_2__* fs; scalar_t__ sclust; } ;
typedef char TCHAR ;
typedef scalar_t__ FRESULT ;
typedef int DWORD ;
typedef TYPE_1__ DIR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;
 char FUNC_6 (int,int) ;
 scalar_t__ FUNC_7 (TYPE_2__**,char const**,int ) ;
 int FUNC_8 (char*,int*,int) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int ) ;

FRESULT FUNC_10 (
 const TCHAR* VAR_5,
 TCHAR* VAR_6,
 DWORD* VAR_7
)
{
 FRESULT VAR_8;
 DIR VAR_9;
 UINT VAR_10, VAR_11;






 VAR_8 = FUNC_7(&VAR_9.fs, &VAR_5, 0);


 if (VAR_8 == VAR_3 && VAR_6) {
  VAR_9.sclust = 0;
  VAR_8 = FUNC_5(&VAR_9, 0);
  if (VAR_8 == VAR_3) {
   VAR_8 = FUNC_4(&VAR_9, 1);
   if (VAR_8 == VAR_3) {
    FUNC_8(VAR_6, VAR_9.dir, 11);

    VAR_11 = 11;
    do {
     VAR_6[VAR_11] = 0;
     if (!VAR_11) break;
    } while (VAR_6[--VAR_11] == ' ');
   }
   if (VAR_8 == VAR_2) {
    VAR_6[0] = 0;
    VAR_8 = VAR_3;
   }
  }
 }


 if (VAR_8 == VAR_3 && VAR_7) {
  VAR_8 = FUNC_9(VAR_9.fs, VAR_9.fs->volbase);
  if (VAR_8 == VAR_3) {
   VAR_10 = VAR_9.fs->fs_type == VAR_4 ? VAR_1 : VAR_0;
   *VAR_7 = FUNC_2(&VAR_9.fs->win[VAR_10]);
  }
 }

 FUNC_3(VAR_9.fs, VAR_8);
}
