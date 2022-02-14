
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_3__ {char* buffer; int rem_bytes; scalar_t__ value; } ;
typedef TYPE_1__ parse_buffer ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int VAR_1 ;
 size_t FUNC_1 (int,int) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static BOOL FUNC_3(parse_buffer* VAR_2)
{
  char VAR_3[512];
  DWORD VAR_4 = 0;
  char VAR_5;
  BOOL VAR_6 = VAR_0;

  if (*VAR_2->buffer != '"')
    return VAR_0;

  while ((VAR_4+1) < VAR_2->rem_bytes)
  {
    VAR_5 = *(VAR_2->buffer+VAR_4+1);
    if (VAR_5 == '"')
    {
      VAR_6 = VAR_1;
      break;
    }
    if (VAR_4 < sizeof(VAR_3))
        VAR_3[VAR_4] = VAR_5;
    VAR_4++;
  }
  VAR_3[FUNC_1(VAR_4, sizeof(VAR_3) - 1)] = 0;

  if (!VAR_6)
  {
    FUNC_0("Wrong string %s\n", VAR_3);
    return VAR_0;
  }

  VAR_2->buffer += VAR_4 + 2;
  VAR_2->rem_bytes -= VAR_4 + 2;

  FUNC_0("Found string %s\n", VAR_3);
  FUNC_2((char*)VAR_2->value, VAR_3);

  return VAR_1;
}
