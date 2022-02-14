
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t zip_uint8_t ;
typedef size_t zip_uint32_t ;
struct zip_error {int dummy; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct zip_error*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,size_t*,size_t) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (size_t) ;

zip_uint8_t *
FUNC_4(const zip_uint8_t * const VAR_2, zip_uint32_t VAR_3,
     zip_uint32_t *VAR_4, struct zip_error *VAR_5)
{
    zip_uint8_t *VAR_6 = (zip_uint8_t *)VAR_2;
    zip_uint8_t *VAR_7;
    zip_uint32_t VAR_8, VAR_9, VAR_10;

    if (VAR_3 == 0) {
 if (VAR_4)
     *VAR_4 = 0;
 return ((void*)0);
    }

    VAR_8 = 1;
    for (VAR_9=0; VAR_9<VAR_3; VAR_9++)
 VAR_8 += FUNC_2(VAR_1[VAR_6[VAR_9]]);

    if ((VAR_7=(zip_uint8_t*)FUNC_3(VAR_8)) == ((void*)0)) {
 FUNC_0(VAR_5, VAR_0, 0);
 return ((void*)0);
    }

    VAR_10 = 0;
    for (VAR_9=0; VAR_9<VAR_3 && VAR_10 < VAR_8; VAR_9++) {
 VAR_10 += FUNC_1(VAR_1[VAR_6[VAR_9]],
           VAR_7+VAR_10, VAR_8 - VAR_10);
   }

    VAR_7[VAR_8-1] = 0;
    if (VAR_4)
 *VAR_4 = VAR_8-1;
    return VAR_7;
}
