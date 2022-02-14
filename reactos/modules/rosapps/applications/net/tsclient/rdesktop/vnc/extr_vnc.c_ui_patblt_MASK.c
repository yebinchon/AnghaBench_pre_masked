
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vncBuffer ;
typedef int uint8 ;
struct TYPE_3__ {int style; int pattern; } ;
typedef int HGLYPH ;
typedef TYPE_1__ BRUSH ;




 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (int ,int,int,int,int,int *,int ,int ) ;
 int FUNC_4 (int *,int,int) ;
 int * FUNC_5 (int,int,int) ;
 int FUNC_6 (int *,int,int,int) ;
 int FUNC_7 (int ,int,int,int,int,int) ;
 int FUNC_8 (int ,int,int,int,int,int *,int ,int ) ;
 int FUNC_9 (int*,int*,int*,int*) ;

void
FUNC_10(uint8 VAR_1,
              int VAR_2, int VAR_3, int VAR_4, int VAR_5,
               BRUSH * VAR_6, int VAR_7, int VAR_8)
{
 switch (VAR_6->style)
 {
  case 0:
   switch (VAR_1)
   {
    case 128:
     {
      int VAR_9, VAR_10;
      vncBuffer *VAR_11 = FUNC_5(VAR_4, VAR_5, 8);
      for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
       for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
        FUNC_6(VAR_11, VAR_9, VAR_10, VAR_8);
      if (FUNC_9(&VAR_2, &VAR_3, &VAR_4, &VAR_5))
       FUNC_8(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5, VAR_11,
               0, 0);
      break;
     }

    default:
     if (FUNC_9(&VAR_2, &VAR_3, &VAR_4, &VAR_5))
      FUNC_7(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5, VAR_8);
   }
   break;

  case 3:
   {
    int VAR_12, VAR_13;
    vncBuffer *VAR_14;
    VAR_14 = (vncBuffer *) FUNC_0(8, 8, VAR_6->pattern);

    for (VAR_13 = 0; VAR_13 < 8; VAR_13++)
    {
     for (VAR_12 = 0; VAR_12 < 8; VAR_12++)
     {
      FUNC_6(VAR_14, VAR_12, VAR_13,
           FUNC_4(VAR_14, VAR_12,
         VAR_13) ? VAR_8 : VAR_7);
     }
    }

    if (FUNC_9(&VAR_2, &VAR_3, &VAR_4, &VAR_5))
    {
     switch (VAR_1)
     {
      case 129:
       FUNC_3(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5, VAR_14,
         0, 0);
       break;
      case 128:
       FUNC_8(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5, VAR_14,
               0, 0);
       break;
      default:
       FUNC_2("pattern blit (%d,%d) opcode=%d bg=%d fg=%d\n", VAR_2, VAR_3, VAR_1, VAR_7, VAR_8);
       FUNC_3(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5, VAR_14,
         0, 0);
       break;
     }
    }

    FUNC_1((HGLYPH) VAR_14);
    break;

   }
  default:
   FUNC_2("brush %d\n", VAR_6->style);
 }
}
