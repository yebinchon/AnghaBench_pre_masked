
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int const,int const,int const) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ) ;

int
FUNC_3(const int VAR_5, const int VAR_6, const int VAR_7)
{
 int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_0, VAR_1, 0);
 if (VAR_9 < 0)
  return VAR_4;

 if (FUNC_0(VAR_9, VAR_5, VAR_6, VAR_7) < 0) {
  VAR_8 = VAR_2;
  (void) FUNC_1(VAR_9);
  VAR_2 = VAR_8;
  return VAR_3;
 }

 return (VAR_9);
}
