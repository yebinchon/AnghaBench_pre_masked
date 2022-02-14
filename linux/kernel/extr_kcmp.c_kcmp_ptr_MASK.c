
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum kcmp_type { ____Placeholder_kcmp_type } kcmp_type ;


 long FUNC_0 (long,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, void *VAR_1, enum kcmp_type VAR_2)
{
 long VAR_3, VAR_4;

 VAR_3 = FUNC_0((long)VAR_0, VAR_2);
 VAR_4 = FUNC_0((long)VAR_1, VAR_2);

 return (VAR_3 < VAR_4) | ((VAR_3 > VAR_4) << 1);
}
