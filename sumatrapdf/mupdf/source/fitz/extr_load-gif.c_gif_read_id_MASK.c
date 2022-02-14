
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {unsigned char image_left; unsigned char image_top; unsigned char image_width; unsigned char image_height; unsigned char has_lct; unsigned char image_interlaced; int lct_entries; } ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;

__attribute__((used)) static const unsigned char *
FUNC_1(fz_context *VAR_1, struct info *VAR_2, const unsigned char *VAR_3, const unsigned char *VAR_4)
{
 if (VAR_4 - VAR_3 < 10)
  FUNC_0(VAR_1, VAR_0, "premature end in image descriptor in gif image");

 VAR_2->image_left = VAR_3[2] << 8 | VAR_3[1];
 VAR_2->image_top = VAR_3[4] << 8 | VAR_3[3];
 VAR_2->image_width = VAR_3[6] << 8 | VAR_3[5];
 VAR_2->image_height = VAR_3[8] << 8 | VAR_3[7];
 VAR_2->has_lct = (VAR_3[9] >> 7) & 0x1;
 VAR_2->image_interlaced = (VAR_3[9] >> 6) & 0x1;

 if (VAR_2->has_lct)
  VAR_2->lct_entries = 1 << ((VAR_3[9] & 0x7) + 1);

 return VAR_3 + 10;
}
