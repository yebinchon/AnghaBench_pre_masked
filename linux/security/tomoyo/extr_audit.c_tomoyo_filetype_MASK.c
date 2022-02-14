
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;







 int const VAR_0 ;


 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 char const** VAR_8 ;

__attribute__((used)) static inline const char *FUNC_0(const umode_t VAR_9)
{
 switch (VAR_9 & VAR_0) {
 case 129:
 case 0:
  return VAR_8[VAR_5];
 case 132:
  return VAR_8[VAR_3];
 case 130:
  return VAR_8[VAR_7];
 case 131:
  return VAR_8[VAR_4];
 case 128:
  return VAR_8[VAR_6];
 case 134:
  return VAR_8[VAR_1];
 case 133:
  return VAR_8[VAR_2];
 }
 return "unknown";
}
