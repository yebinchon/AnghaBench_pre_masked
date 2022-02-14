
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 size_t* VAR_0 ;

__attribute__((used)) static unsigned char *FUNC_0(unsigned char* VAR_1, unsigned char VAR_2, size_t VAR_3)
{
 unsigned char *VAR_4 = VAR_1;
 size_t VAR_5 = VAR_0[VAR_2];



 while(VAR_4-VAR_1 < (ssize_t)VAR_3)
 {
  if(VAR_4[0] == 0)
  {
   if(VAR_5 <= VAR_3-(VAR_4-VAR_1))
   {
    size_t VAR_6 = 1;
    for(; VAR_6<VAR_5; ++VAR_6) if(VAR_4[VAR_6] != 0) break;

    if(VAR_6 == VAR_5)
    {
     VAR_4 += VAR_5;
     break;
    }
   }
   else return ((void*)0);
  }

  VAR_4 += VAR_5;
 }
 if((size_t)(VAR_4-VAR_1) >= VAR_3) VAR_4 = ((void*)0);

 return VAR_4;
}
