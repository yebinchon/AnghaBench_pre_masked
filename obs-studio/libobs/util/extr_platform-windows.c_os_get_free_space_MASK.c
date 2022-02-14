
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
typedef int int64_t ;
struct TYPE_2__ {int QuadPart; } ;
typedef TYPE_1__ ULARGE_INTEGER ;
typedef int PULARGE_INTEGER ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int *,int ,int *,int *) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 scalar_t__ FUNC_2 (char*,int ,int *,int) ;

int64_t FUNC_3(const char *VAR_0)
{
 ULARGE_INTEGER VAR_1;
 char VAR_2[512];
 wchar_t VAR_3[512];

 if (FUNC_1(VAR_0, VAR_2, 512) > 0) {
  if (FUNC_2(VAR_2, 0, VAR_3, 512) > 0) {
   BOOL VAR_4 = FUNC_0(
    VAR_3, (PULARGE_INTEGER)&VAR_1,
    ((void*)0), ((void*)0));
   if (VAR_4)
    return (int64_t)VAR_1.QuadPart;
  }
 }

 return -1;
}
