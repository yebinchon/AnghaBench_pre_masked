
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64 ;
typedef int fsec_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_0(double VAR_3, int *VAR_4, int *VAR_5, int *VAR_6, fsec_t *VAR_7)
{
 int64 VAR_8;

 VAR_8 = VAR_3;
 *VAR_4 = VAR_8 / VAR_0;
 VAR_8 -= (*VAR_4) * VAR_0;
 *VAR_5 = VAR_8 / VAR_1;
 VAR_8 -= (*VAR_5) * VAR_1;
 *VAR_6 = VAR_8 / VAR_2;
 *VAR_7 = VAR_8 - (*VAR_6 * VAR_2);
}
