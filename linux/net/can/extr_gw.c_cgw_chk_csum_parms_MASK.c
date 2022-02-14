
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtcanmsg {int flags; } ;
typedef int s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(s8 VAR_4, s8 VAR_5, s8 VAR_6, struct rtcanmsg *VAR_7)
{
 s8 VAR_8 = VAR_1;

 if (VAR_7->flags & VAR_2)
  VAR_8 = VAR_0;
 if (VAR_4 >= -VAR_8 && VAR_4 < VAR_8 &&
     VAR_5 >= -VAR_8 && VAR_5 < VAR_8 &&
     VAR_6 >= -VAR_8 && VAR_6 < VAR_8)
  return 0;
 else
  return -VAR_3;
}
