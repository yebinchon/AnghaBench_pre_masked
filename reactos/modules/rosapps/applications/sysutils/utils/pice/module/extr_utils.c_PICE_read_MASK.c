
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long Information; } ;
typedef int LPVOID ;
typedef TYPE_1__ IO_STATUS_BLOCK ;
typedef int HANDLE ;
typedef long DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int *,int *,TYPE_1__*,int ,long,int *,int *) ;

long FUNC_3(HANDLE VAR_0, LPVOID VAR_1, long VAR_2)
{
 DWORD VAR_3;
 IO_STATUS_BLOCK VAR_4;

 FUNC_0( VAR_1 );

 if (!FUNC_1(FUNC_2(
  VAR_0,
  ((void*)0), ((void*)0), ((void*)0), &VAR_4,
  VAR_1,
  (DWORD) VAR_2,
  ((void*)0),
  ((void*)0)
  )))
 {
  return -1;
 }
 VAR_3 = VAR_4.Information;
 return VAR_3;
}
