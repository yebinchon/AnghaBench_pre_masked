
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int (* mblen_converter ) (unsigned char const*) ;
struct TYPE_2__ {int (* mblen ) (unsigned char const*) ;} ;


 int FUNC_0 (char const*,int,int) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (unsigned char const*) ;

int
FUNC_3(int VAR_1, const char *VAR_2,
       int VAR_3, int VAR_4)
{
 mblen_converter VAR_5;
 int VAR_6 = 0;
 int VAR_7;


 if (FUNC_1(VAR_1) == 1)
  return FUNC_0(VAR_2, VAR_3, VAR_4);

 VAR_5 = VAR_0[VAR_1].mblen;

 while (VAR_3 > 0 && *VAR_2)
 {
  VAR_7 = (*VAR_5) ((const unsigned char *) VAR_2);
  if ((VAR_6 + VAR_7) > VAR_4)
   break;
  VAR_6 += VAR_7;
  if (VAR_6 == VAR_4)
   break;
  VAR_3 -= VAR_7;
  VAR_2 += VAR_7;
 }
 return VAR_6;
}
