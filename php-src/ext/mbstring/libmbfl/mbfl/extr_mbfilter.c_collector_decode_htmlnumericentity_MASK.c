
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_1__ ;


struct collector_htmlnumericentity_data {int status; int cache; int digit; int mapsize; int* convmap; TYPE_1__* decoder; } ;
struct TYPE_24__ {int (* filter_function ) (int,TYPE_1__*) ;} ;


 int* VAR_0 ;
 int FUNC_0 (int,TYPE_1__*) ;
 int FUNC_1 (int,TYPE_1__*) ;
 int FUNC_2 (int,TYPE_1__*) ;
 int FUNC_3 (int,TYPE_1__*) ;
 int FUNC_4 (int,TYPE_1__*) ;
 int FUNC_5 (int,TYPE_1__*) ;
 int FUNC_6 (int,TYPE_1__*) ;
 int FUNC_7 (int,TYPE_1__*) ;
 int FUNC_8 (int,TYPE_1__*) ;
 int FUNC_9 (int,TYPE_1__*) ;
 int FUNC_10 (int,TYPE_1__*) ;
 int FUNC_11 (int,TYPE_1__*) ;
 int FUNC_12 (int,TYPE_1__*) ;
 int FUNC_13 (int,TYPE_1__*) ;
 int FUNC_14 (int,TYPE_1__*) ;
 int FUNC_15 (int,TYPE_1__*) ;
 int FUNC_16 (int,TYPE_1__*) ;
 int FUNC_17 (int,TYPE_1__*) ;
 int FUNC_18 (int,TYPE_1__*) ;
 int FUNC_19 (int,TYPE_1__*) ;
 int FUNC_20 (int,TYPE_1__*) ;
 int FUNC_21 (int,TYPE_1__*) ;
 int FUNC_22 (int,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_23(int VAR_1, void *VAR_2)
{
 struct collector_htmlnumericentity_data *VAR_3 = (struct collector_htmlnumericentity_data *)VAR_2;
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, *VAR_10;

 switch (VAR_3->status) {
 case 1:
  if (VAR_1 == 0x23) {
   VAR_3->status = 2;
  } else {
   VAR_3->status = 0;
   (*VAR_3->decoder->filter_function)(0x26, VAR_3->decoder);
   (*VAR_3->decoder->filter_function)(VAR_1, VAR_3->decoder);
  }
  break;
 case 2:
  if (VAR_1 == 0x78) {
   VAR_3->status = 4;
  } else if (VAR_1 >= 0x30 && VAR_1 <= 0x39) {
   VAR_3->cache = VAR_1 - 0x30;
   VAR_3->status = 3;
   VAR_3->digit = 1;
  } else {
   VAR_3->status = 0;
   (*VAR_3->decoder->filter_function)(0x26, VAR_3->decoder);
   (*VAR_3->decoder->filter_function)(0x23, VAR_3->decoder);
   (*VAR_3->decoder->filter_function)(VAR_1, VAR_3->decoder);
  }
  break;
 case 3:
  VAR_6 = 0;
  VAR_4 = 0;
  if (VAR_1 >= 0x30 && VAR_1 <= 0x39) {
   if (VAR_3->digit > 9) {
    VAR_3->status = 0;
    VAR_6 = VAR_3->cache;
    VAR_4 = 1;
   } else {
    VAR_6 = VAR_3->cache*10 + VAR_1 - 0x30;
    VAR_3->cache = VAR_6;
    VAR_3->digit++;
   }
  } else {
   VAR_3->status = 0;
   VAR_6 = VAR_3->cache;
   VAR_4 = 1;
   VAR_5 = 0;
   VAR_9 = VAR_3->mapsize;
   while (VAR_5 < VAR_9) {
    VAR_10 = &(VAR_3->convmap[VAR_5*4]);
    VAR_8 = VAR_6 - VAR_10[2];
    if (VAR_8 >= VAR_10[0] && VAR_8 <= VAR_10[1]) {
     VAR_4 = 0;
     (*VAR_3->decoder->filter_function)(VAR_8, VAR_3->decoder);
     if (VAR_1 != 0x3b) {
      (*VAR_3->decoder->filter_function)(VAR_1, VAR_3->decoder);
     }
     break;
    }
    VAR_5++;
   }
  }
  if (VAR_4) {
   (*VAR_3->decoder->filter_function)(0x26, VAR_3->decoder);
   (*VAR_3->decoder->filter_function)(0x23, VAR_3->decoder);
   VAR_7 = 1;
   VAR_5 = VAR_3->digit;
   while (VAR_5 > 0) {
    VAR_7 *= 10;
    VAR_5--;
   }
   VAR_6 %= VAR_7;
   VAR_7 /= 10;
   while (VAR_7 > 0) {
    VAR_8 = VAR_6/VAR_7;
    VAR_6 %= VAR_7;
    VAR_7 /= 10;
    (*VAR_3->decoder->filter_function)(VAR_0[VAR_8], VAR_3->decoder);
   }
   (*VAR_3->decoder->filter_function)(VAR_1, VAR_3->decoder);
  }
  break;
 case 4:
  if (VAR_1 >= 0x30 && VAR_1 <= 0x39) {
   VAR_3->cache = VAR_1 - 0x30;
   VAR_3->status = 5;
   VAR_3->digit = 1;
  } else if (VAR_1 >= 0x41 && VAR_1 <= 0x46) {
   VAR_3->cache = VAR_1 - 0x41 + 10;
   VAR_3->status = 5;
   VAR_3->digit = 1;
  } else if (VAR_1 >= 0x61 && VAR_1 <= 0x66) {
   VAR_3->cache = VAR_1 - 0x61 + 10;
   VAR_3->status = 5;
   VAR_3->digit = 1;
  } else {
   VAR_3->status = 0;
   (*VAR_3->decoder->filter_function)(0x26, VAR_3->decoder);
   (*VAR_3->decoder->filter_function)(0x23, VAR_3->decoder);
   (*VAR_3->decoder->filter_function)(0x78, VAR_3->decoder);
   (*VAR_3->decoder->filter_function)(VAR_1, VAR_3->decoder);
  }
  break;
 case 5:
  VAR_6 = 0;
  VAR_4 = 0;
  if ((VAR_1 >= 0x30 && VAR_1 <= 0x39) ||
   (VAR_1 >= 0x41 && VAR_1 <= 0x46) ||
   (VAR_1 >= 0x61 && VAR_1 <= 0x66)) {
   if (VAR_3->digit > 9) {
    VAR_3->status = 0;
    VAR_6 = VAR_3->cache;
    VAR_4 = 1;
   } else {
    if (VAR_1 >= 0x30 && VAR_1 <= 0x39) {
     VAR_6 = VAR_3->cache*16 + (VAR_1 - 0x30);
    } else if (VAR_1 >= 0x41 && VAR_1 <= 0x46) {
     VAR_6 = VAR_3->cache*16 + (VAR_1 - 0x41 + 10);
    } else {
     VAR_6 = VAR_3->cache*16 + (VAR_1 - 0x61 + 10);
    }
    VAR_3->cache = VAR_6;
    VAR_3->digit++;
   }
  } else {
   VAR_3->status = 0;
   VAR_6 = VAR_3->cache;
   VAR_4 = 1;
   VAR_5 = 0;
   VAR_9 = VAR_3->mapsize;
   while (VAR_5 < VAR_9) {
    VAR_10 = &(VAR_3->convmap[VAR_5*4]);
    VAR_8 = VAR_6 - VAR_10[2];
    if (VAR_8 >= VAR_10[0] && VAR_8 <= VAR_10[1]) {
     VAR_4 = 0;
     (*VAR_3->decoder->filter_function)(VAR_8, VAR_3->decoder);
     if (VAR_1 != 0x3b) {
      (*VAR_3->decoder->filter_function)(VAR_1, VAR_3->decoder);
     }
     break;
    }
    VAR_5++;
   }
  }
  if (VAR_4) {
   (*VAR_3->decoder->filter_function)(0x26, VAR_3->decoder);
   (*VAR_3->decoder->filter_function)(0x23, VAR_3->decoder);
   (*VAR_3->decoder->filter_function)(0x78, VAR_3->decoder);
   VAR_7 = 1;
   VAR_5 = VAR_3->digit;
   while (VAR_5 > 0) {
    VAR_7 *= 16;
    VAR_5--;
   }
   VAR_6 %= VAR_7;
   VAR_7 /= 16;
   while (VAR_7 > 0) {
    VAR_8 = VAR_6/VAR_7;
    VAR_6 %= VAR_7;
    VAR_7 /= 16;
    (*VAR_3->decoder->filter_function)(VAR_0[VAR_8], VAR_3->decoder);
   }
   (*VAR_3->decoder->filter_function)(VAR_1, VAR_3->decoder);
  }
  break;
 default:
  if (VAR_1 == 0x26) {
   VAR_3->status = 1;
  } else {
   (*VAR_3->decoder->filter_function)(VAR_1, VAR_3->decoder);
  }
  break;
 }

 return VAR_1;
}
