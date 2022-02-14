
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rose_facilities_struct {unsigned char rand; int source_ndigis; int dest_ndigis; int * source_digis; int * dest_digis; int fail_addr; int fail_call; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,unsigned char*,unsigned char) ;

__attribute__((used)) static int FUNC_1(unsigned char *VAR_10, struct rose_facilities_struct *VAR_11, int VAR_12)
{
 unsigned char *VAR_13;
 unsigned char VAR_14, VAR_15, VAR_16 = 0;
 int VAR_17 = 0;

 do {
  switch (*VAR_10 & 0xC0) {
  case 0x00:
   if (VAR_12 < 2)
    return -1;
   VAR_10 += 2;
   VAR_16 += 2;
   VAR_12 -= 2;
   break;

  case 0x40:
   if (VAR_12 < 3)
    return -1;
   if (*VAR_10 == VAR_6)
    VAR_11->rand = ((VAR_10[1] << 8) & 0xFF00) + ((VAR_10[2] << 0) & 0x00FF);
   VAR_10 += 3;
   VAR_16 += 3;
   VAR_12 -= 3;
   break;

  case 0x80:
   if (VAR_12 < 4)
    return -1;
   VAR_10 += 4;
   VAR_16 += 4;
   VAR_12 -= 4;
   break;

  case 0xC0:
   if (VAR_12 < 2)
    return -1;
   VAR_14 = VAR_10[1];
   if (VAR_12 < 2 + VAR_14)
    return -1;
   if (*VAR_10 == VAR_2) {
    if (!VAR_17) {
     if (VAR_14 < VAR_0)
      return -1;
     FUNC_0(&VAR_11->source_digis[0], VAR_10 + 2, VAR_0);
     VAR_11->source_ndigis = 1;
    }
   }
   else if (*VAR_10 == VAR_7) {
    if (!VAR_17) {
     if (VAR_14 < VAR_0)
      return -1;
     FUNC_0(&VAR_11->dest_digis[0], VAR_10 + 2, VAR_0);
     VAR_11->dest_ndigis = 1;
    }
   }
   else if (*VAR_10 == VAR_5) {
    if (VAR_14 < VAR_0)
     return -1;
    FUNC_0(&VAR_11->fail_call, VAR_10 + 2, VAR_0);
   }
   else if (*VAR_10 == VAR_4) {
    if (VAR_14 < 1 + VAR_8)
     return -1;
    FUNC_0(&VAR_11->fail_addr, VAR_10 + 3, VAR_8);
   }
   else if (*VAR_10 == VAR_3) {
    if (VAR_14 % VAR_0)
     return -1;
    VAR_17 = 1;
    VAR_11->source_ndigis = 0;
    VAR_11->dest_ndigis = 0;
    for (VAR_13 = VAR_10 + 2, VAR_15 = 0 ; VAR_15 < VAR_14 ; VAR_13 += VAR_0, VAR_15 += VAR_0) {
     if (VAR_13[6] & VAR_1) {
      if (VAR_11->dest_ndigis >= VAR_9)
       return -1;
      FUNC_0(&VAR_11->dest_digis[VAR_11->dest_ndigis++], VAR_13, VAR_0);
     } else {
      if (VAR_11->source_ndigis >= VAR_9)
       return -1;
      FUNC_0(&VAR_11->source_digis[VAR_11->source_ndigis++], VAR_13, VAR_0);
     }
    }
   }
   VAR_10 += VAR_14 + 2;
   VAR_16 += VAR_14 + 2;
   VAR_12 -= VAR_14 + 2;
   break;
  }
 } while (*VAR_10 != 0x00 && VAR_12 > 0);

 return VAR_16;
}
