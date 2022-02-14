
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pcre_uint32 ;


 unsigned int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int
FUNC_2(pcre_uint32 *VAR_0, pcre_uint32 VAR_1, pcre_uint32 *VAR_2,
  pcre_uint32 *VAR_3)
{
pcre_uint32 VAR_4, VAR_5, VAR_6;
unsigned int VAR_7;




for (VAR_4 = *VAR_0; VAR_4 <= VAR_1; VAR_4++)
  {
  if ((VAR_7 = FUNC_0(VAR_4)) != 0)
    {
    *VAR_2 = VAR_4++;
    *VAR_0 = VAR_4;
    return (int)VAR_7;
    }
  if ((VAR_5 = FUNC_1(VAR_4)) != VAR_4) break;
  }

if (VAR_4 > VAR_1) return -1;





*VAR_2 = VAR_5;
VAR_6 = VAR_5 + 1;

for (++VAR_4; VAR_4 <= VAR_1; VAR_4++)
  {
  if ((VAR_7 = FUNC_0(VAR_4)) != 0 || FUNC_1(VAR_4) != VAR_6) break;
  VAR_6++;
  }

*VAR_3 = VAR_6 - 1;
*VAR_0 = VAR_4;
return 0;
}
