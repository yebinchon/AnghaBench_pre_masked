
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int cmsUInt16Number ;
struct TYPE_6__ {int (* Lerp16 ) (int ,int*,int*,TYPE_2__*) ;} ;
struct TYPE_7__ {TYPE_1__ Interpolation; } ;
typedef TYPE_2__ cmsInterpParams ;
typedef int cmsInt32Number ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int,int) ;
 TYPE_2__* FUNC_2 (int ,int,int,int,int*,int ) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int ,int*,int*,TYPE_2__*) ;

__attribute__((used)) static
cmsInt32Number FUNC_5(void)
{
    cmsInterpParams* VAR_1;
    cmsInt32Number VAR_2, VAR_3, VAR_4;
    cmsUInt16Number VAR_5[3], VAR_6[3];
    cmsUInt16Number VAR_7[] = {

        0, 0, 0,
        0, 0, 0xffff,

        0, 0xffff, 0,
        0, 0xffff, 0xffff,

        0xffff, 0, 0,
        0xffff, 0, 0xffff,

        0xffff, 0xffff, 0,
        0xffff, 0xffff, 0xffff
    };

    VAR_1 = FUNC_2(FUNC_0(), 2, 3, 3, VAR_7, VAR_0);

    for (VAR_2=0; VAR_2 < 0xff; VAR_2++)
        for (VAR_3=0; VAR_3 < 0xff; VAR_3++)
            for (VAR_4=0; VAR_4 < 0xff; VAR_4++)
        {
            VAR_5[0] = (cmsUInt16Number) VAR_2 ;
            VAR_5[1] = (cmsUInt16Number) VAR_3 ;
            VAR_5[2] = (cmsUInt16Number) VAR_4 ;


        VAR_1 ->Interpolation.Lerp16(FUNC_0(), VAR_5, VAR_6, VAR_1);

       if (!FUNC_1("Channel 1", VAR_6[0], VAR_5[0])) goto Error;
       if (!FUNC_1("Channel 2", VAR_6[1], VAR_5[1])) goto Error;
       if (!FUNC_1("Channel 3", VAR_6[2], VAR_5[2])) goto Error;
     }

    FUNC_3(FUNC_0(), VAR_1);
    return 1;

Error:
    FUNC_3(FUNC_0(), VAR_1);
    return 0;
}
