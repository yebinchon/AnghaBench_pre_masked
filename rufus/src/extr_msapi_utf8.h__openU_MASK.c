
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*,int ,int,int,int) ;
 int FUNC_1 (char const*) ;
 int VAR_5 ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static __inline int FUNC_3(const char *VAR_6, int VAR_7 , int VAR_8)
{
 int VAR_9 = -1;
 int VAR_10 = VAR_2;
 FUNC_1(VAR_6);

 if ((VAR_7 & 0x03) == VAR_0)
  VAR_10 = VAR_4;
 else if ((VAR_7 & 0x03) == VAR_1)
  VAR_10 = VAR_3;
 FUNC_0(&VAR_9, VAR_5, VAR_7, VAR_10, VAR_8);
 FUNC_2(VAR_6);
 return VAR_9;
}
