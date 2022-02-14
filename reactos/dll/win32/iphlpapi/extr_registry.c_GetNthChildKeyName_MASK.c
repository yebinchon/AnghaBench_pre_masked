
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__* PWCHAR ;
typedef scalar_t__ LONG ;
typedef int HANDLE ;
typedef size_t DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (int ,size_t,scalar_t__*,size_t*,int *,int *,int *,int *) ;

PWCHAR FUNC_5( HANDLE VAR_1, DWORD VAR_2 ) {
  LONG VAR_3;
  int VAR_4 = FUNC_0( VAR_1 );
  PWCHAR VAR_5;
  DWORD VAR_6;

  if (VAR_4 == -1)
    return 0;

  VAR_6 = VAR_4;
  VAR_5 = (PWCHAR)FUNC_2( FUNC_1(), 0, VAR_4 * sizeof(WCHAR) );
  if (!VAR_5) return 0;

  VAR_3 = FUNC_4( VAR_1, VAR_2, VAR_5, &VAR_6,
     ((void*)0), ((void*)0), ((void*)0), ((void*)0) );
  if (VAR_3 != VAR_0) {
    FUNC_3(FUNC_1(), 0, VAR_5);
    return 0;
  } else {
    VAR_5[VAR_6] = 0;
    return VAR_5;
  }
}
