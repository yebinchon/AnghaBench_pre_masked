
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char flags; char bgindex; char ratio; int transparent; int pal; void* h; void* w; } ;
typedef TYPE_1__ stbi_gif ;
typedef char stbi__uint8 ;
typedef int stbi ;


 int FUNC_0 (char*,char*) ;
 char* VAR_0 ;
 void* FUNC_1 (int *) ;
 char FUNC_2 (int *) ;
 char FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int,int) ;

__attribute__((used)) static int FUNC_5(stbi *VAR_1, stbi_gif *VAR_2, int *VAR_3, int VAR_4)
{
   stbi__uint8 VAR_5;
   if (FUNC_2(VAR_1) != 'G' || FUNC_2(VAR_1) != 'I' || FUNC_2(VAR_1) != 'F' || FUNC_2(VAR_1) != '8')
      return FUNC_0("not GIF", "Corrupt GIF");

   VAR_5 = FUNC_3(VAR_1);
   if (VAR_5 != '7' && VAR_5 != '9') return FUNC_0("not GIF", "Corrupt GIF");
   if (FUNC_2(VAR_1) != 'a') return FUNC_0("not GIF", "Corrupt GIF");

   VAR_0 = "";
   VAR_2->w = FUNC_1(VAR_1);
   VAR_2->h = FUNC_1(VAR_1);
   VAR_2->flags = FUNC_2(VAR_1);
   VAR_2->bgindex = FUNC_2(VAR_1);
   VAR_2->ratio = FUNC_2(VAR_1);
   VAR_2->transparent = -1;

   if (VAR_3 != 0) *VAR_3 = 4;

   if (VAR_4) return 1;

   if (VAR_2->flags & 0x80)
      FUNC_4(VAR_1,VAR_2->pal, 2 << (VAR_2->flags & 7), -1);

   return 1;
}
