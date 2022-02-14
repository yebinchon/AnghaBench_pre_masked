
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_uint16_t ;
typedef int zip_int32_t ;
struct zip_error {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct zip_error*,int ,int ) ;
 scalar_t__ FUNC_1 (unsigned char const**) ;
 int VAR_6 ;
 int FUNC_2 (unsigned char*,int,int,int *) ;
 scalar_t__ FUNC_3 (int *,int,int ) ;

zip_int32_t
FUNC_4(FILE *VAR_7, zip_uint16_t VAR_8, struct zip_error *VAR_9)
{
    zip_int32_t VAR_10;
    int VAR_11 = (VAR_8 & VAR_3);
    int VAR_12;
    unsigned char VAR_13[6];
    const unsigned char *VAR_14;

    VAR_10 = VAR_11 ? VAR_1 : VAR_0;

    if (FUNC_3(VAR_7, VAR_11 ? 26 : 28, VAR_2) < 0) {
 FUNC_0(VAR_9, VAR_5, VAR_6);
 return -1;
    }

    if (FUNC_2(VAR_13, (VAR_11 ? 4 : 6), 1, VAR_7) != 1) {
 FUNC_0(VAR_9, VAR_4, VAR_6);
 return -1;
    }

    VAR_14 = VAR_13;
    for (VAR_12=0; VAR_12<(VAR_11 ? 2 : 3); VAR_12++) {
 VAR_10 += FUNC_1(&VAR_14);
    }

    return VAR_10;
}
