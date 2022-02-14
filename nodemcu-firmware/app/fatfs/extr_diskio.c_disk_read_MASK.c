
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int DWORD ;
typedef int DRESULT ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int,int *) ;

DRESULT FUNC_2 (
 BYTE VAR_2,
 BYTE *VAR_3,
 DWORD VAR_4,
 UINT VAR_5
)
{
  if (VAR_5 == 1) {
    if (! FUNC_0( VAR_2, VAR_4, VAR_3 )) {
      return VAR_0;
    }
  } else {
    if (! FUNC_1( VAR_2, VAR_4, VAR_5, VAR_3 )) {
      return VAR_0;
    }
  }

  return VAR_1;
}
