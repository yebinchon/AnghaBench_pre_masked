
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tiff {unsigned int ep; unsigned int bp; unsigned int rp; } ;






 unsigned int VAR_0 ;
 int FUNC_0 (struct tiff*) ;
 int FUNC_1 (struct tiff*) ;
 void* FUNC_2 (struct tiff*) ;

__attribute__((used)) static void
FUNC_3(unsigned *VAR_1, struct tiff *VAR_2, unsigned VAR_3, unsigned VAR_4, unsigned VAR_5)
{
 unsigned VAR_6;

 if (VAR_4 > (unsigned)(VAR_2->ep - VAR_2->bp))
  VAR_4 = (unsigned)(VAR_2->ep - VAR_2->bp);
 VAR_2->rp = VAR_2->bp + VAR_4;

 while (VAR_5--)
 {
  switch (VAR_3)
  {
  case 129:
   *VAR_1 = FUNC_2(VAR_2);
   VAR_6 = FUNC_2(VAR_2);
   if (VAR_6)
    *VAR_1 = *VAR_1 / VAR_6;
   else
    *VAR_1 = VAR_0;
   VAR_1 ++;
   break;
  case 131: *VAR_1++ = FUNC_1(VAR_2); break;
  case 128: *VAR_1++ = FUNC_0(VAR_2); break;
  case 130: *VAR_1++ = FUNC_2(VAR_2); break;
  default: *VAR_1++ = 0; break;
  }
 }
}
