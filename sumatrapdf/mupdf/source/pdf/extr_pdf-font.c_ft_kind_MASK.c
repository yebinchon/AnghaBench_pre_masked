
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FT_Face ;


 char* FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(FT_Face VAR_3)
{



 const char *VAR_4 = FUNC_1(VAR_3);

 if (!FUNC_2(VAR_4, "TrueType")) return VAR_0;
 if (!FUNC_2(VAR_4, "Type 1")) return VAR_1;
 if (!FUNC_2(VAR_4, "CFF")) return VAR_1;
 if (!FUNC_2(VAR_4, "CID Type 1")) return VAR_1;
 return VAR_2;
}
