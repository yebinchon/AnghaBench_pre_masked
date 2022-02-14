
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*,int,char**,char*) ;

__attribute__((used)) static char*
FUNC_2(const uint8_t *VAR_0, int VAR_1)
{
  int VAR_2;
  char* VAR_3 = ((void*)0);

  switch (VAR_0[0])
  {
  case 8:
    VAR_3 = (char*)FUNC_0(VAR_1, 1);
    if (VAR_3 == ((void*)0))
      return VAR_3;
    for (VAR_2=0; VAR_2<VAR_1-1; VAR_2++)
      VAR_3[VAR_2] = VAR_0[VAR_2+1];
    return VAR_3;
  case 16:
    FUNC_1((char*)&VAR_0[1], VAR_1-1, &VAR_3, "UCS-2BE");
    return VAR_3;
  default:

    VAR_3 = (char*)FUNC_0(1, 1);
    return VAR_3;
  }
}
