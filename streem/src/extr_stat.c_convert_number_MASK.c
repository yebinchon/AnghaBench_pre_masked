
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_value ;
typedef int strm_stream ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int,int *,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static strm_value
FUNC_4(strm_stream* VAR_1, strm_value VAR_2, strm_value VAR_3)
{
  strm_value VAR_4;

  if (FUNC_0(VAR_1, VAR_3, 1, &VAR_2, &VAR_4) == VAR_0) {
    return FUNC_1();
  }
  if (!FUNC_2(VAR_4)) {
    FUNC_3(VAR_1, "number required");
    return FUNC_1();
  }
  return VAR_4;
}
