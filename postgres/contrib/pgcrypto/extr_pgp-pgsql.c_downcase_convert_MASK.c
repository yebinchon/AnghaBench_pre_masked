
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;


 char* FUNC_0 (int) ;

__attribute__((used)) static char *
FUNC_1(const uint8 *VAR_0, int VAR_1)
{
 int VAR_2,
    VAR_3;
 char *VAR_4 = FUNC_0(VAR_1 + 1);

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
 {
  VAR_2 = VAR_0[VAR_3];
  if (VAR_2 >= 'A' && VAR_2 <= 'Z')
   VAR_2 += 'a' - 'A';
  VAR_4[VAR_3] = VAR_2;
 }
 VAR_4[VAR_1] = 0;
 return VAR_4;
}
