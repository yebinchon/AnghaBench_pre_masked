
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
typedef int strm_value ;
typedef int strm_stream ;
typedef int strm_int ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct timeval*,int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *,int,int *,char*,char**,int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct timeval*,int,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(strm_stream* VAR_2, int VAR_3, strm_value* VAR_4, strm_value* VAR_5)
{
  struct timeval VAR_6;
  int VAR_7;

  if (VAR_3 == 0) {
    VAR_7 = FUNC_5(0);
  }
  else {
    char *VAR_8;
    strm_int VAR_9;

    FUNC_2(VAR_2, VAR_3, VAR_4, "s", &VAR_8, &VAR_9);
    VAR_7 = FUNC_1(VAR_8, VAR_9);
    if (VAR_7 == VAR_1) {
      FUNC_3(VAR_2, "wrong timezeone");
      return VAR_0;
    }
  }
  FUNC_0(&VAR_6, ((void*)0));
  return FUNC_4(&VAR_6, VAR_7, VAR_5);
}
