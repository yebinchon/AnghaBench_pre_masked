
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {unsigned char has_transparency; unsigned char transparent; } ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;

__attribute__((used)) static const unsigned char *
FUNC_1(fz_context *VAR_1, struct info *VAR_2, const unsigned char *VAR_3, const unsigned char *VAR_4)
{
 if (VAR_4 - VAR_3 < 8)
  FUNC_0(VAR_1, VAR_0, "premature end in graphic control extension in gif image");
 if (VAR_3[2] != 0x04)
  FUNC_0(VAR_1, VAR_0, "out of range graphic control extension block size in gif image");

 VAR_2->has_transparency = VAR_3[3] & 0x1;
 if (VAR_2->has_transparency)
  VAR_2->transparent = VAR_3[6];

 return VAR_3 + 8;
}
