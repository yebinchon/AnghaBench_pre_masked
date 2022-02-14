
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int status; int cache; int data; int (* output_function ) (int,int ) ;TYPE_1__* from; } ;
typedef TYPE_2__ mbfl_convert_filter ;
struct TYPE_5__ {int no_encoding; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int*,int ,int) ;
 int FUNC_2 (int,int*) ;
 int FUNC_3 (int,int*) ;
 int FUNC_4 (int,int*) ;
 int VAR_0 ;
 int FUNC_5 (int,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ) ;

int FUNC_9(int VAR_8, mbfl_convert_filter *VAR_9)
{
 int VAR_10, VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;

retry:
 switch (VAR_9->status & 0xff) {
 case 0x00:
  if (VAR_8 < 0x80) {
   FUNC_0((*VAR_9->output_function)(VAR_8, VAR_9->data));
  } else if (VAR_8 >= 0xc2 && VAR_8 <= 0xdf) {
   VAR_9->status = 0x10;
   VAR_9->cache = VAR_8 & 0x1f;
  } else if (VAR_8 >= 0xe0 && VAR_8 <= 0xef) {
   VAR_9->status = 0x20;
   VAR_9->cache = VAR_8 & 0xf;
  } else if (VAR_8 >= 0xf0 && VAR_8 <= 0xf4) {
   VAR_9->status = 0x30;
   VAR_9->cache = VAR_8 & 0x7;
  } else {
   FUNC_0(FUNC_5(VAR_8, VAR_9));
  }
  break;
 case 0x10:
 case 0x21:
 case 0x32:
  VAR_9->status = 0;
  if (VAR_8 >= 0x80 && VAR_8 <= 0xbf) {
   VAR_10 = (VAR_9->cache<<6) | (VAR_8 & 0x3f);
   VAR_9->cache = 0;

   if (VAR_9->from->no_encoding == VAR_3 &&
    FUNC_1(VAR_10, &VAR_11, VAR_0, 4) > 0) {
    VAR_10 = FUNC_2(VAR_11, &VAR_13);
   } else if (VAR_9->from->no_encoding == VAR_4 &&
        FUNC_1(VAR_10, &VAR_11, VAR_1, 7) > 0) {
    VAR_10 = FUNC_3(VAR_11, &VAR_13);
   } else if (VAR_9->from->no_encoding == VAR_5 &&
        FUNC_1(VAR_10, &VAR_11, VAR_2, 8) > 0) {
    VAR_10 = FUNC_3(VAR_11, &VAR_13);
   } else if (VAR_9->from->no_encoding == VAR_6 &&
        FUNC_1(VAR_10, &VAR_11, VAR_7, 6) > 0) {
    VAR_10 = FUNC_4(VAR_11, &VAR_13);
   }

   if (VAR_13 > 0) {
    FUNC_0((*VAR_9->output_function)(VAR_13, VAR_9->data));
   }
   FUNC_0((*VAR_9->output_function)(VAR_10, VAR_9->data));
  } else {
   FUNC_0(FUNC_5(VAR_9->cache, VAR_9));
   goto retry;
  }
  break;
 case 0x20:
  VAR_10 = (VAR_9->cache<<6) | (VAR_8 & 0x3f);
  VAR_12 = VAR_9->cache & 0xf;

  if ((VAR_8 >= 0x80 && VAR_8 <= 0xbf) &&
   ((VAR_12 == 0x0 && VAR_8 >= 0xa0) ||
    (VAR_12 == 0xd && VAR_8 < 0xa0) ||
    (VAR_12 > 0x0 && VAR_12 != 0xd))) {
   VAR_9->cache = VAR_10;
   VAR_9->status++;
  } else {
   FUNC_0(FUNC_5(VAR_9->cache, VAR_9));
   goto retry;
  }
  break;
 case 0x30:
  VAR_10 = (VAR_9->cache<<6) | (VAR_8 & 0x3f);
  VAR_12 = VAR_9->cache & 0x7;

  if ((VAR_8 >= 0x80 && VAR_8 <= 0xbf) &&
   ((VAR_12 == 0x0 && VAR_8 >= 0x90) ||
    (VAR_12 == 0x4 && VAR_8 < 0x90) ||
    (VAR_12 > 0x0 && VAR_12 != 0x4))) {
   VAR_9->cache = VAR_10;
   VAR_9->status++;
  } else {
   FUNC_0(FUNC_5(VAR_9->cache, VAR_9));
   goto retry;
  }
  break;
 case 0x31:
  if (VAR_8 >= 0x80 && VAR_8 <= 0xbf) {
   VAR_9->cache = (VAR_9->cache<<6) | (VAR_8 & 0x3f);
   VAR_9->status++;
  } else {
   FUNC_0(FUNC_5(VAR_9->cache, VAR_9));
   goto retry;
  }
  break;
 default:
  VAR_9->status = 0;
  break;
 }

 return VAR_8;
}
