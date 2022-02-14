
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,void const*,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int) ;

int FUNC_4(void *VAR_1, u16 VAR_2, u16 VAR_3, const void *VAR_4)
{
 __be32 *VAR_5 = (__be32 *) (VAR_1);
 u16 VAR_6 = FUNC_3(VAR_3);
 char *VAR_7 = (char *) VAR_5 + VAR_0;
 u32 VAR_8 = VAR_2 << 16 | (VAR_3 + VAR_0);

 *VAR_5 = FUNC_0(VAR_8);
 FUNC_2(VAR_7, 0, VAR_6 - VAR_0);
 FUNC_1(VAR_7, VAR_4, VAR_3);

 return VAR_6;
}
