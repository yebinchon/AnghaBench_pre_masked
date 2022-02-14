
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct shadearg {int color_params; TYPE_2__* shade; TYPE_1__* dev; } ;
struct TYPE_7__ {int resolved; int options; int* is_color; int * passthrough; } ;
typedef TYPE_1__ fz_test_device ;
struct TYPE_8__ {int * function; int colorspace; scalar_t__ use_function; } ;
typedef TYPE_2__ fz_shade ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_color_params ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,TYPE_2__*,int ,float,int ) ;
 int FUNC_3 (int *,TYPE_2__*,int ,int ,int ,int *,struct shadearg*) ;
 int FUNC_4 (int *,TYPE_1__*,int ,int ,int ) ;
 int FUNC_5 (int *,int ,char*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_4, fz_device *VAR_5, fz_shade *VAR_6, fz_matrix VAR_7, float VAR_8, fz_color_params VAR_9)
{
 fz_test_device *VAR_10 = (fz_test_device*)VAR_5;

 if (VAR_10->resolved == 0)
 {
  if ((VAR_10->options & VAR_2) == 0)
  {
   if (FUNC_0(VAR_4, VAR_6->colorspace) != VAR_0)
   {

    if (*VAR_10->is_color == 0)
     *VAR_10->is_color = 1;
    VAR_10->resolved = 1;
    if (VAR_10->passthrough == ((void*)0))
     FUNC_5(VAR_4, VAR_1, "Page found as color; stopping interpretation");
   }
  }
  else
  {
   if (VAR_6->use_function)
   {
    int VAR_11;
    for (VAR_11 = 0; VAR_11 < 256; VAR_11++)
     FUNC_4(VAR_4, VAR_10, VAR_6->colorspace, VAR_6->function[VAR_11], VAR_9);
   }
   else
   {
    struct shadearg VAR_12;
    VAR_12.dev = VAR_10;
    VAR_12.shade = VAR_6;
    VAR_12.color_params = VAR_9;
    FUNC_3(VAR_4, VAR_6, VAR_7, FUNC_1(VAR_4, VAR_5), VAR_3, ((void*)0), &VAR_12);
   }
  }
 }
 if (VAR_10->passthrough)
  FUNC_2(VAR_4, VAR_10->passthrough, VAR_6, VAR_7, VAR_8, VAR_9);
}
