
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_uint64_t ;
struct zip_error {int dummy; } ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct zip_error*,int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 size_t FUNC_2 (char*,int,size_t,int *) ;
 size_t FUNC_3 (char*,int,size_t,int *) ;

__attribute__((used)) static int
FUNC_4(FILE *VAR_5, zip_uint64_t VAR_6, FILE *VAR_7, struct zip_error *VAR_8)
{
    char VAR_9[VAR_0];
    size_t VAR_10, VAR_11;

    if (VAR_6 == 0)
 return 0;

    while (VAR_6 > 0) {
 VAR_11 = VAR_6 > sizeof(VAR_9) ? sizeof(VAR_9) : VAR_6;
 if ((VAR_10=FUNC_2(VAR_9, 1, VAR_11, VAR_5)) == 0) {
            if (FUNC_1(VAR_5)) {
                FUNC_0(VAR_8, VAR_2, VAR_4);
                return -1;
            }
            else {
                FUNC_0(VAR_8, VAR_1, 0);
                return -1;
            }
        }

 if (FUNC_3(VAR_9, 1, VAR_10, VAR_7) != (size_t)VAR_10) {
     FUNC_0(VAR_8, VAR_3, VAR_4);
     return -1;
 }

 VAR_6 -= VAR_10;
    }

    return 0;
}
