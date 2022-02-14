
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tiff {scalar_t__ order; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (struct tiff*) ;

__attribute__((used)) static inline unsigned FUNC_1(struct tiff *VAR_1)
{
 unsigned VAR_2 = FUNC_0(VAR_1);
 unsigned VAR_3 = FUNC_0(VAR_1);
 unsigned VAR_4 = FUNC_0(VAR_1);
 unsigned VAR_5 = FUNC_0(VAR_1);
 if (VAR_1->order == VAR_0)
  return (VAR_5 << 24) | (VAR_4 << 16) | (VAR_3 << 8) | VAR_2;
 return (VAR_2 << 24) | (VAR_3 << 16) | (VAR_4 << 8) | VAR_5;
}
