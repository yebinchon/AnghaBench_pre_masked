
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jz_icdc {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct jz_icdc*) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(void *VAR_3, unsigned int VAR_4,
       unsigned int VAR_5)
{
 struct jz_icdc *VAR_6 = VAR_3;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_1(VAR_2 | (VAR_4 << VAR_1) | VAR_5,
   VAR_6->base + VAR_0);

 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7)
  return VAR_7;

 return 0;
}
