
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt8Number ;
typedef int cmsUInt32Number ;
typedef int cmsUInt16Number ;
struct TYPE_7__ {int * Table16; } ;
typedef TYPE_1__ cmsToneCurve ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;
struct TYPE_8__ {double Gamma; double Min; double Max; } ;
typedef TYPE_2__ _cmsVCGTGAMMA ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,TYPE_1__**) ;
 int FUNC_3 (int ,int *,double*) ;
 int FUNC_4 (int ,int *,int,int *) ;
 int FUNC_5 (int ,int *,int*) ;
 int FUNC_6 (int ,int *,int*) ;
 int FUNC_7 (int ,int *,int *) ;
 TYPE_1__* FUNC_8 (int ,int,double*) ;
 TYPE_1__* FUNC_9 (int ,int,int *) ;
 int VAR_0 ;
 int FUNC_10 (int ,TYPE_1__**) ;
 int FUNC_11 (int ,int ,char*,int) ;
 int FUNC_12 (int) ;


 double FUNC_13 (double,double) ;

__attribute__((used)) static
void *FUNC_14(cmsContext VAR_1, struct _cms_typehandler_struct* VAR_2,
                     cmsIOHANDLER* VAR_3,
                     cmsUInt32Number* VAR_4,
                     cmsUInt32Number VAR_5)
{
    cmsUInt32Number VAR_6, VAR_7, VAR_8;
    cmsToneCurve** VAR_9;
    FUNC_12(VAR_2);

    *VAR_4 = 0;


    if (!FUNC_6(VAR_1, VAR_3, &VAR_6)) return ((void*)0);


    VAR_9 = ( cmsToneCurve**) FUNC_1(VAR_1, 3, sizeof(cmsToneCurve*));
    if (VAR_9 == ((void*)0)) return ((void*)0);


    switch (VAR_6) {


    case 128:
    {
       cmsUInt16Number VAR_10, VAR_11, VAR_12;


       if (!FUNC_5(VAR_1, VAR_3, &VAR_10)) goto Error;

       if (VAR_10 != 3) {
           FUNC_11(VAR_1, VAR_0, "Unsupported number of channels for VCGT '%d'", VAR_10);
           goto Error;
       }


       if (!FUNC_5(VAR_1, VAR_3, &VAR_11)) goto Error;
       if (!FUNC_5(VAR_1, VAR_3, &VAR_12)) goto Error;


       if (VAR_11 == 256 && VAR_12 == 1 && VAR_5 == 1576)
           VAR_12 = 2;



       for (VAR_7=0; VAR_7 < 3; VAR_7++) {

           VAR_9[VAR_7] = FUNC_9(VAR_1, VAR_11, ((void*)0));
           if (VAR_9[VAR_7] == ((void*)0)) goto Error;


           switch (VAR_12) {


           case 1:
               for (VAR_8=0; VAR_8 < VAR_11; VAR_8++) {

                   cmsUInt8Number VAR_13;

                      if (!FUNC_7(VAR_1, VAR_3, &VAR_13)) goto Error;
                      VAR_9[VAR_7] ->Table16[VAR_8] = FUNC_0(VAR_13);
               }
               break;


           case 2:
              if (!FUNC_4(VAR_1, VAR_3, VAR_11, VAR_9[VAR_7]->Table16)) goto Error;
              break;


           default:
              FUNC_11(VAR_1, VAR_0, "Unsupported bit depth for VCGT '%d'", VAR_12 * 8);
              goto Error;
           }
       }
    }
    break;


   case 129:
   {
       _cmsVCGTGAMMA VAR_14[3];


       for (VAR_7=0; VAR_7 < 3; VAR_7++) {

           double VAR_15[10];

           if (!FUNC_3(VAR_1, VAR_3, &VAR_14[VAR_7].Gamma)) goto Error;
           if (!FUNC_3(VAR_1, VAR_3, &VAR_14[VAR_7].Min)) goto Error;
           if (!FUNC_3(VAR_1, VAR_3, &VAR_14[VAR_7].Max)) goto Error;
           VAR_15[0] = VAR_14[VAR_7].Gamma;
           VAR_15[1] = FUNC_13((VAR_14[VAR_7].Max - VAR_14[VAR_7].Min), (1.0 / VAR_14[VAR_7].Gamma));
           VAR_15[2] = 0;
           VAR_15[3] = 0;
           VAR_15[4] = 0;
           VAR_15[5] = VAR_14[VAR_7].Min;
           VAR_15[6] = 0;

           VAR_9[VAR_7] = FUNC_8(VAR_1, 5, VAR_15);
           if (VAR_9[VAR_7] == ((void*)0)) goto Error;
       }
   }
   break;


   default:
      FUNC_11(VAR_1, VAR_0, "Unsupported tag type for VCGT '%d'", VAR_6);
      goto Error;
   }

   *VAR_4 = 1;
   return (void*) VAR_9;


Error:

    FUNC_10(VAR_1, VAR_9);
    FUNC_2(VAR_1, VAR_9);
    return ((void*)0);

     FUNC_12(VAR_5);
}
