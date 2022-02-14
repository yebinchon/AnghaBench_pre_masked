
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cb; int * lp; } ;
typedef int * LPVOID ;
typedef scalar_t__* LPLONG ;
typedef scalar_t__* LPDWORD ;
typedef int * LPBYTE ;
typedef int HRESULT ;
typedef scalar_t__ FOURCC ;
typedef TYPE_1__ EXTRACHUNKS ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

HRESULT FUNC_3(const EXTRACHUNKS *VAR_2,FOURCC VAR_3,LPVOID VAR_4,LPLONG VAR_5)
{
  LPBYTE VAR_6;
  DWORD VAR_7;


  FUNC_0(VAR_2 != ((void*)0));
  FUNC_0(VAR_5 != ((void*)0));

  VAR_6 = VAR_2->lp;
  VAR_7 = VAR_2->cb;

  if (VAR_6 != ((void*)0)) {
    while (VAR_7 > 0) {
      if (((FOURCC*)VAR_6)[0] == VAR_3) {

 if (VAR_4 != ((void*)0) && *VAR_5 > 0)
   FUNC_1(VAR_4, VAR_6 + 2 * sizeof(DWORD),
   FUNC_2(((LPDWORD)VAR_6)[1], *(LPDWORD)VAR_5));

 *(LPDWORD)VAR_5 = ((LPDWORD)VAR_6)[1];

 return VAR_1;
      } else {

 VAR_7 -= ((LPDWORD)VAR_6)[1] + 2 * sizeof(DWORD);
 VAR_6 += ((LPDWORD)VAR_6)[1] + 2 * sizeof(DWORD);
      }
    }
  }


  *VAR_5 = 0;

  return VAR_0;
}
