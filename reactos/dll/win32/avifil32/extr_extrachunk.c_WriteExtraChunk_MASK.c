
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cb; scalar_t__* lp; } ;
typedef TYPE_1__* LPEXTRACHUNKS ;
typedef scalar_t__* LPDWORD ;
typedef int * LPCVOID ;
typedef scalar_t__ LPBYTE ;
typedef scalar_t__ LONG ;
typedef int HRESULT ;
typedef scalar_t__ FOURCC ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 scalar_t__* FUNC_1 (int ,int ,int ) ;
 scalar_t__* FUNC_2 (int ,int ,scalar_t__*,scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__*,int *,scalar_t__) ;

HRESULT FUNC_5(LPEXTRACHUNKS VAR_3,FOURCC VAR_4,LPCVOID VAR_5, LONG VAR_6)
{
  LPDWORD VAR_7;


  FUNC_3(VAR_3 != ((void*)0));
  FUNC_3(VAR_5 != ((void*)0));
  FUNC_3(VAR_6 > 0);

  if (VAR_3->lp)
    VAR_7 = FUNC_2(FUNC_0(), VAR_2, VAR_3->lp, VAR_3->cb + VAR_6 + 2 * sizeof(DWORD));
  else
    VAR_7 = FUNC_1(FUNC_0(), VAR_2, VAR_6 + 2 * sizeof(DWORD));

  if (VAR_7 == ((void*)0))
    return VAR_0;

  VAR_3->lp = VAR_7;
  VAR_7 = (LPDWORD) ((LPBYTE)VAR_7 + VAR_3->cb);
  VAR_3->cb += VAR_6 + 2 * sizeof(DWORD);


  VAR_7[0] = VAR_4;
  VAR_7[1] = VAR_6;

  if (VAR_5 != ((void*)0) && VAR_6 > 0)
    FUNC_4(VAR_7 + 2, VAR_5, VAR_6);

  return VAR_1;
}
