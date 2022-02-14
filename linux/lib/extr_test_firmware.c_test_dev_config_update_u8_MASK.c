
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u8 ;


 int VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (char const*,int,long*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(const char *VAR_3, size_t VAR_4, u8 *VAR_5)
{
 int VAR_6;
 long VAR_7;

 VAR_6 = FUNC_0(VAR_3, 10, &VAR_7);
 if (VAR_6)
  return VAR_6;

 if (VAR_7 > VAR_1)
  return -VAR_0;

 FUNC_1(&VAR_2);
 *(u8 *)VAR_5 = VAR_7;
 FUNC_2(&VAR_2);


 return VAR_4;
}
