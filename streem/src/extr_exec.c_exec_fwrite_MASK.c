
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
 int VAR_4 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int *,int,int *,char*,int *) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(strm_stream* VAR_5, int VAR_6, strm_value* VAR_7, strm_value* VAR_8)
{
  int VAR_9;
  strm_string VAR_10;
  char VAR_11[7];

  FUNC_1(VAR_5, VAR_6, VAR_7, "S", &VAR_10);
  VAR_9 = FUNC_0(FUNC_3(VAR_10, VAR_11), VAR_1|VAR_0, 0644);
  if (VAR_9 < 0) return VAR_3;
  *VAR_8 = FUNC_2(VAR_9, VAR_2);
  return VAR_4;
}
