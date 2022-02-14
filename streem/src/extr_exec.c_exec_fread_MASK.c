
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_value ;
typedef int strm_string ;
typedef int strm_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int,int *,char*,int *) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(strm_stream* VAR_4, int VAR_5, strm_value* VAR_6, strm_value* VAR_7)
{
  int VAR_8;
  strm_string VAR_9;
  char VAR_10[7];

  FUNC_1(VAR_4, VAR_5, VAR_6, "S", &VAR_9);
  VAR_8 = FUNC_0(FUNC_4(VAR_9, VAR_10), VAR_0);
  if (VAR_8 < 0) {
    FUNC_3(VAR_4, "fread() failed");
    return VAR_2;
  }
  *VAR_7 = FUNC_2(VAR_8, VAR_1);
  return VAR_3;
}
