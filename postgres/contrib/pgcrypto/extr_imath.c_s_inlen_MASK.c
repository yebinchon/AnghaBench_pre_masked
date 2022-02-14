
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t mp_size ;


 int VAR_0 ;
 double* VAR_1 ;

__attribute__((used)) static mp_size
FUNC_0(int VAR_2, mp_size VAR_3)
{
 double VAR_4 = (double) VAR_2 / VAR_1[VAR_3];
 mp_size VAR_5 = (mp_size) (VAR_4 + 0.5);

 return (mp_size) ((VAR_5 + (VAR_0 - 1)) / VAR_0) + 1;
}
