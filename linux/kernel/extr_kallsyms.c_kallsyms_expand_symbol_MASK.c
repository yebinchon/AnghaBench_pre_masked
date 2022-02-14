
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;


 size_t* VAR_0 ;
 size_t* VAR_1 ;
 size_t* VAR_2 ;

__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_3,
        char *VAR_4, size_t VAR_5)
{
 int VAR_6, VAR_7 = 0;
 const u8 *VAR_8, *VAR_9;


 VAR_9 = &VAR_0[VAR_3];
 VAR_6 = *VAR_9;
 VAR_9++;





 VAR_3 += VAR_6 + 1;





 while (VAR_6) {
  VAR_8 = &VAR_2[VAR_1[*VAR_9]];
  VAR_9++;
  VAR_6--;

  while (*VAR_8) {
   if (VAR_7) {
    if (VAR_5 <= 1)
     goto tail;
    *VAR_4 = *VAR_8;
    VAR_4++;
    VAR_5--;
   } else
    VAR_7 = 1;
   VAR_8++;
  }
 }

tail:
 if (VAR_5)
  *VAR_4 = '\0';


 return VAR_3;
}
