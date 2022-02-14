
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cmsUInt32Number ;
struct TYPE_3__ {int num_components; int out_color_space; int jpeg_color_space; int saw_Adobe_marker; int marker_list; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static
cmsUInt32Number FUNC_9(void)
{
     int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

     VAR_6 = FUNC_8(VAR_0.marker_list);
     VAR_7 = FUNC_7(VAR_0.marker_list);
     VAR_5 = FUNC_6(&VAR_0);

     VAR_11 = VAR_0.num_components;
     VAR_10 = 0;
     VAR_9 = 1;
     VAR_12 = 0;

     if (VAR_6) {

        VAR_8 = VAR_3;
        VAR_0.out_color_space = 128;
     }
     else
     switch (VAR_0.jpeg_color_space) {

     case 131:
              VAR_8 = VAR_2;
              VAR_0.out_color_space = 131;
              break;

     case 130:
              VAR_8 = VAR_4;
              VAR_0.out_color_space = 130;
              break;

     case 128:
              VAR_8 = VAR_4;
              VAR_0.out_color_space = 130;
              break;

     case 132:
              VAR_8 = VAR_1;
              VAR_0.out_color_space = 132;
              if (VAR_0.saw_Adobe_marker)
                                VAR_12 = 1;
              break;

     case 129:
              VAR_8 = VAR_1;
              VAR_0.out_color_space = 132;
              if (VAR_0.saw_Adobe_marker)
                                VAR_12 = 1;
              break;

     default:
              FUNC_5("Unsupported color space (0x%x)", VAR_0.jpeg_color_space);
              return 0;
     }

     return (FUNC_3(VAR_10)|FUNC_1(VAR_11)|FUNC_0(VAR_9)|FUNC_2(VAR_8)|FUNC_4(VAR_12));
}
