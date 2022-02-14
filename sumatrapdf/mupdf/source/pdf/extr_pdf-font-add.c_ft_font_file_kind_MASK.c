
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FT_Face ;


 char* FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(FT_Face VAR_0)
{



 const char *VAR_1 = FUNC_1(VAR_0);

 if (!FUNC_2(VAR_1, "TrueType")) return 2;
 if (!FUNC_2(VAR_1, "Type 1")) return 1;
 if (!FUNC_2(VAR_1, "CFF")) return 3;
 if (!FUNC_2(VAR_1, "CID Type 1")) return 1;
 return 0;
}
