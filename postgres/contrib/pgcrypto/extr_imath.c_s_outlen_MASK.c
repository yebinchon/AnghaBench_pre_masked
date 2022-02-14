
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t mp_size ;
typedef scalar_t__ mp_result ;
typedef int mp_int ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 double* VAR_2 ;

__attribute__((used)) static int
FUNC_2(mp_int VAR_3, mp_size VAR_4)
{
 FUNC_0(VAR_4 >= VAR_1 && VAR_4 <= VAR_0);

 mp_result VAR_5 = FUNC_1(VAR_3);
 double VAR_6 = (double) VAR_5 * VAR_2[VAR_4];

 return (int) (VAR_6 + 0.999999);
}
