
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* filter_map ;


 size_t FUNC_0 (char const*) ;

__attribute__((used)) static void FUNC_1(filter_map *VAR_0, int VAR_1, const unsigned char *VAR_2)
{
 size_t VAR_3, VAR_4;

 VAR_3 = FUNC_0((const char*)VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
  (*VAR_0)[VAR_2[VAR_4]] = VAR_1;
 }
}
