
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ WCHAR ;
typedef int UINT ;
struct TYPE_9__ {scalar_t__ sclust; TYPE_2__* fs; } ;
struct TYPE_11__ {int* dir; TYPE_1__ obj; } ;
struct TYPE_10__ {int fs_type; scalar_t__ win; int volbase; } ;
typedef char TCHAR ;
typedef scalar_t__ FRESULT ;
typedef TYPE_2__ FATFS ;
typedef int DWORD ;
typedef TYPE_3__ DIR ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;


 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (char const**,TYPE_2__**,int ) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_10 (scalar_t__,char*,int) ;

FRESULT FUNC_11 (
 const TCHAR* VAR_8,
 TCHAR* VAR_9,
 DWORD* VAR_10
)
{
 FRESULT VAR_11;
 DIR VAR_12;
 FATFS *VAR_13;
 UINT VAR_14, VAR_15;
 WCHAR VAR_16;


 VAR_11 = FUNC_6(&VAR_8, &VAR_13, 0);


 if (VAR_11 == VAR_5 && VAR_9) {
  VAR_12.obj.fs = VAR_13; VAR_12.obj.sclust = 0;
  VAR_11 = FUNC_4(&VAR_12, 0);
  if (VAR_11 == VAR_5) {
    VAR_11 = FUNC_0(&VAR_12);
    if (VAR_11 == VAR_5) {
    {
     VAR_14 = VAR_15 = 0;
     while (VAR_14 < 11) {
      VAR_16 = VAR_12.dir[VAR_14++];







      VAR_9[VAR_15++] = (TCHAR)VAR_16;

     }
     do {
      VAR_9[VAR_15] = 0;
      if (VAR_15 == 0) break;
     } while (VAR_9[--VAR_15] == ' ');
    }
   }
  }
  if (VAR_11 == VAR_4) {
   VAR_9[0] = 0;
   VAR_11 = VAR_5;
  }
 }


 if (VAR_11 == VAR_5 && VAR_10) {
  VAR_11 = FUNC_9(VAR_13, VAR_13->volbase);
  if (VAR_11 == VAR_5) {
   switch (VAR_13->fs_type) {
   case 129:
    VAR_15 = VAR_0; break;

   case 128:
    VAR_15 = VAR_2; break;

   default:
    VAR_15 = VAR_1;
   }
   *VAR_10 = FUNC_7(VAR_13->win + VAR_15);
  }
 }

 FUNC_2(VAR_13, VAR_11);
}
