
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_3__ {scalar_t__ desktop_save; scalar_t__ polygon_ellipse_orders; scalar_t__ bitmap_cache; } ;
typedef int STREAM ;
typedef TYPE_1__ RDPCLIENT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int*,int) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void
FUNC_7(RDPCLIENT * VAR_3, STREAM VAR_4)
{
 uint8 VAR_5[32];

 FUNC_0(VAR_5, 0, 32);
 VAR_5[0] = 1;
 VAR_5[1] = 1;
 VAR_5[2] = 1;
 VAR_5[3] = (VAR_3->bitmap_cache ? 1 : 0);
 VAR_5[4] = 0;
 VAR_5[8] = 1;
 VAR_5[9] = 1;
 VAR_5[10] = 1;
 VAR_5[11] = (VAR_3->desktop_save ? 1 : 0);
 VAR_5[13] = 1;
 VAR_5[14] = 1;
 VAR_5[20] = (VAR_3->polygon_ellipse_orders ? 1 : 0);
 VAR_5[21] = (VAR_3->polygon_ellipse_orders ? 1 : 0);
 VAR_5[22] = 1;
 VAR_5[25] = (VAR_3->polygon_ellipse_orders ? 1 : 0);
 VAR_5[26] = (VAR_3->polygon_ellipse_orders ? 1 : 0);
 VAR_5[27] = 1;
 FUNC_2(VAR_4, VAR_2);
 FUNC_2(VAR_4, VAR_1);

 FUNC_6(VAR_4, 20);
 FUNC_2(VAR_4, 1);
 FUNC_2(VAR_4, 20);
 FUNC_1(VAR_4, 0);
 FUNC_2(VAR_4, 1);
 FUNC_2(VAR_4, 0x147);
 FUNC_2(VAR_4, 0x2a);
 FUNC_5(VAR_4, VAR_5, 32);
 FUNC_2(VAR_4, 0x6a1);
 FUNC_6(VAR_4, 6);
 FUNC_4(VAR_4, VAR_3->desktop_save == VAR_0 ? 0 : 0x38400);
 FUNC_3(VAR_4, 0);
 FUNC_4(VAR_4, 0x4e4);
}
