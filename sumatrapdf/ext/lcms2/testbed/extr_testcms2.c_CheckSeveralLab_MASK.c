
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInt32Number ;
typedef int cmsHTRANSFORM ;


 int FUNC_0 (int ,int,int,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static
cmsInt32Number FUNC_1(cmsHTRANSFORM VAR_1)
{
    cmsInt32Number VAR_2, VAR_3, VAR_4;

    VAR_0 = 0;
    for (VAR_2=0; VAR_2 < 65536; VAR_2 += 1311) {

        for (VAR_3 = 0; VAR_3 < 65536; VAR_3 += 1232) {

            for (VAR_4 = 0; VAR_4 < 65536; VAR_4 += 1111) {

                if (!FUNC_0(VAR_1, (VAR_2 * 100.0) / 65535.0,
                                        (VAR_3 / 257.0) - 128, (VAR_4 / 257.0) - 128))
                    return 0;
            }

        }

    }
    return 1;
}
