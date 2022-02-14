
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt16Number ;
typedef int cmsStage ;
typedef int cmsPipeline ;
typedef int cmsInt32Number ;
typedef scalar_t__ cmsFloat32Number ;
typedef int Hint ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int * FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,scalar_t__*,scalar_t__*,scalar_t__*,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *,int ,int *) ;
 int * FUNC_6 (int ,int,int,int,int*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static
cmsInt32Number FUNC_9(void)
{
 cmsPipeline* VAR_2;
 cmsStage* VAR_3;
 cmsFloat32Number VAR_4[4], VAR_5[4], VAR_6[4];
 cmsFloat32Number VAR_7, VAR_8;
 cmsInt32Number VAR_9;
 cmsUInt16Number VAR_10[] = {

        0, 0, 0,
        0, 0, 0xffff,

        0, 0xffff, 0,
        0, 0xffff, 0xffff,

        0xffff, 0, 0,
        0xffff, 0, 0xffff,

        0xffff, 0xffff, 0,
        0xffff, 0xffff, 0xffff,
    };



   VAR_2 = FUNC_2(FUNC_0(), 3, 3);

   VAR_3 = FUNC_6(FUNC_0(), 2, 3, 3, VAR_10);
   FUNC_5(FUNC_0(), VAR_2, VAR_1, VAR_3);

   VAR_4[0] = 0; VAR_4[1] = 0; VAR_4[2] = 0;
   VAR_6[0] = 0; VAR_6[1] = 0; VAR_6[2] = 0;
   FUNC_3(FUNC_0(), VAR_4, VAR_5, ((void*)0), VAR_2);
   if (VAR_5[0] != 0 || VAR_5[1] != 0 || VAR_5[2] != 0){

       FUNC_1("Reverse interpolation didn't find zero");
       goto Error;
   }


   VAR_8 = 0;
   for (VAR_9=0; VAR_9 <= 100; VAR_9++) {

       cmsFloat32Number VAR_11 = VAR_9 / 100.0F;

       VAR_4[0] = VAR_11; VAR_4[1] = 0; VAR_4[2] = 0;
       FUNC_3(FUNC_0(), VAR_4, VAR_5, VAR_6, VAR_2);

       VAR_7 = FUNC_7(VAR_11 - VAR_5[0]);
       if (VAR_7 > VAR_8) VAR_8 = VAR_7;

       FUNC_8(VAR_6, VAR_5, sizeof(VAR_6));
   }

    FUNC_4(FUNC_0(), VAR_2);
    return (VAR_8 <= VAR_0);

Error:
    FUNC_4(FUNC_0(), VAR_2);
    return 0;
}
