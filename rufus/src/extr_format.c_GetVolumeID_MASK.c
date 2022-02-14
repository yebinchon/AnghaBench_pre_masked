
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_3__ {int wDay; int wMonth; int wMilliseconds; int wSecond; int wMinute; int wHour; scalar_t__ wYear; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef int DWORD ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static DWORD FUNC_1(void)
{
 SYSTEMTIME VAR_0;
 DWORD VAR_1;
 WORD VAR_2,VAR_3,VAR_4;

 FUNC_0(&VAR_0);

 VAR_2 = VAR_0.wDay + (VAR_0.wMonth << 8);
 VAR_4 = (VAR_0.wMilliseconds/10) + (VAR_0.wSecond << 8);
 VAR_2 += VAR_4;

 VAR_3 = VAR_0.wMinute + (VAR_0.wHour << 8);
 VAR_3 += VAR_0.wYear;

 VAR_1 = VAR_2 + (VAR_3 << 16);
 return VAR_1;
}
