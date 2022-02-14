
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ExtInstruction {int major; unsigned char minor; int flags; char const* name; struct ExtInstruction* next; } ;
struct TYPE_2__ {struct ExtInstruction** instructions; } ;


 int VAR_0 ;
 size_t FUNC_0 (int,unsigned char) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;

const char *
FUNC_1 (int VAR_4, int VAR_5, int *VAR_6)
{
  unsigned char VAR_7;
  struct ExtInstruction *VAR_8;

  if (*VAR_6 != VAR_0)
    {

      if (0x08 <= VAR_4 && VAR_4 <= 0x0b)
 {

   unsigned char VAR_9, VAR_10, VAR_11;


   VAR_9 = (VAR_5 & 0x0700) >> 8;
   VAR_10 = (VAR_5 & 0x00e0) >> 5;
   VAR_11 = (VAR_5 & 0x001f);

   if (VAR_11) {
    VAR_7 = VAR_11;
   } else {
    VAR_7 = (VAR_10 == 0x07) ? VAR_9 : VAR_10;
   }
 }

      else
 {

   unsigned char VAR_12, VAR_13, VAR_14;



   VAR_12 = (VAR_5 & 0x003f0000) >> 16;
   VAR_13 = (VAR_5 & 0x0000003f);
   VAR_14 = ((VAR_5 & 0x07000000) >> 24) | ((VAR_5 & 0x00007000) >> 9);

   if (VAR_12 != 0x2f)
     {

       switch (VAR_2)
  {
  case 3:
    if (VAR_1)
      {
        VAR_7 = VAR_12;
        break;
      }
  case 0:
  case 2:
    VAR_7 = (VAR_12 >> 1) | ((VAR_12 & 0x1) << 5);
    break;
  case 1:
    VAR_7 = (VAR_12 >> 1) | (VAR_12 & 0x1) | ((VAR_12 & 0x2) << 4);
  }



     }
   else
     {
      if (VAR_13 != 0x3f) {
       VAR_7 = VAR_13;
      } else {
       VAR_7 = VAR_14;
      }
     }
 }
  } else {
   VAR_7 = VAR_5;
  }

  VAR_8 = VAR_3.instructions[FUNC_0 (VAR_4, VAR_7)];
  while (VAR_8)
    {
      if ((VAR_8->major == VAR_4) && (VAR_8->minor == VAR_7))
 {
   *VAR_6 = VAR_8->flags;
   return VAR_8->name;
 }
      VAR_8 = VAR_8->next;
    }

  return ((void*)0);
}
