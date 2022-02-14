
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LPCSTR ;
typedef int* LPCLSID ;
typedef int INT ;
typedef int HRESULT ;
typedef int CLSID ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int const*,int*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int*,int ,int) ;

__attribute__((used)) static HRESULT FUNC_3(LPCSTR VAR_2, LPCLSID VAR_3)
{
  BYTE const *VAR_4;
  BYTE *VAR_5;
  INT VAR_6;
  BYTE VAR_7[256];

  if (!VAR_2) {
    FUNC_2(VAR_3, 0, sizeof(CLSID));
    return VAR_1;
  }


  if (FUNC_1(VAR_2) != 38)
    return VAR_0;

  VAR_4 = (BYTE const*)VAR_2;
  if ((VAR_4[0]!='{') || (VAR_4[9]!='-') || (VAR_4[14]!='-') || (VAR_4[19]!='-') ||
      (VAR_4[24]!='-') || (VAR_4[37]!='}'))
    return VAR_0;

  for (VAR_6 = 1; VAR_6 < 37; VAR_6++) {
    if ((VAR_6 == 9) || (VAR_6 == 14) || (VAR_6 == 19) || (VAR_6 == 24))
      continue;
    if (!(((VAR_4[VAR_6] >= '0') && (VAR_4[VAR_6] <= '9')) ||
        ((VAR_4[VAR_6] >= 'a') && (VAR_4[VAR_6] <= 'f')) ||
        ((VAR_4[VAR_6] >= 'A') && (VAR_4[VAR_6] <= 'F')))
       )
      return VAR_0;
  }

  FUNC_0("%s -> %p\n", VAR_4, VAR_3);


  FUNC_2(VAR_7, 0, 256);

  for (VAR_6 = 0; VAR_6 < 10; VAR_6++)
    VAR_7['0' + VAR_6] = VAR_6;

  for (VAR_6 = 0; VAR_6 < 6; VAR_6++) {
    VAR_7['A' + VAR_6] = VAR_6+10;
    VAR_7['a' + VAR_6] = VAR_6+10;
  }


  VAR_5 = (BYTE *) VAR_3;

  VAR_4++;
  for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
    VAR_5[3 - VAR_6] = VAR_7[*VAR_4]<<4 | VAR_7[*(VAR_4+1)];
    VAR_4 += 2;
  }
  VAR_5 += 4;
  VAR_4++;

  for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
    VAR_5[1-VAR_6] = VAR_7[*VAR_4]<<4 | VAR_7[*(VAR_4+1)];
    VAR_4 += 2;
  }
  VAR_5 += 2;
  VAR_4++;

  for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
    VAR_5[1-VAR_6] = VAR_7[*VAR_4]<<4 | VAR_7[*(VAR_4+1)];
    VAR_4 += 2;
  }
  VAR_5 += 2;
  VAR_4++;


  for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
    *VAR_5++ = VAR_7[*VAR_4]<<4 | VAR_7[*(VAR_4+1)];
    VAR_4 += 2;
  }
  VAR_4++;

  for (VAR_6 = 0; VAR_6 < 6; VAR_6++) {
    *VAR_5++ = VAR_7[*VAR_4]<<4 | VAR_7[*(VAR_4+1)];
    VAR_4 += 2;
  }

  return VAR_1;
}
