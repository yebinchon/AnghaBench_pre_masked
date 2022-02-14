
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long red_mask; unsigned long green_mask; unsigned long blue_mask; int depth; } ;
struct TYPE_4__ {int bitsperpixel; size_t mode; int convert_func; TYPE_1__ visual; int display; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 size_t VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 size_t VAR_13 ;
 int FUNC_1 (unsigned long) ;
 TYPE_2__ VAR_14 ;
 scalar_t__ FUNC_2 () ;
 char** VAR_15 ;
 int FUNC_3 (char*,...) ;
 int * VAR_16 ;

__attribute__((used)) static void
FUNC_4(void)
{
 int VAR_17;
 int VAR_18;
 unsigned long VAR_19, VAR_20, VAR_21;
 unsigned long VAR_22, VAR_23, VAR_24;

 VAR_17 = FUNC_0(VAR_14.display);
 if (FUNC_2())
  VAR_18 = VAR_17 != VAR_6;
 else
  VAR_18 = VAR_17 != VAR_5;

 VAR_19 = VAR_14.visual.red_mask;
 VAR_20 = VAR_14.visual.green_mask;
 VAR_21 = VAR_14.visual.blue_mask;

 VAR_22 = FUNC_1(VAR_19) - 1;
 VAR_23 = FUNC_1(VAR_20) - 1;
 VAR_24 = FUNC_1(VAR_21) - 1;
 VAR_14.mode = VAR_13;
 if (VAR_14.bitsperpixel == 8) {

  VAR_14.mode = VAR_2;
 }
 else if (VAR_14.bitsperpixel == 16) {
  if (VAR_19 == 0xF800 && VAR_20 == 0x07E0 && VAR_21 == 0x001F)
   VAR_14.mode = !VAR_18 ? VAR_9 : VAR_10;
  if (VAR_19 == 0x7C00 && VAR_20 == 0x03E0 && VAR_21 == 0x001F)
   VAR_14.mode = !VAR_18 ? VAR_7 : VAR_8;
 }
 else if (VAR_14.bitsperpixel == 24) {
  if (VAR_22 == 0 && VAR_23 == 8 && VAR_24 == 16)
   VAR_14.mode = VAR_17 == VAR_6 ? VAR_11 : VAR_3;
  if (VAR_22 == 16 && VAR_23 == 8 && VAR_24 == 0)
   VAR_14.mode = VAR_17 == VAR_6 ? VAR_3 : VAR_11;
 }
 else if (VAR_14.bitsperpixel == 32) {
  if (VAR_22 == 0 && VAR_23 == 8 && VAR_24 == 16)
   VAR_14.mode = VAR_17 == VAR_6 ? VAR_0 : VAR_12;
  if (VAR_22 == 8 && VAR_23 == 16 && VAR_24 == 24)
   VAR_14.mode = VAR_17 == VAR_6 ? VAR_4 : VAR_1;
  if (VAR_22 == 16 && VAR_23 == 8 && VAR_24 == 0)
   VAR_14.mode = VAR_17 == VAR_6 ? VAR_1 : VAR_4;
  if (VAR_22 == 24 && VAR_23 == 16 && VAR_24 == 8)
   VAR_14.mode = VAR_17 == VAR_6 ? VAR_12 : VAR_0;
 }






 VAR_14.convert_func = VAR_16[VAR_14.mode];
}
