
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t ssize_t ;
struct TYPE_14__ {unsigned char* val; int len; TYPE_1__* encoding; } ;
typedef TYPE_2__ const mbfl_string ;
struct TYPE_15__ {unsigned char* mblen_table; } ;
typedef TYPE_3__ mbfl_encoding ;
typedef int jtbl ;
struct TYPE_13__ {scalar_t__ no_encoding; } ;


 TYPE_2__ const* FUNC_0 (TYPE_2__ const*,TYPE_2__ const*,TYPE_3__*) ;
 TYPE_3__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__ const*) ;
 int FUNC_2 (TYPE_2__ const*) ;

size_t
FUNC_3(
    mbfl_string *VAR_2,
    mbfl_string *VAR_3,
    ssize_t VAR_4,
    int VAR_5)
{
 size_t VAR_6;
 mbfl_string VAR_7, VAR_8;
 const mbfl_string *VAR_9, *VAR_10 = ((void*)0);
 const unsigned char *VAR_11;

 if (VAR_2 == ((void*)0) || VAR_2->val == ((void*)0) || VAR_3 == ((void*)0) || VAR_3->val == ((void*)0)) {
  return (size_t) -8;
 }

 {
  const mbfl_encoding *VAR_12 = &VAR_0;
  if (VAR_12->mblen_table == ((void*)0)) {
   return (size_t) -8;
  }
  VAR_11 = VAR_12->mblen_table;
 }

 if (VAR_2->encoding->no_encoding != VAR_1) {
  FUNC_2(&VAR_7);
  VAR_9 = FUNC_0(VAR_2, &VAR_7, &VAR_0);
  if (VAR_9 == ((void*)0)) {
   VAR_6 = (size_t) -4;
   goto out;
  }
 } else {
  VAR_9 = VAR_2;
 }

 if (VAR_3->encoding->no_encoding != VAR_1) {
  FUNC_2(&VAR_8);
  VAR_10 = FUNC_0(VAR_3, &VAR_8, &VAR_0);
  if (VAR_10 == ((void*)0)) {
   VAR_6 = (size_t) -4;
   goto out;
  }
 } else {
  VAR_10 = VAR_3;
 }

 if (VAR_10->len < 1) {
  VAR_6 = (size_t) -8;
  goto out;
 }

 VAR_6 = (size_t) -1;
 if (VAR_9->len < VAR_10->len) {
  goto out;
 }

 if (!VAR_5) {
  size_t VAR_13[1 << (sizeof(unsigned char) * 8)];
  size_t VAR_14 = VAR_10->len;
  size_t VAR_15;
  const unsigned char *VAR_16, *VAR_17, *VAR_18;
  const unsigned char *VAR_19 = VAR_9->val,
                      *VAR_20 = VAR_10->val;
  for (VAR_15 = 0; VAR_15 < sizeof(VAR_13) / sizeof(*VAR_13); ++VAR_15) {
   VAR_13[VAR_15] = VAR_14 + 1;
  }
  for (VAR_15 = 0; VAR_15 < VAR_14 - 1; ++VAR_15) {
   VAR_13[VAR_20[VAR_15]] = VAR_14 - VAR_15;
  }
  VAR_18 = VAR_19 + VAR_9->len;
  VAR_16 = VAR_19;
  while (VAR_4-- > 0) {
   if (VAR_16 >= VAR_18) {
    VAR_6 = (size_t) -16;
    goto out;
   }
   VAR_16 += VAR_11[*VAR_16];
  }
  VAR_16 += VAR_14;
  if (VAR_16 > VAR_18) {
   goto out;
  }
  while (VAR_16 <= VAR_18) {
   const unsigned char *VAR_21 = VAR_16;
   VAR_17 = VAR_20 + VAR_14;
   for (;;) {
    if (VAR_17 == VAR_20) {
     VAR_6 = 0;
     while (VAR_16 > VAR_19) {
      unsigned char VAR_22 = *--VAR_16;
      if (VAR_22 < 0x80) {
       ++VAR_6;
      } else if ((VAR_22 & 0xc0) != 0x80) {
       ++VAR_6;
      }
     }
     goto out;
    }
    if (*--VAR_17 != *--VAR_16) {
     break;
    }
   }
   VAR_16 += VAR_13[*VAR_16];
   if (VAR_16 <= VAR_21) {
    VAR_16 = VAR_21 + 1;
   }
  }
 } else {
  size_t VAR_23[1 << (sizeof(unsigned char) * 8)];
  size_t VAR_24 = VAR_10->len, VAR_25 = 0;
  size_t VAR_26;
  const unsigned char *VAR_27, *VAR_28, *VAR_29, *VAR_30;
  const unsigned char *VAR_31 = VAR_9->val,
                      *VAR_32 = VAR_10->val;
  for (VAR_26 = 0; VAR_26 < sizeof(VAR_23) / sizeof(*VAR_23); ++VAR_26) {
   VAR_23[VAR_26] = VAR_24;
  }
  for (VAR_26 = VAR_24 - 1; VAR_26 > 0; --VAR_26) {
   unsigned char VAR_33 = VAR_32[VAR_26];
   VAR_23[VAR_33] = VAR_26;
   if (VAR_33 < 0x80) {
    ++VAR_25;
   } else if ((VAR_33 & 0xc0) != 0x80) {
    ++VAR_25;
   }
  }
  {
   unsigned char VAR_34 = VAR_32[0];
   if (VAR_34 < 0x80) {
    ++VAR_25;
   } else if ((VAR_34 & 0xc0) != 0x80) {
    ++VAR_25;
   }
  }
  VAR_28 = VAR_31;
  VAR_27 = VAR_28 + VAR_9->len;
  VAR_30 = VAR_32 + VAR_24;
  if (VAR_4 < 0) {
   if (-VAR_4 > VAR_25) {
    VAR_4 += VAR_25;
    while (VAR_4 < 0) {
     unsigned char VAR_35;
     if (VAR_27 <= VAR_28) {
      VAR_6 = (size_t) -16;
      goto out;
     }
     VAR_35 = *(--VAR_27);
     if (VAR_35 < 0x80) {
      ++VAR_4;
     } else if ((VAR_35 & 0xc0) != 0x80) {
      ++VAR_4;
     }
    }
   }
  } else {
   const unsigned char *VAR_36 = VAR_31 + VAR_9->len;
   while (VAR_4-- > 0) {
    if (VAR_28 >= VAR_36) {
     VAR_6 = (size_t) -16;
     goto out;
    }
    VAR_28 += VAR_11[*VAR_28];
   }
  }
  if (VAR_27 < VAR_28 + VAR_24) {
   goto out;
  }
  VAR_27 -= VAR_24;
  while (VAR_27 >= VAR_28) {
   const unsigned char *VAR_37 = VAR_27;
   VAR_29 = VAR_32;
   for (;;) {
    if (VAR_29 == VAR_30) {
     VAR_6 = 0;
     VAR_27 -= VAR_24;
     while (VAR_27 > VAR_31) {
      unsigned char VAR_38 = *--VAR_27;
      if (VAR_38 < 0x80) {
       ++VAR_6;
      } else if ((VAR_38 & 0xc0) != 0x80) {
       ++VAR_6;
      }
     }
     goto out;
    }
    if (*VAR_29 != *VAR_27) {
     break;
    }
    ++VAR_27, ++VAR_29;
   }
   VAR_27 -= VAR_23[*VAR_27];
   if (VAR_27 >= VAR_37) {
    VAR_27 = VAR_37 - 1;
   }
  }
 }
out:
 if (VAR_9 == &VAR_7) {
  FUNC_1(&VAR_7);
 }
 if (VAR_10 == &VAR_8) {
  FUNC_1(&VAR_8);
 }
 return VAR_6;
}
