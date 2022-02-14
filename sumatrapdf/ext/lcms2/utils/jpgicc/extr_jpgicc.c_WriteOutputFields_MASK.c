
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int input_components; int num_components; int write_JFIF_header; TYPE_1__* comp_info; void* jpeg_color_space; void* in_color_space; } ;
struct TYPE_6__ {int h_samp_factor; int v_samp_factor; } ;
typedef void* J_COLOR_SPACE ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (char*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;





 int VAR_6 ;
 int FUNC_1 (TYPE_2__*,void*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int,int) ;

__attribute__((used)) static
void FUNC_4(int VAR_7)
{
    J_COLOR_SPACE VAR_8, VAR_9;
    int VAR_10;

    switch (VAR_7) {

    case 131: VAR_8 = VAR_9 = VAR_2;
                  VAR_10 = 1;
                  break;

    case 129: VAR_8 = VAR_3;
                  VAR_9 = VAR_5;
                  VAR_10 = 3;
                  break;

    case 128: VAR_8 = VAR_9 = VAR_5;
                   VAR_10 = 3;
                   break;

    case 132: VAR_8 = VAR_1;
                  VAR_9 = VAR_4;
                  VAR_10 = 4;
                  break;

    case 130: VAR_8 = VAR_9 = VAR_5;
                  VAR_10 = 3;
                  break;
    default:
                 FUNC_0("Unsupported output color space");
                 return;
    }


    if (VAR_6 >= 100) {


        VAR_9 = VAR_8;
    }

    VAR_0.in_color_space = VAR_8;
    VAR_0.jpeg_color_space = VAR_9;
    VAR_0.input_components = VAR_0.num_components = VAR_10;
    FUNC_2(&VAR_0);
    FUNC_1(&VAR_0, VAR_9);



    if (VAR_7 == 132)
        VAR_0.write_JFIF_header = 1;


    FUNC_3(&VAR_0, VAR_6, 1);
    if (VAR_6 >= 70) {

      int VAR_11;
      for(VAR_11=0; VAR_11 < VAR_0.num_components; VAR_11++) {

            VAR_0.comp_info[VAR_11].h_samp_factor = 1;
            VAR_0.comp_info[VAR_11].v_samp_factor = 1;
      }

    }

}
