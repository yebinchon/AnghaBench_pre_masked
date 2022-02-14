
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct collector_substr_data {size_t start; size_t stop; scalar_t__ output; TYPE_3__* next_filter; } ;
struct TYPE_18__ {size_t len; unsigned char* val; TYPE_2__* encoding; int no_language; } ;
typedef TYPE_1__ mbfl_string ;
typedef struct collector_substr_data mbfl_memory_device ;
struct TYPE_19__ {int flag; unsigned char* mblen_table; } ;
typedef TYPE_2__ mbfl_encoding ;
struct TYPE_20__ {scalar_t__ (* filter_function ) (int ,TYPE_3__*) ;} ;
typedef TYPE_3__ mbfl_convert_filter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,TYPE_2__*,int ,int ,struct collector_substr_data*) ;
 TYPE_2__ VAR_7 ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (struct collector_substr_data*,size_t,int ) ;
 int VAR_8 ;
 TYPE_1__* FUNC_5 (struct collector_substr_data*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 size_t FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (unsigned char*,unsigned char*,size_t) ;
 scalar_t__ FUNC_9 (int ,TYPE_3__*) ;

mbfl_string *
FUNC_10(
    mbfl_string *VAR_9,
    mbfl_string *VAR_10,
    size_t VAR_11,
    size_t VAR_12)
{
 const mbfl_encoding *VAR_13 = VAR_9->encoding;
 size_t VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 unsigned VAR_19;
 unsigned char *VAR_20, *VAR_21;

 FUNC_6(VAR_10);
 VAR_10->no_language = VAR_9->no_language;
 VAR_10->encoding = VAR_9->encoding;

 if ((VAR_13->flag & (VAR_0 | VAR_1 | VAR_2 | VAR_3 | VAR_4)) ||
    VAR_13->mblen_table != ((void*)0)) {
  VAR_16 = VAR_9->len;
  if (VAR_13->flag & VAR_0) {
   VAR_17 = VAR_11;
  } else if (VAR_13->flag & (VAR_1 | VAR_2)) {
   VAR_17 = VAR_11*2;
  } else if (VAR_13->flag & (VAR_3 | VAR_4)) {
   VAR_17 = VAR_11*4;
  } else {
   const unsigned char *VAR_22 = VAR_13->mblen_table;
   VAR_17 = 0;
   VAR_14 = 0;
   VAR_15 = 0;
   VAR_20 = VAR_9->val;

   while (VAR_15 <= VAR_11) {
    VAR_17 = VAR_14;
    if (VAR_14 >= VAR_16) {
     break;
    }
    VAR_19 = VAR_22[*VAR_20];
    VAR_14 += VAR_19;
    VAR_20 += VAR_19;
    VAR_15++;
   }
  }

  if (VAR_12 == VAR_5) {
   VAR_18 = VAR_16;
  } else if (VAR_13->flag & VAR_0) {
   VAR_18 = VAR_17 + VAR_12;
  } else if (VAR_13->flag & (VAR_1 | VAR_2)) {
   VAR_18 = VAR_17 + VAR_12*2;
  } else if (VAR_13->flag & (VAR_3 | VAR_4)) {
   VAR_18 = VAR_17 + VAR_12*4;
  } else {
   const unsigned char *VAR_23 = VAR_13->mblen_table;
   VAR_18 = VAR_17;
   VAR_14 = VAR_17;
   VAR_15 = 0;
   VAR_20 = VAR_9->val + VAR_17;

   while (VAR_15 <= VAR_12) {
    VAR_18 = VAR_14;
    if (VAR_14 >= VAR_16) {
     break;
    }
    VAR_19 = VAR_23[*VAR_20];
    VAR_14 += VAR_19;
    VAR_20 += VAR_19;
    VAR_15++;
   }
  }

  if (VAR_17 > VAR_16) {
   VAR_17 = VAR_16;
  }
  if (VAR_18 > VAR_16) {
   VAR_18 = VAR_16;
  }
  if (VAR_17 > VAR_18) {
   VAR_17 = VAR_18;
  }


  VAR_14 = VAR_18 - VAR_17;
  VAR_10->len = 0;
  VAR_10->val = VAR_21 = (unsigned char*)FUNC_3(VAR_14 + 1);
  if (VAR_21 != ((void*)0)) {
   VAR_10->len = VAR_14;
   FUNC_8(VAR_21, VAR_9->val + VAR_17, VAR_14);
   VAR_21[VAR_14] = '\0';
  } else {
   VAR_10 = ((void*)0);
  }
 } else {
  mbfl_memory_device VAR_24;
  struct collector_substr_data VAR_25;
  mbfl_convert_filter *VAR_26;
  mbfl_convert_filter *VAR_27;

  if (VAR_12 == VAR_5) {
   VAR_12 = FUNC_7(VAR_9) - VAR_11;
  }

  FUNC_4(&VAR_24, VAR_12 + 1, 0);
  FUNC_6(VAR_10);
  VAR_10->no_language = VAR_9->no_language;
  VAR_10->encoding = VAR_9->encoding;

  VAR_26 = FUNC_2(
      &VAR_7,
      VAR_9->encoding,
      VAR_8, 0, &VAR_24);

  VAR_27 = FUNC_2(
      VAR_9->encoding,
      &VAR_7,
      VAR_6, 0, &VAR_25);
  if (VAR_26 == ((void*)0) || VAR_27 == ((void*)0)) {
   FUNC_0(VAR_27);
   FUNC_0(VAR_26);
   return ((void*)0);
  }
  VAR_25.next_filter = VAR_26;
  VAR_25.start = VAR_11;
  VAR_25.stop = VAR_11 + VAR_12;
  VAR_25.output = 0;


  VAR_20 = VAR_9->val;
  VAR_14 = VAR_9->len;
  if (VAR_20 != ((void*)0)) {
   while (VAR_14 > 0) {
    if ((*VAR_27->filter_function)(*VAR_20++, VAR_27) < 0) {
     break;
    }
    VAR_14--;
   }
  }

  FUNC_1(VAR_27);
  FUNC_1(VAR_26);
  VAR_10 = FUNC_5(&VAR_24, VAR_10);
  FUNC_0(VAR_27);
  FUNC_0(VAR_26);
 }

 return VAR_10;
}
