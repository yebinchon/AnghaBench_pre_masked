
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* val; size_t len; TYPE_2__* encoding; } ;
typedef TYPE_1__ mbfl_string ;
struct TYPE_5__ {int flag; unsigned char* mblen_table; } ;
typedef TYPE_2__ mbfl_encoding ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

size_t
FUNC_0(mbfl_string *VAR_5)
{
 size_t VAR_6, VAR_7, VAR_8;
 unsigned char *VAR_9;
 const mbfl_encoding *VAR_10 = VAR_5->encoding;

 VAR_6 = 0;
 if (VAR_10->flag & VAR_0) {
  return 0;
 } else if (VAR_10->flag & (VAR_1 | VAR_2)) {
  return VAR_6 % 2;
 } else if (VAR_10->flag & (VAR_3 | VAR_4)) {
  return VAR_6 % 4;
 } else if (VAR_10->mblen_table != ((void*)0)) {
  const unsigned char *VAR_11 = VAR_10->mblen_table;
   VAR_7 = 0;
  VAR_9 = VAR_5->val;
  VAR_8 = VAR_5->len;

  if (VAR_9 != ((void*)0)) {
   while (VAR_7 < VAR_8) {
    unsigned VAR_12 = VAR_11[*VAR_9];
    VAR_7 += VAR_12;
    VAR_9 += VAR_12;
   };
  }
  return VAR_7-VAR_8;
 } else {

  return 0;
 }

}
