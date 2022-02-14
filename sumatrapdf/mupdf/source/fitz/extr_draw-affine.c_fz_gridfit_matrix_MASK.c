
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float b; float c; float e; float a; float f; float d; } ;
typedef TYPE_1__ fz_matrix ;


 scalar_t__ VAR_0 ;
 float VAR_1 ;
 scalar_t__ FUNC_0 (float) ;

fz_matrix
FUNC_1(int VAR_2, fz_matrix VAR_3)
{
 if (FUNC_0(VAR_3.b) < VAR_0 && FUNC_0(VAR_3.c) < VAR_0)
 {
  if (VAR_2)
  {
   float VAR_4;

   VAR_4 = (float)(int)(VAR_3.e + 0.5f);
   VAR_3.a += VAR_3.e - VAR_4;
   VAR_3.e = VAR_4;

   VAR_3.a = (float)(int)(VAR_3.a + 0.5f);
  }
  else if (VAR_3.a > 0)
  {
   float VAR_5;

   VAR_5 = (float)(int)(VAR_3.e);
   if (VAR_5 - VAR_3.e > VAR_1)
    VAR_5 -= 1.0f;
   VAR_3.a += VAR_3.e - VAR_5;
   VAR_3.e = VAR_5;

   VAR_5 = (float)(int)(VAR_3.a);
   if (VAR_3.a - VAR_5 > VAR_1)
    VAR_5 += 1.0f;
   VAR_3.a = VAR_5;
  }
  else if (VAR_3.a < 0)
  {
   float VAR_6;

   VAR_6 = (float)(int)(VAR_3.e);
   if (VAR_3.e - VAR_6 > VAR_1)
    VAR_6 += 1.0f;
   VAR_3.a += VAR_3.e - VAR_6;
   VAR_3.e = VAR_6;

   VAR_6 = (float)(int)(VAR_3.a);
   if (VAR_6 - VAR_3.a > VAR_1)
    VAR_6 -= 1.0f;
   VAR_3.a = VAR_6;
  }
  if (VAR_2)
  {
   float VAR_7;

   VAR_7 = (float)(int)(VAR_3.f + 0.5f);
   VAR_3.d += VAR_3.f - VAR_7;
   VAR_3.f = VAR_7;

   VAR_3.d = (float)(int)(VAR_3.d + 0.5f);
  }
  else if (VAR_3.d > 0)
  {
   float VAR_8;

   VAR_8 = (float)(int)(VAR_3.f);
   if (VAR_8 - VAR_3.f > VAR_1)
    VAR_8 -= 1.0f;
   VAR_3.d += VAR_3.f - VAR_8;
   VAR_3.f = VAR_8;

   VAR_8 = (float)(int)(VAR_3.d);
   if (VAR_3.d - VAR_8 > VAR_1)
    VAR_8 += 1.0f;
   VAR_3.d = VAR_8;
  }
  else if (VAR_3.d < 0)
  {
   float VAR_9;

   VAR_9 = (float)(int)(VAR_3.f);
   if (VAR_3.f - VAR_9 > VAR_1)
    VAR_9 += 1.0f;
   VAR_3.d += VAR_3.f - VAR_9;
   VAR_3.f = VAR_9;

   VAR_9 = (float)(int)(VAR_3.d);
   if (VAR_9 - VAR_3.d > VAR_1)
    VAR_9 -= 1.0f;
   VAR_3.d = VAR_9;
  }
 }
 else if (FUNC_0(VAR_3.a) < VAR_0 && FUNC_0(VAR_3.d) < VAR_0)
 {
  if (VAR_2)
  {
   float VAR_10;

   VAR_10 = (float)(int)(VAR_3.e + 0.5f);
   VAR_3.b += VAR_3.e - VAR_10;
   VAR_3.e = VAR_10;

   VAR_3.b = (float)(int)(VAR_3.b + 0.5f);
  }
  else if (VAR_3.b > 0)
  {
   float VAR_11;

   VAR_11 = (float)(int)(VAR_3.f);
   if (VAR_11 - VAR_3.f > VAR_1)
    VAR_11 -= 1.0f;
   VAR_3.b += VAR_3.f - VAR_11;
   VAR_3.f = VAR_11;

   VAR_11 = (float)(int)(VAR_3.b);
   if (VAR_3.b - VAR_11 > VAR_1)
    VAR_11 += 1.0f;
   VAR_3.b = VAR_11;
  }
  else if (VAR_3.b < 0)
  {
   float VAR_12;

   VAR_12 = (float)(int)(VAR_3.f);
   if (VAR_3.f - VAR_12 > VAR_1)
    VAR_12 += 1.0f;
   VAR_3.b += VAR_3.f - VAR_12;
   VAR_3.f = VAR_12;

   VAR_12 = (float)(int)(VAR_3.b);
   if (VAR_12 - VAR_3.b > VAR_1)
    VAR_12 -= 1.0f;
   VAR_3.b = VAR_12;
  }
  if (VAR_2)
  {
   float VAR_13;

   VAR_13 = (float)(int)(VAR_3.f + 0.5f);
   VAR_3.c += VAR_3.f - VAR_13;
   VAR_3.f = VAR_13;

   VAR_3.c = (float)(int)(VAR_3.c + 0.5f);
  }
  else if (VAR_3.c > 0)
  {
   float VAR_14;

   VAR_14 = (float)(int)(VAR_3.e);
   if (VAR_14 - VAR_3.e > VAR_1)
    VAR_14 -= 1.0f;
   VAR_3.c += VAR_3.e - VAR_14;
   VAR_3.e = VAR_14;

   VAR_14 = (float)(int)(VAR_3.c);
   if (VAR_3.c - VAR_14 > VAR_1)
    VAR_14 += 1.0f;
   VAR_3.c = VAR_14;
  }
  else if (VAR_3.c < 0)
  {
   float VAR_15;

   VAR_15 = (float)(int)(VAR_3.e);
   if (VAR_3.e - VAR_15 > VAR_1)
    VAR_15 += 1.0f;
   VAR_3.c += VAR_3.e - VAR_15;
   VAR_3.e = VAR_15;

   VAR_15 = (float)(int)(VAR_3.c);
   if (VAR_15 - VAR_3.c > VAR_1)
    VAR_15 -= 1.0f;
   VAR_3.c = VAR_15;
  }
 }
 return VAR_3;
}
