
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int name; int namespace; } ;
typedef TYPE_1__ type_t ;
struct TYPE_6__ {int Data1; int Data2; int Data3; int* Data4; } ;
typedef TYPE_2__ UUID ;
typedef int FILE ;


 char* FUNC_0 (int ,char*,char*,int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(FILE *VAR_0, type_t *VAR_1, const UUID *VAR_2)
{
  char *VAR_3 = FUNC_0(VAR_1->namespace, "", "::", VAR_1->name);
  FUNC_1(VAR_0, "#ifdef __CRT_UUID_DECL\n");
  FUNC_1(VAR_0, "__CRT_UUID_DECL(%s, 0x%08x, 0x%04x, 0x%04x, 0x%02x,0x%02x, 0x%02x,"
        "0x%02x,0x%02x,0x%02x,0x%02x,0x%02x)\n",
        VAR_3, VAR_2->Data1, VAR_2->Data2, VAR_2->Data3, VAR_2->Data4[0], VAR_2->Data4[1],
        VAR_2->Data4[2], VAR_2->Data4[3], VAR_2->Data4[4], VAR_2->Data4[5], VAR_2->Data4[6],
        VAR_2->Data4[7]);
  FUNC_1(VAR_0, "#endif\n");
  FUNC_2(VAR_3);
}
