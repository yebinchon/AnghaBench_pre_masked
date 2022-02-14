
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ libfat_sector_t ;
struct TYPE_3__ {size_t QuadPart; } ;
typedef size_t LONGLONG ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef int HANDLE ;
typedef size_t DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,size_t,size_t*,int *) ;
 int FUNC_1 (int ,TYPE_1__,int *,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,size_t,size_t,...) ;

int FUNC_4(intptr_t VAR_1, void *VAR_2, size_t VAR_3, libfat_sector_t VAR_4)
{
 LARGE_INTEGER VAR_5;
 DWORD VAR_6;

 VAR_5.QuadPart = (LONGLONG) VAR_4 * VAR_3;
 if (!FUNC_1((HANDLE) VAR_1, VAR_5, ((void*)0), VAR_0)) {
  FUNC_3("Could not set pointer to position %llu: %s", VAR_5.QuadPart, FUNC_2());
  return 0;
 }

 if (!FUNC_0((HANDLE) VAR_1, VAR_2, (DWORD) VAR_3, &VAR_6, ((void*)0))) {
  FUNC_3("Could not read sector %llu: %s", VAR_4, FUNC_2());
  return 0;
 }

 if (VAR_6 != VAR_3) {
  FUNC_3("Sector %llu: Read %d bytes instead of %d requested", VAR_4, VAR_6, VAR_3);
  return 0;
 }

 return (int)VAR_3;
}
