
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;


 size_t VAR_0 ;
 char const** VAR_1 ;

__attribute__((used)) static const char *FUNC_0(u64 VAR_2)
{
 if (VAR_2 < VAR_0 && VAR_1[VAR_2])
  return VAR_1[VAR_2];

 return "unknown-hardware";
}
