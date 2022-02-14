
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NTSTATUS ;
typedef scalar_t__ HWND ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,scalar_t__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,scalar_t__,int ,int ,int ,scalar_t__*,int*) ;
 int FUNC_5 (int ) ;

HWND* FUNC_6 (HWND VAR_2)
{

  DWORD VAR_3 = 0;
  HWND* VAR_4 = ((void*)0);
  HANDLE VAR_5;
  NTSTATUS VAR_6;

  VAR_6 = FUNC_4 ( ((void*)0), VAR_2, VAR_1, 0, 0, ((void*)0), &VAR_3 );

  if ( !FUNC_3( VAR_6 ) )
    return 0;


  VAR_5 = FUNC_0();

  VAR_4 = FUNC_1 ( VAR_5, 0, sizeof(HWND)*(VAR_3+1) );
  if ( !VAR_4 )
    {
      FUNC_5 ( VAR_0 );
      return 0;
    }


  VAR_6 = FUNC_4 (((void*)0), VAR_2, VAR_1, 0, 0, VAR_4, &VAR_3 );

  if ( !FUNC_3( VAR_6 ) )
    {
      if ( VAR_4 )
        FUNC_2 ( VAR_5, 0, VAR_4 );
      return 0;
    }

  VAR_4[VAR_3] = (HWND) 0;

  return VAR_4;
}
