
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int height; int width; int key; int my; int mx; } ;
typedef TYPE_1__ stbwingraph_event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,int,int ) ;
 int* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (int *,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

int FUNC_5(void *VAR_22, stbwingraph_event *VAR_23)
{
   switch (VAR_23->type) {
      case 138:
         break;

      case 139:
         switch(VAR_23->key) {
            case 27:
               FUNC_4(((void*)0),1);
               return VAR_2;
               break;
            case 'o': case 'O':
               VAR_8 = (VAR_8+1) % 3 + (VAR_8/3)*3;
               break;
            case 's': case 'S':
               VAR_8 = (VAR_8+3) % 6;
               break;
            case 't': case 'T':
               VAR_21 = !VAR_21;
               VAR_20 = 0;
               break;
            case 'r': case 'R':
               VAR_15 = !VAR_15;
               VAR_14 = 0;
               break;
            case 'p': case 'P':
               VAR_10 = !VAR_10;
               break;
            case 'g': case 'G':
               VAR_17 = !VAR_17;
               if (VAR_17)
                  FUNC_2(VAR_0);
               else
                  FUNC_1(VAR_0);
               break;
            case 'v': case 'V':
               VAR_16 = !VAR_16;
               break;
            case 'b': case 'B':
               VAR_7 = !VAR_7;
               break;
         }
         break;

      case 132:
         VAR_12 = VAR_23->mx;
         VAR_13 = VAR_23->my;
         break;
      case 136:
         if (VAR_23->key == VAR_5) VAR_11[0] = 1;
         if (VAR_23->key == VAR_4) VAR_11[1] = 1;
         if (VAR_23->key == VAR_6) VAR_11[2] = 1;
         if (VAR_23->key == VAR_3) VAR_11[3] = 1;
         break;
      case 135:
         if (VAR_23->key == VAR_5) VAR_11[0] = 0;
         if (VAR_23->key == VAR_4) VAR_11[1] = 0;
         if (VAR_23->key == VAR_6) VAR_11[2] = 0;
         if (VAR_23->key == VAR_3) VAR_11[3] = 0;
         break;

      case 128:
         VAR_18 = VAR_23->width;
         VAR_19 = VAR_23->height;
         FUNC_3(0,1,0);
         break;

      case 137:
         if (VAR_9)
            FUNC_3(0,1,0);
         break;

      default:
         return VAR_1;
   }
   return 0;
}
