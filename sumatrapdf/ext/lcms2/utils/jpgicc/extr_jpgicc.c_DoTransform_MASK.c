
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int cmsHTRANSFORM ;
struct TYPE_11__ {int output_width; int num_components; scalar_t__ output_scanline; scalar_t__ output_height; int Y_density; int X_density; int density_unit; } ;
struct TYPE_10__ {int image_width; int num_components; int Y_density; int X_density; int density_unit; } ;
typedef scalar_t__ JSAMPROW ;


 TYPE_1__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *,int ,scalar_t__,scalar_t__,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,scalar_t__*,int) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_1__*,scalar_t__*,int) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static
int FUNC_11(cmsHTRANSFORM VAR_6, int VAR_7)
{
    JSAMPROW VAR_8;
    JSAMPROW VAR_9;




       VAR_0.density_unit = VAR_1.density_unit;
       VAR_0.X_density = VAR_1.X_density;
       VAR_0.Y_density = VAR_1.Y_density;



       FUNC_8(&VAR_1);
       FUNC_7(&VAR_0, VAR_4);

        if (VAR_7 == VAR_3)
            FUNC_1(&VAR_0);


       if (VAR_2 && VAR_5)
           FUNC_0(VAR_5);

       VAR_8 = (JSAMPROW) FUNC_10(VAR_1.output_width * VAR_1.num_components);
       VAR_9 = (JSAMPROW) FUNC_10(VAR_0.image_width * VAR_0.num_components);

       while (VAR_1.output_scanline <
                            VAR_1.output_height) {

       FUNC_6(&VAR_1, &VAR_8, 1);

       FUNC_2(((void*)0), VAR_6, VAR_8, VAR_9, VAR_1.output_width);

       FUNC_9(&VAR_0, &VAR_9, 1);
       }

       FUNC_3(VAR_8);
       FUNC_3(VAR_9);

       FUNC_5(&VAR_1);
       FUNC_4(&VAR_0);

       return VAR_4;
}
