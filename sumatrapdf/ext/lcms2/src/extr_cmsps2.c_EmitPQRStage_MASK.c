
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cmsIOHANDLER ;
typedef int cmsHPROFILE ;
typedef int cmsContext ;
struct TYPE_3__ {int Z; int Y; int X; } ;
typedef TYPE_1__ cmsCIEXYZ ;


 int FUNC_0 (int ,int *,char*,...) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static
void FUNC_2(cmsContext VAR_0, cmsIOHANDLER* VAR_1, cmsHPROFILE VAR_2, int VAR_3, int VAR_4)
{


        if (VAR_4) {






            cmsCIEXYZ VAR_5;

            FUNC_1(VAR_0, &VAR_5, VAR_2);

            FUNC_0(VAR_0, VAR_1,"/MatrixPQR [1 0 0 0 1 0 0 0 1 ]\n");
            FUNC_0(VAR_0, VAR_1,"/RangePQR [ -0.5 2 -0.5 2 -0.5 2 ]\n");

            FUNC_0(VAR_0, VAR_1, "%% Absolute colorimetric -- encode to relative to maximize LUT usage\n"
                      "/TransformPQR [\n"
                      "{0.9642 mul %g div exch pop exch pop exch pop exch pop} bind\n"
                      "{1.0000 mul %g div exch pop exch pop exch pop exch pop} bind\n"
                      "{0.8249 mul %g div exch pop exch pop exch pop exch pop} bind\n]\n",
                      VAR_5.X, VAR_5.Y, VAR_5.Z);
            return;
        }


        FUNC_0(VAR_0, VAR_1,"%% Bradford Cone Space\n"
                 "/MatrixPQR [0.8951 -0.7502 0.0389 0.2664 1.7135 -0.0685 -0.1614 0.0367 1.0296 ] \n");

        FUNC_0(VAR_0, VAR_1, "/RangePQR [ -0.5 2 -0.5 2 -0.5 2 ]\n");




        if (!VAR_3) {

            FUNC_0(VAR_0, VAR_1, "%% VonKries-like transform in Bradford Cone Space\n"
                      "/TransformPQR [\n"
                      "{exch pop exch 3 get mul exch pop exch 3 get div} bind\n"
                      "{exch pop exch 4 get mul exch pop exch 4 get div} bind\n"
                      "{exch pop exch 5 get mul exch pop exch 5 get div} bind\n]\n");
        } else {



            FUNC_0(VAR_0, VAR_1, "%% VonKries-like transform in Bradford Cone Space plus BPC\n"
                      "/TransformPQR [\n");

            FUNC_0(VAR_0, VAR_1, "{4 index 3 get div 2 index 3 get mul "
                    "2 index 3 get 2 index 3 get sub mul "
                    "2 index 3 get 4 index 3 get 3 index 3 get sub mul sub "
                    "3 index 3 get 3 index 3 get exch sub div "
                    "exch pop exch pop exch pop exch pop } bind\n");

            FUNC_0(VAR_0, VAR_1, "{4 index 4 get div 2 index 4 get mul "
                    "2 index 4 get 2 index 4 get sub mul "
                    "2 index 4 get 4 index 4 get 3 index 4 get sub mul sub "
                    "3 index 4 get 3 index 4 get exch sub div "
                    "exch pop exch pop exch pop exch pop } bind\n");

            FUNC_0(VAR_0, VAR_1, "{4 index 5 get div 2 index 5 get mul "
                    "2 index 5 get 2 index 5 get sub mul "
                    "2 index 5 get 4 index 5 get 3 index 5 get sub mul sub "
                    "3 index 5 get 3 index 5 get exch sub div "
                    "exch pop exch pop exch pop exch pop } bind\n]\n");

        }


}
