
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UINT ;
typedef int BYTE ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int FUNC_0 (int*,int) ;

__attribute__((used)) static
void FUNC_1 (
 const WCHAR* VAR_8,
 BYTE* VAR_9,
 BYTE VAR_10,
 BYTE VAR_11
)
{
 UINT VAR_12, VAR_13;
 WCHAR VAR_14;


 VAR_9[VAR_2] = VAR_11;
 VAR_9[VAR_1] = VAR_0;
 VAR_9[VAR_5] = 0;
 FUNC_0(VAR_9 + VAR_3, 0);

 VAR_12 = (VAR_10 - 1) * 13;
 VAR_13 = VAR_14 = 0;
 do {
  if (VAR_14 != 0xFFFF) VAR_14 = VAR_8[VAR_12++];
  FUNC_0(VAR_9+VAR_7[VAR_13], VAR_14);
  if (!VAR_14) VAR_14 = 0xFFFF;
 } while (++VAR_13 < 13);
 if (VAR_14 == 0xFFFF || !VAR_8[VAR_12]) VAR_10 |= VAR_6;
 VAR_9[VAR_4] = VAR_10;
}
