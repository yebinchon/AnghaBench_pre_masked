
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {int n_fatent; int fs_type; int fatbase; int* win; } ;
typedef TYPE_1__ FATFS ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;



 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;

DWORD FUNC_4 (
 FATFS* VAR_1,
 DWORD VAR_2
)
{
 UINT VAR_3, VAR_4;
 BYTE *VAR_5;
 DWORD VAR_6;


 if (VAR_2 < 2 || VAR_2 >= VAR_1->n_fatent) {
  VAR_6 = 1;

 } else {
  VAR_6 = 0xFFFFFFFF;

  switch (VAR_1->fs_type) {
  case 130 :
   VAR_4 = (UINT)VAR_2; VAR_4 += VAR_4 / 2;
   if (FUNC_3(VAR_1, VAR_1->fatbase + (VAR_4 / FUNC_2(VAR_1))) != VAR_0) break;
   VAR_3 = VAR_1->win[VAR_4++ % FUNC_2(VAR_1)];
   if (FUNC_3(VAR_1, VAR_1->fatbase + (VAR_4 / FUNC_2(VAR_1))) != VAR_0) break;
   VAR_3 |= VAR_1->win[VAR_4 % FUNC_2(VAR_1)] << 8;
   VAR_6 = VAR_2 & 1 ? VAR_3 >> 4 : (VAR_3 & 0xFFF);
   break;

  case 129 :
   if (FUNC_3(VAR_1, VAR_1->fatbase + (VAR_2 / (FUNC_2(VAR_1) / 2))) != VAR_0) break;
   VAR_5 = &VAR_1->win[VAR_2 * 2 % FUNC_2(VAR_1)];
   VAR_6 = FUNC_1(VAR_5);
   break;

  case 128 :
   if (FUNC_3(VAR_1, VAR_1->fatbase + (VAR_2 / (FUNC_2(VAR_1) / 4))) != VAR_0) break;
   VAR_5 = &VAR_1->win[VAR_2 * 4 % FUNC_2(VAR_1)];
   VAR_6 = FUNC_0(VAR_5) & 0x0FFFFFFF;
   break;

  default:
   VAR_6 = 1;
  }
 }

 return VAR_6;
}
