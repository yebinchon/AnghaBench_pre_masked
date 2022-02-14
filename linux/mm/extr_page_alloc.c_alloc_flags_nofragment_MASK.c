
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int dummy; } ;
typedef int gfp_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct zone*) ;
 scalar_t__ FUNC_2 (struct zone*) ;

__attribute__((used)) static inline unsigned int
FUNC_3(struct zone *VAR_6, gfp_t VAR_7)
{
 unsigned int VAR_8 = 0;

 if (VAR_7 & VAR_4)
  VAR_8 |= VAR_0;
 return VAR_8;
}
