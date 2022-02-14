
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int txid ;


 int VAR_0 ;

__attribute__((used)) static txid
FUNC_0(const char *VAR_1, const char **VAR_2)
{
 txid VAR_3 = 0;
 txid VAR_4 = VAR_0 / 10;
 txid VAR_5 = VAR_0 % 10;

 for (; *VAR_1; VAR_1++)
 {
  unsigned VAR_6;

  if (*VAR_1 < '0' || *VAR_1 > '9')
   break;
  VAR_6 = *VAR_1 - '0';




  if (VAR_3 > VAR_4 || (VAR_3 == VAR_4 && VAR_6 > VAR_5))
  {
   VAR_3 = 0;
   break;
  }

  VAR_3 = VAR_3 * 10 + VAR_6;
 }
 if (VAR_2)
  *VAR_2 = VAR_1;
 return VAR_3;
}
