
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;


 int FUNC_0 (int) ;

__attribute__((used)) static uint64
FUNC_1(unsigned char **VAR_0)
{
 uint64 VAR_1;
 unsigned char *VAR_2 = *VAR_0;
 uint64 VAR_3;


 VAR_3 = *(VAR_2++);
 VAR_1 = VAR_3 & 0x7F;
 if (VAR_3 & 0x80)
 {

  VAR_3 = *(VAR_2++);
  VAR_1 |= (VAR_3 & 0x7F) << 7;
  if (VAR_3 & 0x80)
  {

   VAR_3 = *(VAR_2++);
   VAR_1 |= (VAR_3 & 0x7F) << 14;
   if (VAR_3 & 0x80)
   {

    VAR_3 = *(VAR_2++);
    VAR_1 |= (VAR_3 & 0x7F) << 21;
    if (VAR_3 & 0x80)
    {

     VAR_3 = *(VAR_2++);
     VAR_1 |= (VAR_3 & 0x7F) << 28;
     if (VAR_3 & 0x80)
     {

      VAR_3 = *(VAR_2++);
      VAR_1 |= (VAR_3 & 0x7F) << 35;
      if (VAR_3 & 0x80)
      {

       VAR_3 = *(VAR_2++);
       VAR_1 |= VAR_3 << 42;
       FUNC_0((VAR_3 & 0x80) == 0);
      }
     }
    }
   }
  }
 }

 *VAR_0 = VAR_2;

 return VAR_1;
}
