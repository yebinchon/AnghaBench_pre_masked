
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char zip_uint8_t ;
struct zip_error {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct zip_error*,int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 size_t FUNC_2 (char*,int,size_t,int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (size_t) ;
 int FUNC_5 (char*,char const*,size_t) ;

zip_uint8_t *
FUNC_6(const zip_uint8_t **VAR_4, FILE *VAR_5, size_t VAR_6, int VAR_7, struct zip_error *VAR_8)
{
    zip_uint8_t *VAR_9;

    if (VAR_6 == 0 && VAR_7 == 0)
 return ((void*)0);

    VAR_9 = (zip_uint8_t *)FUNC_4(VAR_7 ? VAR_6+1 : VAR_6);
    if (!VAR_9) {
 FUNC_0(VAR_8, VAR_1, 0);
 return ((void*)0);
    }

    if (VAR_4) {
 FUNC_5(VAR_9, *VAR_4, VAR_6);
 *VAR_4 += VAR_6;
    }
    else {
 if (FUNC_2(VAR_9, 1, VAR_6, VAR_5)<VAR_6) {
     FUNC_3(VAR_9);
            if (FUNC_1(VAR_5))
                FUNC_0(VAR_8, VAR_2, VAR_3);
            else
                FUNC_0(VAR_8, VAR_0, 0);
     return ((void*)0);
 }
    }

    if (VAR_7) {
 zip_uint8_t *VAR_10;

 VAR_9[VAR_6] = 0;
 for (VAR_10=VAR_9; VAR_10<VAR_9+VAR_6; VAR_10++)
     if (*VAR_10 == '\0')
  *VAR_10 = ' ';
    }

    return VAR_9;
}
