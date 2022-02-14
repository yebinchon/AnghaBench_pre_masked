
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int (* mbverifier ) (unsigned char const*,int) ;
struct TYPE_2__ {int (* mbverify ) (unsigned char const*,int) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (int) ;
 char* FUNC_3 (char const*,int ,int) ;
 int FUNC_4 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_5 (int,char const*,int) ;
 int FUNC_6 (unsigned char const*,int) ;

int
FUNC_7(int VAR_1, const char *VAR_2, int VAR_3, bool VAR_4)
{
 mbverifier VAR_5;
 int VAR_6;

 FUNC_0(FUNC_2(VAR_1));




 if (FUNC_4(VAR_1) <= 1)
 {
  const char *VAR_7 = FUNC_3(VAR_2, 0, VAR_3);

  if (VAR_7 == ((void*)0))
   return VAR_3;
  if (VAR_4)
   return -1;
  FUNC_5(VAR_1, VAR_7, 1);
 }


 VAR_5 = VAR_0[VAR_1].mbverify;

 VAR_6 = 0;

 while (VAR_3 > 0)
 {
  int VAR_8;


  if (!FUNC_1(*VAR_2))
  {
   if (*VAR_2 != '\0')
   {
    VAR_6++;
    VAR_2++;
    VAR_3--;
    continue;
   }
   if (VAR_4)
    return -1;
   FUNC_5(VAR_1, VAR_2, VAR_3);
  }

  VAR_8 = (*VAR_5) ((const unsigned char *) VAR_2, VAR_3);

  if (VAR_8 < 0)
  {
   if (VAR_4)
    return -1;
   FUNC_5(VAR_1, VAR_2, VAR_3);
  }

  VAR_2 += VAR_8;
  VAR_3 -= VAR_8;
  VAR_6++;
 }
 return VAR_6;
}
