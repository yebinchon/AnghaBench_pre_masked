
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bytes_per_line; scalar_t__ data; } ;
typedef TYPE_1__ XImage ;
struct TYPE_7__ {int display; scalar_t__ useshm; int (* convert_func ) (unsigned char*,int,unsigned char*,int ,int,int) ;} ;
typedef int GC ;
typedef int Drawable ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,TYPE_1__*,int ,int ,int,int,int,int) ;
 int FUNC_1 (int ,int ,int ,TYPE_1__*,int ,int ,int,int,int,int,int ) ;
 int FUNC_2 (int,scalar_t__) ;
 TYPE_3__ VAR_3 ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (unsigned char*,int,unsigned char*,int ,int,int) ;

void
FUNC_5(Drawable VAR_4, GC VAR_5,
 int VAR_6, int VAR_7,
 unsigned char *VAR_8,
 int VAR_9, int VAR_10,
 int VAR_11, int VAR_12,
 int VAR_13)
{
 XImage *VAR_14;
 int VAR_15, VAR_16;
 int VAR_17, VAR_18;
 unsigned char *VAR_19;

 for (VAR_16 = 0; VAR_16 < VAR_12; VAR_16 += VAR_1)
 {
  VAR_18 = FUNC_2(VAR_12 - VAR_16, VAR_1);
  for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15 += VAR_2)
  {
   VAR_17 = FUNC_2(VAR_11 - VAR_15, VAR_2);

   VAR_14 = FUNC_3();

   VAR_19 = VAR_8 +
   (VAR_16 + VAR_10) * VAR_13 +
   (VAR_15 + VAR_9) * 4;

   VAR_3.convert_func(VAR_19, VAR_13,
    (unsigned char *) VAR_14->data,
    VAR_14->bytes_per_line, VAR_17, VAR_18);

   if (VAR_3.useshm)
   {
    FUNC_1(VAR_3.display, VAR_4, VAR_5, VAR_14,
     0, 0, VAR_6 + VAR_15, VAR_7 + VAR_16,
     VAR_17, VAR_18, VAR_0);
   }
   else
   {
    FUNC_0(VAR_3.display, VAR_4, VAR_5, VAR_14,
     0, 0,
     VAR_6 + VAR_15,
     VAR_7 + VAR_16,
     VAR_17, VAR_18);
   }
  }
 }
}
