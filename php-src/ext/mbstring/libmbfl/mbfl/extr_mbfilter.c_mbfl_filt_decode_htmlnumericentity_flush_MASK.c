
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct collector_htmlnumericentity_data {int status; int cache; int digit; TYPE_1__* decoder; } ;
typedef int mbfl_convert_filter ;
struct TYPE_14__ {int (* filter_function ) (int,TYPE_1__*) ;} ;


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

int FUNC_13(mbfl_convert_filter *VAR_1)
{
 struct collector_htmlnumericentity_data *VAR_2 = (struct collector_htmlnumericentity_data *)VAR_1;
 int VAR_3, VAR_4, VAR_5, VAR_6;

 if (VAR_2->status) {
  switch (VAR_2->status) {
  case 1:
   (*VAR_2->decoder->filter_function)(0x26, VAR_2->decoder);
   break;
  case 2:
   (*VAR_2->decoder->filter_function)(0x26, VAR_2->decoder);
   (*VAR_2->decoder->filter_function)(0x23, VAR_2->decoder);
   break;
  case 3:
   (*VAR_2->decoder->filter_function)(0x26, VAR_2->decoder);
   (*VAR_2->decoder->filter_function)(0x23, VAR_2->decoder);

   VAR_4 = VAR_2->cache;
   VAR_5 = 1;
   VAR_3 = VAR_2->digit;
   while (VAR_3 > 0) {
    VAR_5 *= 10;
    VAR_3--;
   }
   VAR_4 %= VAR_5;
   VAR_5 /= 10;
   while (VAR_5 > 0) {
    VAR_6 = VAR_4/VAR_5;
    VAR_4 %= VAR_5;
    VAR_5 /= 10;
    (*VAR_2->decoder->filter_function)(VAR_0[VAR_6], VAR_2->decoder);
   }

   break;
  case 4:
   (*VAR_2->decoder->filter_function)(0x26, VAR_2->decoder);
   (*VAR_2->decoder->filter_function)(0x23, VAR_2->decoder);
   (*VAR_2->decoder->filter_function)(0x78, VAR_2->decoder);
   break;
  case 5:
   (*VAR_2->decoder->filter_function)(0x26, VAR_2->decoder);
   (*VAR_2->decoder->filter_function)(0x23, VAR_2->decoder);
   (*VAR_2->decoder->filter_function)(0x78, VAR_2->decoder);

   VAR_4 = VAR_2->cache;
   VAR_5 = 1;
   VAR_3 = VAR_2->digit;
   while (VAR_3 > 0) {
    VAR_5 *= 16;
    VAR_3--;
   }
   VAR_4 %= VAR_5;
   VAR_5 /= 16;
   while (VAR_5 > 0) {
    VAR_6 = VAR_4/VAR_5;
    VAR_4 %= VAR_5;
    VAR_5 /= 16;
    (*VAR_2->decoder->filter_function)(VAR_0[VAR_6], VAR_2->decoder);
   }
   break;
  default:
   break;
  }
 }

 VAR_2->status = 0;
 VAR_2->cache = 0;
 VAR_2->digit = 0;

 return 0;
}
