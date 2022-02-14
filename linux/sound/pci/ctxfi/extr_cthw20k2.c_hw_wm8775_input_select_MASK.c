
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hw {int dummy; } ;
typedef int s8 ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct hw*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct hw *VAR_5, u8 VAR_6, s8 VAR_7)
{
 u32 VAR_8, VAR_9;

 if (VAR_6 > 3)
  VAR_6 = 3;

 VAR_8 = ((u32)1 << VAR_6) | 0x100;

 FUNC_2(VAR_5, FUNC_0(VAR_4, VAR_8),
    FUNC_1(VAR_8));

 if (VAR_7 < -103)
  VAR_7 = -103;
 if (VAR_7 > 24)
  VAR_7 = 24;

 VAR_9 = VAR_7 * VAR_1 + VAR_0;

 FUNC_2(VAR_5, FUNC_0(VAR_2, VAR_9),
    FUNC_1(VAR_9));

 FUNC_2(VAR_5, FUNC_0(VAR_3, VAR_9),
    FUNC_1(VAR_9));
}
