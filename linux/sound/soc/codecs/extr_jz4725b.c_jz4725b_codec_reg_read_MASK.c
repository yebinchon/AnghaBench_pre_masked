
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct jz_icdc {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct jz_icdc*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(void *VAR_5, unsigned int VAR_6,
      unsigned int *VAR_7)
{
 struct jz_icdc *VAR_8 = VAR_5;
 unsigned int VAR_9;
 u32 VAR_10;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_10 = FUNC_1(VAR_8->base + VAR_0);
 VAR_10 = (VAR_10 & ~VAR_1)
     | (VAR_6 << VAR_2);
 FUNC_2(VAR_10, VAR_8->base + VAR_0);


 for (VAR_9 = 0; VAR_9 < 6; VAR_9++)
  *VAR_7 = FUNC_1(VAR_8->base + VAR_3) &
   VAR_4;

 return 0;
}
