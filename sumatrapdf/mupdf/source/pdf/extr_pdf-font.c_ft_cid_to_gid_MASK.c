
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int* cid_to_gid; size_t cid_to_gid_len; TYPE_2__* font; scalar_t__ wmode; scalar_t__ to_ttf_cmap; } ;
typedef TYPE_3__ pdf_font_desc ;
struct TYPE_5__ {scalar_t__ ft_substitute; } ;
struct TYPE_6__ {int ft_face; TYPE_1__ flags; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(pdf_font_desc *VAR_0, int VAR_1)
{
 if (VAR_0->to_ttf_cmap)
 {
  VAR_1 = FUNC_1(VAR_0->to_ttf_cmap, VAR_1);


  if (VAR_0->font->flags.ft_substitute && VAR_0->wmode)
  {
   switch (VAR_1)
   {
   case 0x0021: VAR_1 = 0xFE15; break;
   case 0x0028: VAR_1 = 0xFE35; break;
   case 0x0029: VAR_1 = 0xFE36; break;
   case 0x002C: VAR_1 = 0xFE10; break;
   case 0x003A: VAR_1 = 0xFE13; break;
   case 0x003B: VAR_1 = 0xFE14; break;
   case 0x003F: VAR_1 = 0xFE16; break;
   case 0x005B: VAR_1 = 0xFE47; break;
   case 0x005D: VAR_1 = 0xFE48; break;
   case 0x005F: VAR_1 = 0xFE33; break;
   case 0x007B: VAR_1 = 0xFE37; break;
   case 0x007D: VAR_1 = 0xFE38; break;
   case 0x2013: VAR_1 = 0xFE32; break;
   case 0x2014: VAR_1 = 0xFE31; break;
   case 0x2025: VAR_1 = 0xFE30; break;
   case 0x2026: VAR_1 = 0xFE19; break;
   case 0x3001: VAR_1 = 0xFE11; break;
   case 0x3002: VAR_1 = 0xFE12; break;
   case 0x3008: VAR_1 = 0xFE3F; break;
   case 0x3009: VAR_1 = 0xFE40; break;
   case 0x300A: VAR_1 = 0xFE3D; break;
   case 0x300B: VAR_1 = 0xFE3E; break;
   case 0x300C: VAR_1 = 0xFE41; break;
   case 0x300D: VAR_1 = 0xFE42; break;
   case 0x300E: VAR_1 = 0xFE43; break;
   case 0x300F: VAR_1 = 0xFE44; break;
   case 0x3010: VAR_1 = 0xFE3B; break;
   case 0x3011: VAR_1 = 0xFE3C; break;
   case 0x3014: VAR_1 = 0xFE39; break;
   case 0x3015: VAR_1 = 0xFE3A; break;
   case 0x3016: VAR_1 = 0xFE17; break;
   case 0x3017: VAR_1 = 0xFE18; break;

   case 0xFF01: VAR_1 = 0xFE15; break;
   case 0xFF08: VAR_1 = 0xFE35; break;
   case 0xFF09: VAR_1 = 0xFE36; break;
   case 0xFF0C: VAR_1 = 0xFE10; break;
   case 0xFF1A: VAR_1 = 0xFE13; break;
   case 0xFF1B: VAR_1 = 0xFE14; break;
   case 0xFF1F: VAR_1 = 0xFE16; break;
   case 0xFF3B: VAR_1 = 0xFE47; break;
   case 0xFF3D: VAR_1 = 0xFE48; break;
   case 0xFF3F: VAR_1 = 0xFE33; break;
   case 0xFF5B: VAR_1 = 0xFE37; break;
   case 0xFF5D: VAR_1 = 0xFE38; break;

   case 0x30FC: VAR_1 = 0xFE31; break;
   case 0xFF0D: VAR_1 = 0xFE31; break;
   }
  }

  return FUNC_0(VAR_0->font->ft_face, VAR_1);
 }

 if (VAR_0->cid_to_gid && (size_t)VAR_1 < VAR_0->cid_to_gid_len && VAR_1 >= 0)
  return VAR_0->cid_to_gid[VAR_1];

 return VAR_1;
}
