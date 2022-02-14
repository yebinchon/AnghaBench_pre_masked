
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int *,int) ;

__attribute__((used)) static inline void FUNC_1(struct device *VAR_2, u8 *VAR_3, u32 VAR_4)
{
 if ((VAR_4 & VAR_0) != VAR_1)
  FUNC_0(VAR_2, "%s: 0x%x\n", VAR_3, VAR_4);
}
