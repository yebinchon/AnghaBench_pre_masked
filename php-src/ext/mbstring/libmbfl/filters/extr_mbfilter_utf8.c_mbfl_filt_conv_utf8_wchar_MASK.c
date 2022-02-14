
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int status; int cache; int data; int (* output_function ) (int,int ) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,TYPE_1__*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;

int FUNC_4(int VAR_0, mbfl_convert_filter *VAR_1)
{
 int VAR_2, VAR_3;

retry:
 switch (VAR_1->status & 0xff) {
 case 0x00:
  if (VAR_0 < 0x80) {
   FUNC_0((*VAR_1->output_function)(VAR_0, VAR_1->data));
  } else if (VAR_0 >= 0xc2 && VAR_0 <= 0xdf) {
   VAR_1->status = 0x10;
   VAR_1->cache = VAR_0 & 0x1f;
  } else if (VAR_0 >= 0xe0 && VAR_0 <= 0xef) {
   VAR_1->status = 0x20;
   VAR_1->cache = VAR_0 & 0xf;
  } else if (VAR_0 >= 0xf0 && VAR_0 <= 0xf4) {
   VAR_1->status = 0x30;
   VAR_1->cache = VAR_0 & 0x7;
  } else {
   FUNC_0(FUNC_1(VAR_0, VAR_1));
  }
  break;
 case 0x10:
 case 0x21:
 case 0x32:
  VAR_1->status = 0;
  if (VAR_0 >= 0x80 && VAR_0 <= 0xbf) {
   VAR_2 = (VAR_1->cache<<6) | (VAR_0 & 0x3f);
   VAR_1->cache = 0;
   FUNC_0((*VAR_1->output_function)(VAR_2, VAR_1->data));
  } else {
   FUNC_0(FUNC_1(VAR_1->cache, VAR_1));
   goto retry;
  }
  break;
 case 0x20:
  VAR_2 = (VAR_1->cache<<6) | (VAR_0 & 0x3f);
  VAR_3 = VAR_1->cache & 0xf;

  if ((VAR_0 >= 0x80 && VAR_0 <= 0xbf) &&
   ((VAR_3 == 0x0 && VAR_0 >= 0xa0) ||
    (VAR_3 == 0xd && VAR_0 < 0xa0) ||
    (VAR_3 > 0x0 && VAR_3 != 0xd))) {
   VAR_1->cache = VAR_2;
   VAR_1->status++;
  } else {
   FUNC_0(FUNC_1(VAR_1->cache, VAR_1));
   goto retry;
  }
  break;
 case 0x30:
  VAR_2 = (VAR_1->cache<<6) | (VAR_0 & 0x3f);
  VAR_3 = VAR_1->cache & 0x7;

  if ((VAR_0 >= 0x80 && VAR_0 <= 0xbf) &&
   ((VAR_3 == 0x0 && VAR_0 >= 0x90) ||
    (VAR_3 == 0x4 && VAR_0 < 0x90) ||
    (VAR_3 > 0x0 && VAR_3 != 0x4))) {
   VAR_1->cache = VAR_2;
   VAR_1->status++;
  } else {
   FUNC_0(FUNC_1(VAR_1->cache, VAR_1));
   goto retry;
  }
  break;
 case 0x31:
  if (VAR_0 >= 0x80 && VAR_0 <= 0xbf) {
   VAR_1->cache = (VAR_1->cache<<6) | (VAR_0 & 0x3f);
   VAR_1->status++;
  } else {
   FUNC_0(FUNC_1(VAR_1->cache, VAR_1));
   goto retry;
  }
  break;
 default:
  VAR_1->status = 0;
  break;
 }

 return VAR_0;
}
