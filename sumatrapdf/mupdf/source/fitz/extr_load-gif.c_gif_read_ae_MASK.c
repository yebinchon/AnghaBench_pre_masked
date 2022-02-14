
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {int dummy; } ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,char*,char*) ;
 unsigned char const* FUNC_2 (int *,struct info*,unsigned char const*,unsigned char const*) ;
 unsigned char const* FUNC_3 (int *,struct info*,unsigned char const*,unsigned char const*,int *) ;
 int FUNC_4 (unsigned char const*,char*,int) ;
 int FUNC_5 (char*,unsigned char const*,int) ;
 scalar_t__ FUNC_6 (char**) ;

__attribute__((used)) static const unsigned char *
FUNC_7(fz_context *VAR_1, struct info *VAR_2, const unsigned char *VAR_3, const unsigned char *VAR_4)
{
 static char *VAR_5[] = {
  "NETSACPE2.0", "ANIMEXTS1.0", "XMP DataXMP",
  "ZGATEXTI5\0\0", "ZGATILEI5\0\0", "ZGANPIMGI5\0", "ZGACTRLI5\0\0",
  "ZGAVECTI5\0\0", "ZGAALPHAI5\0", "ZGATITLE4.0", "ZGATEXTI4.0",
 };
 int VAR_6, VAR_7;

 if (VAR_4 - VAR_3 < 14)
  FUNC_0(VAR_1, VAR_0, "premature end in application extension in gif image");
 if (VAR_3[2] != 0x0b)
  FUNC_0(VAR_1, VAR_0, "out of range application extension block size in gif image");

 VAR_7 = 0;
 for (VAR_6 = 0; VAR_6 < (int)FUNC_6(VAR_5); VAR_6++)
  VAR_7 |= FUNC_4(&VAR_3[3], VAR_5[VAR_6], 8 + 3);
 if (!VAR_7)
 {
  char VAR_8[9];
  FUNC_5(VAR_8, &VAR_3[3], 8);
  VAR_8[8] = '\0';
  FUNC_1(VAR_1, "ignoring unsupported application extension '%s' in gif image", VAR_8);
 }

 if (!FUNC_4(&VAR_3[3], "ICCRGBG1012", 11))
  return FUNC_2(VAR_1, VAR_2, VAR_3 + 14, VAR_4);

 return FUNC_3(VAR_1, VAR_2, VAR_3 + 14, VAR_4, ((void*)0));
}
