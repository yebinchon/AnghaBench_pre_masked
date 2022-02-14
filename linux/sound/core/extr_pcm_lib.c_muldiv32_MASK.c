
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u_int64_t ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int,unsigned int*) ;

__attribute__((used)) static inline unsigned int FUNC_1(unsigned int VAR_1, unsigned int VAR_2,
        unsigned int VAR_3, unsigned int *VAR_4)
{
 u_int64_t VAR_5 = (u_int64_t) VAR_1 * VAR_2;
 if (VAR_3 == 0) {
  *VAR_4 = 0;
  return VAR_0;
 }
 VAR_5 = FUNC_0(VAR_5, VAR_3, VAR_4);
 if (VAR_5 >= VAR_0) {
  *VAR_4 = 0;
  return VAR_0;
 }
 return VAR_5;
}
