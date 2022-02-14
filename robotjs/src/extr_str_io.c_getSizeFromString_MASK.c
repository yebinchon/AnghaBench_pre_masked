
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int const*,size_t,size_t*) ;

__attribute__((used)) static bool FUNC_2(const uint8_t *VAR_0, size_t VAR_1,
                              size_t *VAR_2, size_t *VAR_3,
                              size_t *VAR_4)
{
 size_t VAR_5;
 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_3 != ((void*)0));

 if ((*VAR_2 = FUNC_1(VAR_0, VAR_1, &VAR_5)) == 0) {
  return 0;
 }
 *VAR_4 = VAR_5 + 1;

 if ((*VAR_3 = FUNC_1(VAR_0 + *VAR_4, VAR_1, &VAR_5)) == 0) {
  return 0;
 }
 *VAR_4 += VAR_5 + 1;

 return 1;
}
