
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct axg_pdm {int map; int dclk; int sysclk; } ;


 unsigned int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct axg_pdm *VAR_6)
{
 unsigned int VAR_7, VAR_8, VAR_9;
 int VAR_10;


 VAR_7 = FUNC_0((u64)FUNC_2(VAR_6->sysclk),
     FUNC_2(VAR_6->dclk) * 2);


 if (FUNC_1(VAR_7 > VAR_4))
  return -VAR_0;


 VAR_8 = VAR_7 * 3 / 4;

 for (VAR_10 = 0, VAR_9 = 0; VAR_10 < VAR_3; VAR_10++)
  VAR_9 |= VAR_8 << (VAR_5 * VAR_10);

 FUNC_3(VAR_6->map, VAR_1, VAR_9);
 FUNC_3(VAR_6->map, VAR_2, VAR_9);

 return 0;
}
