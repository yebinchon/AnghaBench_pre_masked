
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct oxygen {int dummy; } ;


 int FUNC_0 (struct oxygen*,int const) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_0, u8 VAR_1,
          unsigned int VAR_2, const u8 *VAR_3)
{
 unsigned int VAR_4;
 u8 VAR_5;

 FUNC_0(VAR_0, 0xfb);
 FUNC_0(VAR_0, 0xef);
 FUNC_0(VAR_0, VAR_1);
 FUNC_0(VAR_0, VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4)
  FUNC_0(VAR_0, VAR_3[VAR_4]);
 VAR_5 = 0xfb + 0xef + VAR_1 + VAR_2;
 for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4)
  VAR_5 += VAR_3[VAR_4];
 FUNC_0(VAR_0, VAR_5);
}
