
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 unsigned char* FUNC_0 (unsigned char*,unsigned char*,size_t) ;
 unsigned char* FUNC_1 (unsigned char*,size_t) ;
 scalar_t__ FUNC_2 (unsigned char*,size_t,int *,size_t*) ;
 int FUNC_3 (unsigned char**,size_t*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static unsigned char *FUNC_5(unsigned char *VAR_0,
      size_t VAR_1,
      unsigned char *VAR_2,
      size_t VAR_3, bool *VAR_4)
{
 uint64_t VAR_5, VAR_6;
 unsigned char *VAR_7;
 size_t VAR_8, VAR_9, VAR_10;

 VAR_7 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_7)
  return VAR_2;

 VAR_8 = VAR_1 - (VAR_7 - VAR_0);
 if (!FUNC_2(VAR_7, VAR_8, &VAR_5, &VAR_9)) {

  VAR_1 -= VAR_8;
  VAR_7 = FUNC_1(VAR_0, VAR_1);
  if (!VAR_7)
   return VAR_2;
  VAR_8 = VAR_1 - (VAR_7 - VAR_0);
  if (!FUNC_2(VAR_7, VAR_8, &VAR_5, &VAR_9))
   return VAR_2;
 }

 while (1) {

  if (FUNC_2(VAR_2, VAR_3, &VAR_6, &VAR_10)) {
   int VAR_11 = FUNC_4(VAR_5, VAR_6);


   if (!VAR_11 && VAR_10 >= VAR_9) {
    unsigned char *VAR_12;

    *VAR_4 = 1;
    VAR_12 = VAR_2 + VAR_3 - (VAR_10 - VAR_9);
    return FUNC_0(VAR_12, VAR_0, VAR_1);
   }
   if (VAR_11 < 0)
    return VAR_2;
  }

  if (!FUNC_3(&VAR_2, &VAR_3))
   return VAR_2 + VAR_3;
 }
}
