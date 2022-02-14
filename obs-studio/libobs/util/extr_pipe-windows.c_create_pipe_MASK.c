
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sa ;
struct TYPE_3__ {int nLength; int bInheritHandle; int member_0; } ;
typedef TYPE_1__ SECURITY_ATTRIBUTES ;
typedef int HANDLE ;


 int FUNC_0 (int *,int *,TYPE_1__*,int ) ;

__attribute__((used)) static bool FUNC_1(HANDLE *VAR_0, HANDLE *VAR_1)
{
 SECURITY_ATTRIBUTES VAR_2 = {0};

 VAR_2.nLength = sizeof(VAR_2);
 VAR_2.bInheritHandle = 1;

 if (!FUNC_0(VAR_0, VAR_1, &VAR_2, 0)) {
  return 0;
 }

 return 1;
}
