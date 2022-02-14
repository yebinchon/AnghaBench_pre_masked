
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int szPathName; } ;
typedef TYPE_1__ OFSTRUCT ;
typedef scalar_t__ INT ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (char*,TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_4 (int,char*,char*,...) ;

__attribute__((used)) static void FUNC_5(char *VAR_2)
{
  INT VAR_3;
  OFSTRUCT VAR_4;
  DWORD VAR_5;

  VAR_3 = FUNC_3(VAR_2, &VAR_4, VAR_1);
  FUNC_4(VAR_3 >= 0, "LZOpenFileA failed to create '%s'\n", VAR_2);
  FUNC_2(VAR_3);
  VAR_5 = FUNC_0(VAR_2);
  FUNC_4(VAR_5 != VAR_0, "GetFileAttributesA('%s'): error %d\n", VAR_4.szPathName, FUNC_1());
}
