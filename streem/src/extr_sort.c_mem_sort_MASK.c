
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sort_arg {int dummy; } ;
typedef int strm_value ;
typedef int strm_int ;


 int FUNC_0 (int *,int ,int,int ) ;
 int FUNC_1 (int *,int ,int,int ,struct sort_arg*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(strm_value* VAR_2, strm_int VAR_3, struct sort_arg *VAR_4)
{
  if (VAR_4) {
    FUNC_1(VAR_2, VAR_3, sizeof(strm_value), VAR_1, VAR_4);
  }
  else {
    FUNC_0(VAR_2, VAR_3, sizeof(strm_value), VAR_0);
  }
}
