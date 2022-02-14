
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;

__attribute__((used)) static const char *FUNC_0(u32 VAR_1)
{
 static const char * const VAR_2[4] = {
  "Ext", "Int", "Sep", "Oth"
 };

 return VAR_2[(VAR_1 >> (VAR_0 + 4)) & 3];
}
