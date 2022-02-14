
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum floatformat_byteorders { ____Placeholder_floatformat_byteorders } floatformat_byteorders ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,unsigned int) ;

__attribute__((used)) static unsigned long
FUNC_1 (const unsigned char *VAR_2, enum floatformat_byteorders VAR_3,
           unsigned int VAR_4, unsigned int VAR_5, unsigned int VAR_6)
{
  unsigned long VAR_7 = 0;
  unsigned int VAR_8;
  int VAR_9, VAR_10, VAR_11 = 0;
  int VAR_12 = (VAR_3 == VAR_1) ? 1 : -1;


  VAR_5 = VAR_4 - (VAR_5 + VAR_6);


  if (VAR_3 == VAR_1) {
   VAR_8 = VAR_5 / VAR_0;
  } else {
   VAR_8 = (VAR_4 - VAR_5 - 1) / VAR_0;
  }

  VAR_9 = VAR_5 % VAR_0;
  VAR_10 = FUNC_0 (VAR_9 + VAR_6, VAR_0);

  do
    {
      unsigned int VAR_13 = *(VAR_2 + VAR_8) >> VAR_9;
      unsigned int VAR_14 = VAR_10 - VAR_9;
      unsigned int VAR_15 = (1 << VAR_14) - 1;
      VAR_7 |= (VAR_13 & VAR_15) << VAR_11;
      VAR_6 -= VAR_14;
      VAR_11 += VAR_14;
      VAR_8 += VAR_12;
      VAR_9 = 0;
      VAR_10 = FUNC_0 (VAR_6, VAR_0);
    }
  while (VAR_6 != 0);

  return VAR_7;
}
