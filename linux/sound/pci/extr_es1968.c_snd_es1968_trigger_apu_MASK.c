
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct es1968 {int dummy; } ;


 int FUNC_0 (struct es1968*,int,int ) ;
 int FUNC_1 (struct es1968*,int,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct es1968 *VAR_0, int VAR_1, int VAR_2)
{

 FUNC_1(VAR_0, VAR_1, 0,
      (FUNC_0(VAR_0, VAR_1, 0) & 0xff0f) |
      (VAR_2 << 4));
}
