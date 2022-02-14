
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_4__ {int rem_bytes; char* buffer; scalar_t__ value; } ;
typedef TYPE_1__ parse_buffer ;
struct TYPE_5__ {int Data2; int Data3; int* Data4; int Data1; } ;
typedef TYPE_2__ GUID ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int *,int*,int*,int*,int*,int*,int*,int*,int*,int*,int*) ;

__attribute__((used)) static BOOL FUNC_2(parse_buffer* VAR_3)
{
  char VAR_4[50];
  DWORD VAR_5 = 1;
  GUID VAR_6;
  DWORD VAR_7[10];
  int VAR_8;

  if (VAR_3->rem_bytes < 38 || *VAR_3->buffer != '<')
    return VAR_1;
  VAR_4[0] = '<';
  while (VAR_5 < sizeof(VAR_4) - 2 && *(VAR_3->buffer+VAR_5) != '>')
  {
    VAR_4[VAR_5] = *(VAR_3->buffer+VAR_5);
    VAR_5++;
  }
  VAR_4[VAR_5++] = '>';
  VAR_4[VAR_5] = 0;
  if (VAR_5 != 38 )
  {
    FUNC_0("Wrong guid %s (%d)\n", VAR_4, VAR_5);
    return VAR_1;
  }
  VAR_3->buffer += VAR_5;
  VAR_3->rem_bytes -= VAR_5;

  VAR_8 = FUNC_1(VAR_4, VAR_0, &VAR_6.Data1, VAR_7, VAR_7+1, VAR_7+2, VAR_7+3, VAR_7+4, VAR_7+5, VAR_7+6, VAR_7+7, VAR_7+8, VAR_7+9);
  if (VAR_8 != 11)
  {
    FUNC_0("Wrong guid %s (%d)\n", VAR_4, VAR_5);
    return VAR_1;
  }
  FUNC_0("Found guid %s (%d)\n", VAR_4, VAR_5);

  VAR_6.Data2 = VAR_7[0];
  VAR_6.Data3 = VAR_7[1];
  VAR_6.Data4[0] = VAR_7[2];
  VAR_6.Data4[1] = VAR_7[3];
  VAR_6.Data4[2] = VAR_7[4];
  VAR_6.Data4[3] = VAR_7[5];
  VAR_6.Data4[4] = VAR_7[6];
  VAR_6.Data4[5] = VAR_7[7];
  VAR_6.Data4[6] = VAR_7[8];
  VAR_6.Data4[7] = VAR_7[9];

  *(GUID*)VAR_3->value = VAR_6;

  return VAR_2;
}
