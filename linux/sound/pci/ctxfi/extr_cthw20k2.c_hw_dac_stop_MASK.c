
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hw*,int ) ;
 int FUNC_1 (struct hw*,int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct hw *VAR_1)
{
 u32 VAR_2;
 VAR_2 = FUNC_0(VAR_1, VAR_0);
 VAR_2 &= 0xFFFFFFFD;
 FUNC_1(VAR_1, VAR_0, VAR_2);
 FUNC_2(10000, 11000);
}
