
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
typedef int bitmapword ;
struct TYPE_3__ {int nwords; scalar_t__* words; } ;
typedef TYPE_1__ Bitmapset ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char const*,int) ;

uint32
FUNC_2(const Bitmapset *VAR_0)
{
 int VAR_1;

 if (VAR_0 == ((void*)0))
  return 0;
 for (VAR_1 = VAR_0->nwords; --VAR_1 >= 0;)
 {
  if (VAR_0->words[VAR_1] != 0)
   break;
 }
 if (VAR_1 < 0)
  return 0;
 return FUNC_0(FUNC_1((const unsigned char *) VAR_0->words,
           (VAR_1 + 1) * sizeof(bitmapword)));
}
