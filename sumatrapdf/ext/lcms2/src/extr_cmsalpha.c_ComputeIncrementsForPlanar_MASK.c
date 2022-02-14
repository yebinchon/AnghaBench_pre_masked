
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;
typedef int channels ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static
void FUNC_6(cmsUInt32Number VAR_1,
                                cmsUInt32Number VAR_2,
                                cmsUInt32Number VAR_3[],
                                cmsUInt32Number VAR_4[])
{
       cmsUInt32Number VAR_5[VAR_0];
       cmsUInt32Number VAR_6 = FUNC_2(VAR_1);
       cmsUInt32Number VAR_7 = FUNC_0(VAR_1);
       cmsUInt32Number VAR_8 = VAR_7 + VAR_6;
       cmsUInt32Number VAR_9;
       cmsUInt32Number VAR_10 = FUNC_5(VAR_1);


       if (VAR_8 <= 0 || VAR_8 >= VAR_0)
           return;

       FUNC_4(VAR_5, 0, sizeof(VAR_5));


       for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
              VAR_4[VAR_9] = VAR_10;


       for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
       {
              if (FUNC_1(VAR_1)) {
                     VAR_5[VAR_9] = VAR_8 - VAR_9 - 1;
              }
              else {
                     VAR_5[VAR_9] = VAR_9;
              }
       }


       if (FUNC_3(VAR_1) && VAR_8 > 0) {

              cmsUInt32Number VAR_11 = VAR_5[0];
              for (VAR_9 = 0; VAR_9 < VAR_8 - 1; VAR_9++)
                     VAR_5[VAR_9] = VAR_5[VAR_9 + 1];

              VAR_5[VAR_8 - 1] = VAR_11;
       }


       for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
              VAR_5[VAR_9] *= VAR_2;
       }

       for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
              VAR_3[VAR_9] = VAR_5[VAR_9 + VAR_7];
}
