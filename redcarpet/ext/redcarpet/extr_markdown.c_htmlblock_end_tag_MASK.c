
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct sd_markdown {int dummy; } ;


 size_t FUNC_0 (char*,size_t) ;
 scalar_t__ FUNC_1 (char*,char const*,size_t) ;

__attribute__((used)) static size_t
FUNC_2(
 const char *VAR_0,
 size_t VAR_1,
 struct sd_markdown *VAR_2,
 uint8_t *VAR_3,
 size_t VAR_4)
{
 size_t VAR_5, VAR_6;


 if (VAR_1 + 3 >= VAR_4 ||
  FUNC_1((char *)VAR_3 + 2, VAR_0, VAR_1) != 0 ||
  VAR_3[VAR_1 + 2] != '>')
  return 0;


 VAR_5 = VAR_1 + 3;
 VAR_6 = 0;
 if (VAR_5 < VAR_4 && (VAR_6 = FUNC_0(VAR_3 + VAR_5, VAR_4 - VAR_5)) == 0)
  return 0;
 VAR_5 += VAR_6;
 VAR_6 = 0;

 if (VAR_5 < VAR_4)
  VAR_6 = FUNC_0(VAR_3 + VAR_5, VAR_4 - VAR_5);

 return VAR_5 + VAR_6;
}
