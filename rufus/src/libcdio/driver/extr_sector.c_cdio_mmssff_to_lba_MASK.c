
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lba_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int ) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

lba_t
FUNC_3 (const char *VAR_3)
{
  int VAR_4;
  lba_t VAR_5;
  unsigned char VAR_6;

  if (0 == FUNC_2 (VAR_3, "0"))
    return 0;

  VAR_6 = *VAR_3++;
  if(VAR_6 >= '0' && VAR_6 <= '9')
    VAR_4 = (VAR_6 - '0');
  else
    return VAR_2;
  while(':' != (VAR_6 = *VAR_3++)) {
    if(VAR_6 >= '0' && VAR_6 <= '9')
      VAR_4 = VAR_4 * 10 + (VAR_6 - '0');
    else
      return VAR_2;
  }

  VAR_5 = FUNC_0 (VAR_4, 0, 0);

  VAR_6 = *VAR_3++;
  if(VAR_6 >= '0' && VAR_6 <= '9')
    VAR_4 = (VAR_6 - '0');
  else
    return VAR_2;
  if(':' != (VAR_6 = *VAR_3++)) {
    if(VAR_6 >= '0' && VAR_6 <= '9') {
      VAR_4 = VAR_4 * 10 + (VAR_6 - '0');
      VAR_6 = *VAR_3++;
      if(VAR_6 != ':')
 return VAR_2;
    }
    else
      return VAR_2;
  }

  if(VAR_4 >= VAR_1)
    return VAR_2;

  VAR_5 += FUNC_0 (0, VAR_4, 0);

  VAR_6 = *VAR_3++;
  if (FUNC_1(VAR_6))
    VAR_4 = (VAR_6 - '0');
  else
    return -1;
  if('\0' != (VAR_6 = *VAR_3++)) {
    if (FUNC_1(VAR_6)) {
      VAR_4 = VAR_4 * 10 + (VAR_6 - '0');
      VAR_6 = *VAR_3++;
    }
    else
      return VAR_2;
  }

  if('\0' != VAR_6)
    return VAR_2;

  if(VAR_4 >= VAR_0)
    return VAR_2;

  VAR_5 += VAR_4;

  return VAR_5;
}
