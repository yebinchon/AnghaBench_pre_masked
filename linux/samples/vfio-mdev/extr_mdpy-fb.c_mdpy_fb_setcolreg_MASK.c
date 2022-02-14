
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
typedef int u32 ;
struct TYPE_9__ {int length; int offset; } ;
struct TYPE_8__ {int length; int offset; } ;
struct TYPE_7__ {int length; int offset; } ;
struct TYPE_6__ {int length; int offset; } ;
struct TYPE_10__ {TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;
struct fb_info {int* pseudo_palette; TYPE_5__ var; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(u_int VAR_2, u_int VAR_3, u_int VAR_4, u_int VAR_5,
         u_int VAR_6, struct fb_info *VAR_7)
{
 u32 *VAR_8 = VAR_7->pseudo_palette;
 u32 VAR_9 = VAR_3 >> (16 - VAR_7->var.red.length);
 u32 VAR_10 = VAR_4 >> (16 - VAR_7->var.green.length);
 u32 VAR_11 = VAR_5 >> (16 - VAR_7->var.blue.length);
 u32 VAR_12, VAR_13;

 if (VAR_2 >= VAR_1)
  return -VAR_0;

 VAR_12 = (VAR_9 << VAR_7->var.red.offset) |
  (VAR_10 << VAR_7->var.green.offset) |
  (VAR_11 << VAR_7->var.blue.offset);
 if (VAR_7->var.transp.length > 0) {
  VAR_13 = (1 << VAR_7->var.transp.length) - 1;
  VAR_13 <<= VAR_7->var.transp.offset;
  VAR_12 |= VAR_13;
 }
 VAR_8[VAR_2] = VAR_12;

 return 0;
}
