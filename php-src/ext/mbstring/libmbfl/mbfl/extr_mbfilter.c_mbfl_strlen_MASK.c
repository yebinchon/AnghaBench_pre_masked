
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {size_t len; unsigned char* val; TYPE_2__* encoding; } ;
typedef TYPE_1__ mbfl_string ;
struct TYPE_10__ {int flag; unsigned char* mblen_table; } ;
typedef TYPE_2__ mbfl_encoding ;
struct TYPE_11__ {int (* filter_function ) (int ,TYPE_3__*) ;} ;
typedef TYPE_3__ mbfl_convert_filter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int *,int ,int ,size_t*) ;
 int VAR_6 ;
 int FUNC_2 (int ,TYPE_3__*) ;

size_t
FUNC_3(mbfl_string *VAR_7)
{
 size_t VAR_8, VAR_9, VAR_10;
 unsigned char *VAR_11;
 const mbfl_encoding *VAR_12 = VAR_7->encoding;

 VAR_8 = 0;
 if (VAR_12->flag & VAR_0) {
  VAR_8 = VAR_7->len;
 } else if (VAR_12->flag & (VAR_1 | VAR_2)) {
  VAR_8 = VAR_7->len/2;
 } else if (VAR_12->flag & (VAR_3 | VAR_4)) {
  VAR_8 = VAR_7->len/4;
 } else if (VAR_12->mblen_table != ((void*)0)) {
  const unsigned char *VAR_13 = VAR_12->mblen_table;
  VAR_9 = 0;
  VAR_11 = VAR_7->val;
  VAR_10 = VAR_7->len;

  if (VAR_11 != ((void*)0)) {
   while (VAR_9 < VAR_10) {
    unsigned VAR_14 = VAR_13[*VAR_11];
    VAR_9 += VAR_14;
    VAR_11 += VAR_14;
    VAR_8++;
   }
  }
 } else {

  mbfl_convert_filter *VAR_15 = FUNC_1(
    VAR_7->encoding,
    &VAR_6,
    VAR_5, 0, &VAR_8);
  if (VAR_15 == ((void*)0)) {
   return (size_t) -1;
  }

  VAR_9 = VAR_7->len;
  VAR_11 = VAR_7->val;
  if (VAR_11 != ((void*)0)) {
   while (VAR_9 > 0) {
    (*VAR_15->filter_function)(*VAR_11++, VAR_15);
    VAR_9--;
   }
  }
  FUNC_0(VAR_15);
 }

 return VAR_8;
}
