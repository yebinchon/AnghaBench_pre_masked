
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32 ;
typedef size_t uint16 ;
struct TYPE_3__ {unsigned char b4_1_lower; unsigned char b4_1_upper; unsigned char b4_2_lower; unsigned char b4_2_upper; unsigned char b4_3_lower; unsigned char b4_3_upper; unsigned char b4_4_lower; unsigned char b4_4_upper; size_t* chars32; size_t b4root; size_t* chars16; unsigned char b3_1_lower; unsigned char b3_1_upper; unsigned char b3_2_lower; unsigned char b3_2_upper; unsigned char b3_3_lower; unsigned char b3_3_upper; size_t b3root; unsigned char b2_1_lower; unsigned char b2_1_upper; unsigned char b2_2_lower; unsigned char b2_2_upper; size_t b2root; unsigned char b1_lower; unsigned char b1_upper; unsigned char b1root; } ;
typedef TYPE_1__ pg_mb_radix_tree ;



__attribute__((used)) static inline uint32
FUNC_0(const pg_mb_radix_tree *VAR_0,
     int VAR_1,
     unsigned char VAR_2,
     unsigned char VAR_3,
     unsigned char VAR_4,
     unsigned char VAR_5)
{
 if (VAR_1 == 4)
 {



  if (VAR_2 < VAR_0->b4_1_lower || VAR_2 > VAR_0->b4_1_upper ||
   VAR_3 < VAR_0->b4_2_lower || VAR_3 > VAR_0->b4_2_upper ||
   VAR_4 < VAR_0->b4_3_lower || VAR_4 > VAR_0->b4_3_upper ||
   VAR_5 < VAR_0->b4_4_lower || VAR_5 > VAR_0->b4_4_upper)
   return 0;


  if (VAR_0->chars32)
  {
   uint32 VAR_6 = VAR_0->b4root;

   VAR_6 = VAR_0->chars32[VAR_2 + VAR_6 - VAR_0->b4_1_lower];
   VAR_6 = VAR_0->chars32[VAR_3 + VAR_6 - VAR_0->b4_2_lower];
   VAR_6 = VAR_0->chars32[VAR_4 + VAR_6 - VAR_0->b4_3_lower];
   return VAR_0->chars32[VAR_5 + VAR_6 - VAR_0->b4_4_lower];
  }
  else
  {
   uint16 VAR_7 = VAR_0->b4root;

   VAR_7 = VAR_0->chars16[VAR_2 + VAR_7 - VAR_0->b4_1_lower];
   VAR_7 = VAR_0->chars16[VAR_3 + VAR_7 - VAR_0->b4_2_lower];
   VAR_7 = VAR_0->chars16[VAR_4 + VAR_7 - VAR_0->b4_3_lower];
   return VAR_0->chars16[VAR_5 + VAR_7 - VAR_0->b4_4_lower];
  }
 }
 else if (VAR_1 == 3)
 {



  if (VAR_3 < VAR_0->b3_1_lower || VAR_3 > VAR_0->b3_1_upper ||
   VAR_4 < VAR_0->b3_2_lower || VAR_4 > VAR_0->b3_2_upper ||
   VAR_5 < VAR_0->b3_3_lower || VAR_5 > VAR_0->b3_3_upper)
   return 0;


  if (VAR_0->chars32)
  {
   uint32 VAR_8 = VAR_0->b3root;

   VAR_8 = VAR_0->chars32[VAR_3 + VAR_8 - VAR_0->b3_1_lower];
   VAR_8 = VAR_0->chars32[VAR_4 + VAR_8 - VAR_0->b3_2_lower];
   return VAR_0->chars32[VAR_5 + VAR_8 - VAR_0->b3_3_lower];
  }
  else
  {
   uint16 VAR_9 = VAR_0->b3root;

   VAR_9 = VAR_0->chars16[VAR_3 + VAR_9 - VAR_0->b3_1_lower];
   VAR_9 = VAR_0->chars16[VAR_4 + VAR_9 - VAR_0->b3_2_lower];
   return VAR_0->chars16[VAR_5 + VAR_9 - VAR_0->b3_3_lower];
  }
 }
 else if (VAR_1 == 2)
 {



  if (VAR_4 < VAR_0->b2_1_lower || VAR_4 > VAR_0->b2_1_upper ||
   VAR_5 < VAR_0->b2_2_lower || VAR_5 > VAR_0->b2_2_upper)
   return 0;


  if (VAR_0->chars32)
  {
   uint32 VAR_10 = VAR_0->b2root;

   VAR_10 = VAR_0->chars32[VAR_4 + VAR_10 - VAR_0->b2_1_lower];
   return VAR_0->chars32[VAR_5 + VAR_10 - VAR_0->b2_2_lower];
  }
  else
  {
   uint16 VAR_11 = VAR_0->b2root;

   VAR_11 = VAR_0->chars16[VAR_4 + VAR_11 - VAR_0->b2_1_lower];
   return VAR_0->chars16[VAR_5 + VAR_11 - VAR_0->b2_2_lower];
  }
 }
 else if (VAR_1 == 1)
 {



  if (VAR_5 < VAR_0->b1_lower || VAR_5 > VAR_0->b1_upper)
   return 0;


  if (VAR_0->chars32)
   return VAR_0->chars32[VAR_5 + VAR_0->b1root - VAR_0->b1_lower];
  else
   return VAR_0->chars16[VAR_5 + VAR_0->b1root - VAR_0->b1_lower];
 }
 return 0;
}
