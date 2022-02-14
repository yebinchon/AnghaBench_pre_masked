
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PDEBUGGER_STATUS_BLOCK ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int DEBUGGER_STATUS_BLOCK ;


 int FUNC_0 (int ,int ,int ,int,int *,int,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (char*,int ) ;

int FUNC_4( HANDLE VAR_1, DWORD VAR_2, PDEBUGGER_STATUS_BLOCK VAR_3)
{
  DEBUGGER_STATUS_BLOCK VAR_4;
  DWORD VAR_5;
  if( !FUNC_0( VAR_1, VAR_2, VAR_3, sizeof(DEBUGGER_STATUS_BLOCK),
   &VAR_4, sizeof(DEBUGGER_STATUS_BLOCK),&VAR_5, ((void*)0)) ){
  FUNC_3("Error in DeviceIoControl: %ld\n", FUNC_1());
  return -VAR_0;
  }
  else{
  FUNC_2( VAR_3, &VAR_4, sizeof(DEBUGGER_STATUS_BLOCK) );
  }
  return 0;
}
