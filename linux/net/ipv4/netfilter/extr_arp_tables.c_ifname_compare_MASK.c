
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u16 ;


 int VAR_0 ;
 unsigned long FUNC_0 (char const*,char const*,char const*) ;

__attribute__((used)) static unsigned long FUNC_1(const char *VAR_1, const char *VAR_2, const char *VAR_3)
{



 unsigned long VAR_4 = 0;
 const u16 *VAR_5 = (const u16 *)VAR_1;
 const u16 *VAR_6 = (const u16 *)VAR_2;
 const u16 *VAR_7 = (const u16 *)VAR_3;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_0/sizeof(u16); VAR_8++)
  VAR_4 |= (VAR_5[VAR_8] ^ VAR_6[VAR_8]) & VAR_7[VAR_8];

 return VAR_4;
}
