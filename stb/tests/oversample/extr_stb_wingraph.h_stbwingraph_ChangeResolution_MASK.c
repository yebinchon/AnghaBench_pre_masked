
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int dmBitsPerPel; unsigned int dmPelsWidth; unsigned int dmPelsHeight; int dmFields; } ;
typedef TYPE_1__ DEVMODE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int,TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int *,char*,...) ;
 int FUNC_3 () ;
 int VAR_7 ;

int FUNC_4(unsigned int VAR_8, unsigned int VAR_9, unsigned int VAR_10, int VAR_11)
{
   DEVMODE VAR_12;
   int VAR_13;

   int VAR_14, VAR_15=0;
   for (VAR_14=0; ; ++VAR_14) {
      int VAR_16 = FUNC_1(((void*)0), VAR_14, &VAR_12);
      if (!VAR_16) break;
      if (VAR_12.dmBitsPerPel == VAR_10 && VAR_12.dmPelsWidth == VAR_8 && VAR_12.dmPelsHeight == VAR_9) {
         ++VAR_15;
         VAR_16 = FUNC_0(&VAR_12, VAR_0);
         if (VAR_16 == 128) {
            FUNC_3();
            return VAR_6;
         }
         break;
      }
   }

   if (!VAR_15) {
      if (VAR_11)
         FUNC_2(VAR_7, VAR_5, ((void*)0), "The resolution %d x %d x %d-bits is not supported.", VAR_8, VAR_9, VAR_10);
      return VAR_4;
   }




   VAR_12.dmBitsPerPel = VAR_10;
   VAR_12.dmPelsWidth = VAR_8;
   VAR_12.dmPelsHeight = VAR_9;
   VAR_12.dmFields = VAR_1 | VAR_3 | VAR_2;

   VAR_13 = FUNC_0(&VAR_12, VAR_0);

   switch (VAR_13) {
      case 128:
         FUNC_3();
         return VAR_6;

      case 129:
         if (VAR_11)
            FUNC_2(VAR_7, VAR_5, ((void*)0), "Please set your desktop to %d-bit color and then try again.");
         return VAR_4;

      case 130:
         if (VAR_11)
            FUNC_2(VAR_7, VAR_5, ((void*)0), "The hardware failed to change modes.");
         return VAR_4;

      case 131:
         if (VAR_11)
            FUNC_2(VAR_7, VAR_5, ((void*)0), "The resolution %d x %d x %d-bits is not supported.", VAR_8, VAR_9, VAR_10);
         return VAR_4;

      default:
         if (VAR_11)
            FUNC_2(VAR_7, VAR_5, ((void*)0), "An unknown error prevented a change to a %d x %d x %d-bit display.", VAR_8, VAR_9, VAR_10);
         return VAR_4;
   }
}
