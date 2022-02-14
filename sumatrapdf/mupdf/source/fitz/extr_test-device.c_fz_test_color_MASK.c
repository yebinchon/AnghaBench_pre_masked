
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* is_color; int resolved; int * passthrough; int threshold; } ;
typedef TYPE_1__ fz_test_device ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,float const*,int *,float*,int *,int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*) ;
 scalar_t__ FUNC_4 (int ,float const,float const,float const) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_2, fz_test_device *VAR_3, fz_colorspace *VAR_4, const float *VAR_5, fz_color_params VAR_6)
{
 if (!*VAR_3->is_color && VAR_4 && FUNC_0(VAR_2, VAR_4) != VAR_0)
 {
  if (VAR_4 == FUNC_2(VAR_2))
  {
   if (FUNC_4(VAR_3->threshold, VAR_5[0], VAR_5[1], VAR_5[2]))
   {
    *VAR_3->is_color = 2;
    VAR_3->resolved = 1;
    if (VAR_3->passthrough == ((void*)0))
     FUNC_3(VAR_2, VAR_1, "Page found as color; stopping interpretation");
   }
  }
  else
  {
   float VAR_7[3];
   FUNC_1(VAR_2, VAR_4, VAR_5, FUNC_2(VAR_2), VAR_7, ((void*)0), VAR_6);
   if (FUNC_4(VAR_3->threshold, VAR_7[0], VAR_7[1], VAR_7[2]))
   {
    *VAR_3->is_color = 2;
    VAR_3->resolved = 1;
    if (VAR_3->passthrough == ((void*)0))
    {
     FUNC_3(VAR_2, VAR_1, "Page found as color; stopping interpretation");
    }
   }
  }
 }
}
