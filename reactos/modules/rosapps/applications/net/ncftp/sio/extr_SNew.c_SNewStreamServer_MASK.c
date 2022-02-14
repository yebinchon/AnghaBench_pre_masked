
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int const,int const,int const) ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ) ;

int
FUNC_4(const int VAR_6, const int VAR_7, const int VAR_8, int VAR_9)
{
 int VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(VAR_0, VAR_1, 0);
 if (VAR_11 < 0)
  return VAR_5;

 if (FUNC_0(VAR_11, VAR_6, VAR_7, VAR_8) < 0) {
  VAR_10 = VAR_2;
  (void) FUNC_2(VAR_11);
  VAR_2 = VAR_10;
  return VAR_3;
 }

 if (FUNC_1(VAR_11, VAR_9) < 0) {
  VAR_10 = VAR_2;
  (void) FUNC_2(VAR_11);
  VAR_2 = VAR_10;
  return VAR_4;
 }

 return (VAR_11);
}
