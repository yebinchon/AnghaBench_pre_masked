
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct matrix3 {int dummy; } ;
struct axisang {int dummy; } ;


 int FUNC_0 (struct axisang*,float,float,float,float) ;
 int FUNC_1 (struct matrix3*,struct matrix3 const*,struct axisang*) ;

__attribute__((used)) static inline void FUNC_2(struct matrix3 *VAR_0,
           const struct matrix3 *VAR_1, float VAR_2,
           float VAR_3, float VAR_4, float VAR_5)
{
 struct axisang VAR_6;
 FUNC_0(&VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_1(VAR_0, VAR_1, &VAR_6);
}
