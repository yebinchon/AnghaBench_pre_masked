
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
typedef int __be32 ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_3(__be32 *VAR_0, __be32 *VAR_1,
        unsigned int VAR_2)
{
 unsigned int VAR_3, VAR_4;
 u32 VAR_5;


 *VAR_0++ = *VAR_1++;


 VAR_4 = FUNC_1(VAR_1);
 *VAR_0++ = *VAR_1++;

 for (VAR_3 = VAR_4; VAR_3; VAR_3--) {

  *VAR_0++ = *VAR_1++;


  VAR_5 = FUNC_0(*VAR_1);
  if (VAR_2 >= VAR_5) {

   *VAR_0 = *VAR_1;
   VAR_2 -= VAR_5;
  } else {

   *VAR_0 = FUNC_2(VAR_2);
   VAR_2 = 0;
  }
  VAR_0++; VAR_1++;


  *VAR_0++ = *VAR_1++;
  *VAR_0++ = *VAR_1++;
 }

 return VAR_4;
}
