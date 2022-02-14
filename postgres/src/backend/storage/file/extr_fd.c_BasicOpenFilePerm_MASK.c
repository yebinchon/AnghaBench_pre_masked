
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_4 ;
 int FUNC_4 (char const*,int,int ) ;

int
FUNC_5(const char *VAR_5, int VAR_6, mode_t VAR_7)
{
 int VAR_8;

tryAgain:
 VAR_8 = FUNC_4(VAR_5, VAR_6, VAR_7);

 if (VAR_8 >= 0)
  return VAR_8;

 if (VAR_4 == VAR_0 || VAR_4 == VAR_1)
 {
  int VAR_9 = VAR_4;

  FUNC_1(VAR_3,
    (FUNC_2(VAR_2),
     FUNC_3("out of file descriptors: %m; release and retry")));
  VAR_4 = 0;
  if (FUNC_0())
   goto tryAgain;
  VAR_4 = VAR_9;
 }

 return -1;
}
