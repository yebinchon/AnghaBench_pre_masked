
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ result; int string; } ;
typedef TYPE_1__ TEST ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int,char*,char const*,int ,int,char*,...) ;

__attribute__((used)) static void FUNC_2(const char *VAR_1, const TEST *VAR_2, int VAR_3, BOOL VAR_4)
{
 DWORD VAR_5 = FUNC_0();
 DWORD VAR_6 = (VAR_2->result ? 0xdeadbeef : VAR_0);

 FUNC_1(VAR_5 == VAR_6, "%s(\"%s\"), 0x%02x: GetLastError() returned %d, should be %d\n", VAR_1, VAR_2->string, VAR_3, VAR_5, VAR_6);
 FUNC_1(VAR_4 == VAR_2->result, "%s(\"%s\"), 0x%02x: return value should be %s\n", VAR_1, VAR_2->string, VAR_3, VAR_2->result ? "TRUE" : "FALSE");
}
