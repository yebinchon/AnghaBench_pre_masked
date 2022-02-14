
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int __le32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (void*,void const*,unsigned int) ;

__attribute__((used)) static inline void FUNC_2(void *VAR_0, const void *VAR_1, unsigned int VAR_2)
{



 u32 *VAR_3 = VAR_0;
 const __le32 *VAR_4 = VAR_1;
 VAR_2 /= 4;
 while (VAR_2-- > 0)
  *VAR_3++ = FUNC_0(*VAR_4++);

}
