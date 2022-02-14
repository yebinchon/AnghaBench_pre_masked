
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t USHORT ;
struct TYPE_3__ {size_t Length; scalar_t__ Buffer; } ;
typedef TYPE_1__* PUNICODE_STRING ;
typedef int * LPCBYTE ;
typedef int FILE ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int *,char*,int ,char*) ;

void FUNC_1(FILE * VAR_0, PUNICODE_STRING VAR_1, BOOLEAN VAR_2)
{
 USHORT VAR_3;
 if(VAR_1->Buffer)
  for(VAR_3 = 0; VAR_3 < VAR_1->Length; VAR_3++)
   FUNC_0(VAR_0, L"%02x%s", ((LPCBYTE) VAR_1->Buffer)[VAR_3], VAR_2 ? " " : "");
}
