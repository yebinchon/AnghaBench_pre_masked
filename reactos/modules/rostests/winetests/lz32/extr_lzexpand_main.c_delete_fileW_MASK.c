
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int szPathName; } ;
typedef TYPE_1__ OFSTRUCT ;
typedef scalar_t__ INT ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_3 (int,char*,...) ;

__attribute__((used)) static void FUNC_4(WCHAR *VAR_2)
{
  INT VAR_3;
  OFSTRUCT VAR_4;
  DWORD VAR_5;

  VAR_3 = FUNC_2(VAR_2, &VAR_4, VAR_1);
  FUNC_3(VAR_3 >= 0, "LZOpenFileW failed on delete\n");
  FUNC_1(VAR_3);
  VAR_5 = FUNC_0(VAR_2);
  FUNC_3(VAR_5 == VAR_0, "GetFileAttributesW succeeded on deleted file ('%s')\n", VAR_4.szPathName);
}
