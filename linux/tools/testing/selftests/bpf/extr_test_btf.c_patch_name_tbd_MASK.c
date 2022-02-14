
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int raw_u32 ;
typedef int __u32 ;


 scalar_t__ FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_1 (int ) ;
 int const VAR_2 ;
 int FUNC_2 (int*) ;
 char* FUNC_3 (char const*,char const*) ;
 int FUNC_4 (int const*) ;
 int* FUNC_5 (int) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static __u32 *FUNC_7(const __u32 *VAR_3,
        const char *VAR_4, __u32 VAR_5,
        unsigned int VAR_6,
        unsigned int *VAR_7)
{
 int VAR_8, VAR_9 = FUNC_4(VAR_3);
 const char *VAR_10 = VAR_4 + VAR_6;
 const char *VAR_11 = VAR_4 + VAR_5;
 __u32 *VAR_12 = ((void*)0);

 if (VAR_9 == -1)
  return FUNC_1(-VAR_0);

 if (!VAR_9) {
  *VAR_7 = 0;
  return ((void*)0);
 }

 VAR_12 = FUNC_5(VAR_9);
 if (!VAR_12)
  return FUNC_1(-VAR_1);

 for (VAR_8 = 0; VAR_8 < VAR_9 / sizeof(VAR_3[0]); VAR_8++) {
  if (VAR_3[VAR_8] == VAR_2) {
   VAR_11 = FUNC_3(VAR_11, VAR_10);
   if (FUNC_0(!VAR_11, "Error in getting next_str\n")) {
    FUNC_2(VAR_12);
    return FUNC_1(-VAR_0);
   }
   VAR_12[VAR_8] = VAR_11 - VAR_4;
   VAR_11 += FUNC_6(VAR_11);
  } else {
   VAR_12[VAR_8] = VAR_3[VAR_8];
  }
 }

 *VAR_7 = VAR_9;
 return VAR_12;
}
