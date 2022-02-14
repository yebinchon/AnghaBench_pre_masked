
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_int ;
typedef scalar_t__ mp_digit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int const*,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_1 (const mp_int * VAR_5, int *VAR_6)
{
  int VAR_7, VAR_8;
  mp_digit VAR_9;


  *VAR_6 = VAR_0;

  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {

    if ((VAR_7 = FUNC_0 (VAR_5, VAR_4[VAR_8], &VAR_9)) != VAR_1) {
      return VAR_7;
    }


    if (VAR_9 == 0) {
      *VAR_6 = VAR_2;
      return VAR_1;
    }
  }

  return VAR_1;
}
