
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int cache; int data; int (* output_function ) (int,int ) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;

int FUNC_4(int VAR_0, mbfl_convert_filter *VAR_1)
{
 int VAR_2;

 if (VAR_0 == 0x0d || VAR_0 == 0x0a || VAR_0 == 0x20 || VAR_0 == 0x09 || VAR_0 == 0x3d) {
  return VAR_0;
 }

 VAR_2 = 0;
 if (VAR_0 >= 0x41 && VAR_0 <= 0x5a) {
  VAR_2 = VAR_0 - 65;
 } else if (VAR_0 >= 0x61 && VAR_0 <= 0x7a) {
  VAR_2 = VAR_0 - 71;
 } else if (VAR_0 >= 0x30 && VAR_0 <= 0x39) {
  VAR_2 = VAR_0 + 4;
 } else if (VAR_0 == 0x2b) {
  VAR_2 = 62;
 } else if (VAR_0 == 0x2f) {
  VAR_2 = 63;
 }
 VAR_2 &= 0x3f;

 switch (VAR_1->status) {
 case 0:
  VAR_1->status = 1;
  VAR_1->cache = VAR_2 << 18;
  break;
 case 1:
  VAR_1->status = 2;
  VAR_1->cache |= VAR_2 << 12;
  break;
 case 2:
  VAR_1->status = 3;
  VAR_1->cache |= VAR_2 << 6;
  break;
 default:
  VAR_1->status = 0;
  VAR_2 |= VAR_1->cache;
  FUNC_0((*VAR_1->output_function)((VAR_2 >> 16) & 0xff, VAR_1->data));
  FUNC_0((*VAR_1->output_function)((VAR_2 >> 8) & 0xff, VAR_1->data));
  FUNC_0((*VAR_1->output_function)(VAR_2 & 0xff, VAR_1->data));
  break;
 }

 return VAR_0;
}
