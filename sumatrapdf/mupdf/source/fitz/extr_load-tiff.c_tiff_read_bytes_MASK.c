
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tiff {unsigned int ep; unsigned int bp; unsigned int rp; } ;


 int FUNC_0 (struct tiff*) ;

__attribute__((used)) static void
FUNC_1(unsigned char *VAR_0, struct tiff *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 if (VAR_2 > (unsigned)(VAR_1->ep - VAR_1->bp))
  VAR_2 = (unsigned)(VAR_1->ep - VAR_1->bp);
 VAR_1->rp = VAR_1->bp + VAR_2;

 while (VAR_3--)
  *VAR_0++ = FUNC_0(VAR_1);
}
