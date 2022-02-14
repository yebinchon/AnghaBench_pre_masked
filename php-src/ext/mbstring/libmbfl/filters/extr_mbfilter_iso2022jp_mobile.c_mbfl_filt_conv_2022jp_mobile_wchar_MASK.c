
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int status; int cache; int data; int (* output_function ) (int,int ) ;TYPE_1__* from; } ;
typedef TYPE_2__ mbfl_convert_filter ;
struct TYPE_4__ {int no_encoding; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,int*) ;
 int VAR_9 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (int,int ) ;
 int FUNC_16 (int,int ) ;
 int FUNC_17 (int,int ) ;

int
FUNC_18(int VAR_10, mbfl_convert_filter *VAR_11)
{
 int VAR_12, VAR_13, VAR_14, VAR_15 = 0;

retry:
 switch (VAR_11->status & 0xf) {




 case 0:
  if (VAR_10 == 0x1b) {
   VAR_11->status += 2;
  } else if (VAR_11->status == 0x20 && VAR_10 > 0x20 && VAR_10 < 0x60) {
   FUNC_0((*VAR_11->output_function)(0xff40 + VAR_10, VAR_11->data));
  } else if (VAR_11->status == 0x80 && VAR_10 > 0x20 && VAR_10 < 0x80) {
   VAR_11->cache = VAR_10;
   VAR_11->status += 1;
  } else if (VAR_10 >= 0 && VAR_10 < 0x80) {
   FUNC_0((*VAR_11->output_function)(VAR_10, VAR_11->data));
  } else if (VAR_10 > 0xa0 && VAR_10 < 0xe0) {
   FUNC_0((*VAR_11->output_function)(0xfec0 + VAR_10, VAR_11->data));
  } else {
   VAR_14 = VAR_10 & VAR_0;
   VAR_14 |= VAR_1;
   FUNC_0((*VAR_11->output_function)(VAR_14, VAR_11->data));
  }
  break;


 case 1:
  VAR_14 = 0;
  VAR_11->status &= ~0xf;
  VAR_12 = VAR_11->cache;
  if (VAR_10 > 0x20 && VAR_10 < 0x7f) {
   VAR_13 = (VAR_12 - 0x21)*94 + VAR_10 - 0x21;

   if (VAR_13 <= 137) {
    if (VAR_13 == 31) {
     VAR_14 = 0xff3c;
    } else if (VAR_13 == 32) {
     VAR_14 = 0xff5e;
    } else if (VAR_13 == 33) {
     VAR_14 = 0x2225;
    } else if (VAR_13 == 60) {
     VAR_14 = 0xff0d;
    } else if (VAR_13 == 80) {
     VAR_14 = 0xffe0;
    } else if (VAR_13 == 81) {
     VAR_14 = 0xffe1;
    } else if (VAR_13 == 137) {
     VAR_14 = 0xffe2;
    }
   }

   if (VAR_14 == 0) {
    if (VAR_13 >= VAR_6 && VAR_13 < VAR_5) {
     VAR_14 = VAR_4[VAR_13 - VAR_6];
    } else if (VAR_13 >= 0 && VAR_13 < VAR_8) {
     VAR_14 = VAR_7[VAR_13];
    } else {
     VAR_14 = 0;
    }
   }

   if (VAR_13 >= (84*94) && VAR_13 < 91*94) {
    VAR_13 += 22*94;
    if (VAR_11->from->no_encoding == VAR_9) {
     VAR_14 = FUNC_1(VAR_13, &VAR_15);
    }
    if (VAR_14 > 0 && VAR_15 > 0) {
     FUNC_0((*VAR_11->output_function)(VAR_15, VAR_11->data));
    }
   }

   if (VAR_14 <= 0) {
    VAR_14 = (VAR_12 << 8) | VAR_10;
    VAR_14 &= VAR_3;
    VAR_14 |= VAR_2;
    }
   FUNC_0((*VAR_11->output_function)(VAR_14, VAR_11->data));
  } else if (VAR_10 == 0x1b) {
   VAR_11->status += 2;
  } else if ((VAR_10 >= 0 && VAR_10 < 0x21) || VAR_10 == 0x7f) {
   FUNC_0((*VAR_11->output_function)(VAR_10, VAR_11->data));
  } else {
   VAR_14 = (VAR_12 << 8) | VAR_10;
   VAR_14 &= VAR_0;
   VAR_14 |= VAR_1;
   FUNC_0((*VAR_11->output_function)(VAR_14, VAR_11->data));
  }
  break;






 case 2:
  if (VAR_10 == 0x24) {
   VAR_11->status++;
  } else if (VAR_10 == 0x28) {
   VAR_11->status += 3;
  } else {
   VAR_11->status &= ~0xf;
   FUNC_0((*VAR_11->output_function)(0x1b, VAR_11->data));
   goto retry;
  }
  break;






 case 3:
  if (VAR_10 == 0x40 || VAR_10 == 0x42) {
   VAR_11->status = 0x80;
  } else if (VAR_10 == 0x28) {
   VAR_11->status++;
  } else {
   VAR_11->status &= ~0xf;
   FUNC_0((*VAR_11->output_function)(0x1b, VAR_11->data));
   FUNC_0((*VAR_11->output_function)(0x24, VAR_11->data));
   goto retry;
  }
  break;






 case 4:
  if (VAR_10 == 0x40 || VAR_10 == 0x42) {
   VAR_11->status = 0x80;
  } else {
   VAR_11->status &= ~0xf;
   FUNC_0((*VAR_11->output_function)(0x1b, VAR_11->data));
   FUNC_0((*VAR_11->output_function)(0x24, VAR_11->data));
   FUNC_0((*VAR_11->output_function)(0x28, VAR_11->data));
   goto retry;
  }
  break;






 case 5:
  if (VAR_10 == 0x42) {
   VAR_11->status = 0;
  } else if (VAR_10 == 0x4a) {
   VAR_11->status = 0;
  } else if (VAR_10 == 0x49) {
   VAR_11->status = 0x20;
  } else {
   VAR_11->status &= ~0xf;
   FUNC_0((*VAR_11->output_function)(0x1b, VAR_11->data));
   FUNC_0((*VAR_11->output_function)(0x28, VAR_11->data));
   goto retry;
  }
  break;

 default:
  VAR_11->status = 0;
  break;
 }

 return VAR_10;
}
