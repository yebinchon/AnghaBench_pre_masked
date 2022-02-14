
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Data1; int Data2; int Data3; int* Data4; } ;
typedef TYPE_1__ UUID ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char const*,char const*,int,int,int,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(FILE *VAR_0, const char *VAR_1, const char *VAR_2, const UUID *VAR_3)
{
  if (!VAR_3) return;
  FUNC_0(VAR_0, "DEFINE_GUID(%s_%s, 0x%08x, 0x%04x, 0x%04x, 0x%02x,0x%02x, 0x%02x,"
        "0x%02x,0x%02x,0x%02x,0x%02x,0x%02x);\n",
        VAR_1, VAR_2, VAR_3->Data1, VAR_3->Data2, VAR_3->Data3, VAR_3->Data4[0],
        VAR_3->Data4[1], VAR_3->Data4[2], VAR_3->Data4[3], VAR_3->Data4[4], VAR_3->Data4[5],
        VAR_3->Data4[6], VAR_3->Data4[7]);
}
