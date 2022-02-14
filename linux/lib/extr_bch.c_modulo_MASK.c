
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bch_control {int dummy; } ;


 unsigned int FUNC_0 (struct bch_control*) ;
 unsigned int FUNC_1 (struct bch_control*) ;

__attribute__((used)) static inline int FUNC_2(struct bch_control *VAR_0, unsigned int VAR_1)
{
 const unsigned int VAR_2 = FUNC_1(VAR_0);
 while (VAR_1 >= VAR_2) {
  VAR_1 -= VAR_2;
  VAR_1 = (VAR_1 & VAR_2) + (VAR_1 >> FUNC_0(VAR_0));
 }
 return VAR_1;
}
