
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void** Data4; void* Data3; void* Data2; void* Data1; } ;
typedef TYPE_1__ UUID ;


 int FUNC_0 (char*,char const*,int) ;
 void* FUNC_1 (char const*,int *,int) ;
 TYPE_1__* FUNC_2 (int) ;

UUID *FUNC_3(const char *VAR_0)
{
  UUID* VAR_1 = FUNC_2(sizeof(UUID));
  char VAR_2[3];

  VAR_1->Data1 = FUNC_1(VAR_0, ((void*)0), 16);
  VAR_1->Data2 = FUNC_1(VAR_0+9, ((void*)0), 16);
  VAR_1->Data3 = FUNC_1(VAR_0+14, ((void*)0), 16);
  VAR_2[2] = 0;
  FUNC_0(VAR_2, VAR_0+19, 2); VAR_1->Data4[0] = FUNC_1(VAR_2, ((void*)0), 16);
  FUNC_0(VAR_2, VAR_0+21, 2); VAR_1->Data4[1] = FUNC_1(VAR_2, ((void*)0), 16);
  FUNC_0(VAR_2, VAR_0+24, 2); VAR_1->Data4[2] = FUNC_1(VAR_2, ((void*)0), 16);
  FUNC_0(VAR_2, VAR_0+26, 2); VAR_1->Data4[3] = FUNC_1(VAR_2, ((void*)0), 16);
  FUNC_0(VAR_2, VAR_0+28, 2); VAR_1->Data4[4] = FUNC_1(VAR_2, ((void*)0), 16);
  FUNC_0(VAR_2, VAR_0+30, 2); VAR_1->Data4[5] = FUNC_1(VAR_2, ((void*)0), 16);
  FUNC_0(VAR_2, VAR_0+32, 2); VAR_1->Data4[6] = FUNC_1(VAR_2, ((void*)0), 16);
  FUNC_0(VAR_2, VAR_0+34, 2); VAR_1->Data4[7] = FUNC_1(VAR_2, ((void*)0), 16);
  return VAR_1;
}
