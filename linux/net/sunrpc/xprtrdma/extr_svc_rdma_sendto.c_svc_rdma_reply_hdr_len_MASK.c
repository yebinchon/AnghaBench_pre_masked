
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __be32 ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static unsigned int FUNC_1(__be32 *VAR_3)
{
 unsigned int VAR_4;
 __be32 *VAR_5;

 VAR_5 = VAR_3;


 VAR_5 += VAR_0 + 1;


 while (*VAR_5++ != VAR_2) {
  VAR_4 = FUNC_0(VAR_5++);
  VAR_5 += VAR_4 * VAR_1;
 }


 if (*VAR_5++ != VAR_2) {
  VAR_4 = FUNC_0(VAR_5++);
  VAR_5 += VAR_4 * VAR_1;
 }

 return (unsigned long)VAR_5 - (unsigned long)VAR_3;
}
