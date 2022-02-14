
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long uLong ;
typedef int uInt ;
struct zip_error {int dummy; } ;
typedef scalar_t__ off_t ;
typedef int FILE ;
typedef int Bytef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (struct zip_error*,int ,int ) ;
 long FUNC_1 (long,int *,int ) ;
 int VAR_5 ;
 size_t FUNC_2 (int *,int,size_t,int *) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,int ) ;

int
FUNC_4(FILE *VAR_6, off_t VAR_7, off_t VAR_8, uLong *VAR_9,
     struct zip_error *VAR_10)
{
    Bytef VAR_11[VAR_0];
    size_t VAR_12;

    *VAR_9 = FUNC_1(0L, VAR_4, 0);

    if (FUNC_3(VAR_6, VAR_7, VAR_1) != 0) {
 FUNC_0(VAR_10, VAR_3, VAR_5);
 return -1;
    }

    while (VAR_8 > 0) {
 VAR_12 = VAR_8 > VAR_0 ? VAR_0 : (size_t)VAR_8;
 if ((VAR_12=FUNC_2(VAR_11, 1, VAR_12, VAR_6)) == 0) {
     FUNC_0(VAR_10, VAR_2, VAR_5);
     return -1;
 }

 *VAR_9 = FUNC_1(*VAR_9, VAR_11, (uInt)VAR_12);

 VAR_8-= VAR_12;
    }

    return 0;
}
