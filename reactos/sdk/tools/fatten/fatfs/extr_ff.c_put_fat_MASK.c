
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
typedef int UINT ;
struct TYPE_5__ {int n_fatent; int fs_type; int fatbase; int* win; int wflag; } ;
typedef int FRESULT ;
typedef TYPE_1__ FATFS ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*,int ) ;
 int FUNC_4 (TYPE_1__*,int) ;

FRESULT FUNC_5 (
 FATFS* VAR_2,
 DWORD VAR_3,
 DWORD VAR_4
)
{
 UINT VAR_5;
 BYTE *VAR_6;
 FRESULT VAR_7;


 if (VAR_3 < 2 || VAR_3 >= VAR_2->n_fatent) {
  VAR_7 = VAR_0;

 } else {
  switch (VAR_2->fs_type) {
  case 130 :
   VAR_5 = (UINT)VAR_3; VAR_5 += VAR_5 / 2;
   VAR_7 = FUNC_4(VAR_2, VAR_2->fatbase + (VAR_5 / FUNC_1(VAR_2)));
   if (VAR_7 != VAR_1) break;
   VAR_6 = &VAR_2->win[VAR_5++ % FUNC_1(VAR_2)];
   *VAR_6 = (VAR_3 & 1) ? ((*VAR_6 & 0x0F) | ((BYTE)VAR_4 << 4)) : (BYTE)VAR_4;
   VAR_2->wflag = 1;
   VAR_7 = FUNC_4(VAR_2, VAR_2->fatbase + (VAR_5 / FUNC_1(VAR_2)));
   if (VAR_7 != VAR_1) break;
   VAR_6 = &VAR_2->win[VAR_5 % FUNC_1(VAR_2)];
   *VAR_6 = (VAR_3 & 1) ? (BYTE)(VAR_4 >> 4) : ((*VAR_6 & 0xF0) | ((BYTE)(VAR_4 >> 8) & 0x0F));
   VAR_2->wflag = 1;
   break;

  case 129 :
   VAR_7 = FUNC_4(VAR_2, VAR_2->fatbase + (VAR_3 / (FUNC_1(VAR_2) / 2)));
   if (VAR_7 != VAR_1) break;
   VAR_6 = &VAR_2->win[VAR_3 * 2 % FUNC_1(VAR_2)];
   FUNC_3(VAR_6, (WORD)VAR_4);
   VAR_2->wflag = 1;
   break;

  case 128 :
   VAR_7 = FUNC_4(VAR_2, VAR_2->fatbase + (VAR_3 / (FUNC_1(VAR_2) / 4)));
   if (VAR_7 != VAR_1) break;
   VAR_6 = &VAR_2->win[VAR_3 * 4 % FUNC_1(VAR_2)];
   VAR_4 |= FUNC_0(VAR_6) & 0xF0000000;
   FUNC_2(VAR_6, VAR_4);
   VAR_2->wflag = 1;
   break;

  default :
   VAR_7 = VAR_0;
  }
 }

 return VAR_7;
}
