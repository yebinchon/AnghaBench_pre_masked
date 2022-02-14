
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* FUNC_0 (unsigned char*,unsigned char*,size_t) ;
 unsigned char* FUNC_1 (unsigned char*,size_t,unsigned char*,size_t,int*) ;
 int FUNC_2 (unsigned char**,size_t*) ;
 int FUNC_3 (unsigned char**,size_t*) ;
 unsigned char* FUNC_4 (unsigned char*,size_t,unsigned char*,size_t) ;

unsigned char *FUNC_5(unsigned char *VAR_0, size_t VAR_1,
         unsigned char *VAR_2, size_t VAR_3,
         bool VAR_4, bool *VAR_5)
{
 unsigned char *VAR_6;


 if (!FUNC_2(&VAR_2, &VAR_3))
  return VAR_2 + VAR_3;

 if (!FUNC_2(&VAR_0, &VAR_1))
  return VAR_2;

 if (VAR_4) {
  VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3,
        VAR_5);
  if (VAR_6)
   return VAR_6;
 }





 while (VAR_3 < VAR_1) {
  if (!FUNC_3(&VAR_0, &VAR_1))
   return VAR_2;
 }


 while (1) {

  VAR_6 = FUNC_4(VAR_0, VAR_1, VAR_2, VAR_1);
  if (VAR_6) {
   *VAR_5 = 1;
   return FUNC_0(VAR_2 + VAR_1, VAR_0, VAR_1);
  }


  if (!FUNC_3(&VAR_0, &VAR_1))
   return VAR_2;
 }
}
