
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const) ;
 int * VAR_1 ;

__attribute__((used)) static uint32_t FUNC_3(const uint8_t *VAR_2, size_t VAR_3,
                               size_t *VAR_4)
{
 char VAR_5[VAR_0 + 1];
 size_t VAR_6;

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_1 != ((void*)0));
 for (VAR_6 = 0; VAR_6 < VAR_3 && VAR_2[VAR_6] != ',' && VAR_2[VAR_6] != '\0'; ++VAR_6) {
  if (!FUNC_2(VAR_2[VAR_6]) || VAR_6 > VAR_0) return 0;
  VAR_5[VAR_6] = VAR_2[VAR_6];
 }
 VAR_5[VAR_6] = '\0';
 *VAR_4 = VAR_6;

 return (uint32_t)FUNC_1(VAR_5);
}
