
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_value ;
typedef size_t strm_int ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (double) ;
 scalar_t__ FUNC_2 (int ) ;
 double FUNC_3 (int ) ;

__attribute__((used)) static strm_value
FUNC_4(strm_value *VAR_0, int VAR_1)
{
  strm_value VAR_2 = FUNC_0(VAR_0, VAR_1);

  if (VAR_1%2 == 0 && FUNC_2(VAR_2)) {
    strm_int VAR_3 = VAR_1/2;
    if (FUNC_2(VAR_0[VAR_3])) {
       double VAR_4 = FUNC_3(VAR_2);
       double VAR_5 = FUNC_3(VAR_0[VAR_3]);

       return FUNC_1((VAR_4 + VAR_5)/2);
    }
  }
  return VAR_2;
}
