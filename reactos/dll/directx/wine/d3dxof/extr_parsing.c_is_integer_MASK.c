
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_3__ {int rem_bytes; char* buffer; scalar_t__ value; } ;
typedef TYPE_1__ parse_buffer ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (char) ;
 size_t FUNC_2 (int,int) ;
 int FUNC_3 (char*,char*,int*) ;

__attribute__((used)) static BOOL FUNC_4(parse_buffer* VAR_2)
{
  char VAR_3[512];
  DWORD VAR_4 = 0;
  char VAR_5;
  DWORD VAR_6;

  while (VAR_4 < VAR_2->rem_bytes && !FUNC_1(VAR_5 = *(VAR_2->buffer+VAR_4)))
  {
    if (!((VAR_5 >= '0') && (VAR_5 <= '9')))
      return VAR_0;
    if (VAR_4 < sizeof(VAR_3))
        VAR_3[VAR_4] = VAR_5;
    VAR_4++;
  }
  VAR_3[FUNC_2(VAR_4, sizeof(VAR_3) - 1)] = 0;

  VAR_2->buffer += VAR_4;
  VAR_2->rem_bytes -= VAR_4;

  FUNC_3(VAR_3, "%d", &VAR_6);

  FUNC_0("Found integer %s - %d\n", VAR_3, VAR_6);

  *(DWORD*)VAR_2->value = VAR_6;

  return VAR_1;
}
