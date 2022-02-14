
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; int data; } ;
typedef TYPE_1__ xps_part ;
typedef int xps_document ;
typedef int fz_context ;


 size_t FUNC_0 (int *,int ,unsigned char**) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (char) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (unsigned char) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_0, xps_document *VAR_1, xps_part *VAR_2)
{
 unsigned char VAR_3[33];
 unsigned char VAR_4[16];
 unsigned char *VAR_5;
 size_t VAR_6;
 char *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_0(VAR_0, VAR_2->data, &VAR_5);
 if (VAR_6 < 32)
 {
  FUNC_1(VAR_0, "insufficient data for font deobfuscation");
  return;
 }

 VAR_7 = FUNC_3(VAR_2->name, '/');
 if (!VAR_7)
  VAR_7 = VAR_2->name;

 for (VAR_8 = 0; VAR_8 < 32 && *VAR_7; VAR_7++)
 {
  if (FUNC_2(*VAR_7))
   VAR_3[VAR_8++] = *VAR_7;
 }
 VAR_3[VAR_8] = 0;

 if (VAR_8 != 32)
 {
  FUNC_1(VAR_0, "cannot extract GUID from obfuscated font part name");
  return;
 }

 for (VAR_8 = 0; VAR_8 < 16; VAR_8++)
  VAR_4[VAR_8] = FUNC_4(VAR_3[VAR_8*2+0]) * 16 + FUNC_4(VAR_3[VAR_8*2+1]);

 for (VAR_8 = 0; VAR_8 < 16; VAR_8++)
 {
  VAR_5[VAR_8] ^= VAR_4[15-VAR_8];
  VAR_5[VAR_8+16] ^= VAR_4[15-VAR_8];
 }
}
