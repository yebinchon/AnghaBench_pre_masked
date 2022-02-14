
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct hw*,int ) ;
 int FUNC_1 (struct hw*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct hw *VAR_2)
{
 u8 VAR_3[2] = {0xB3, 0xD4};


 FUNC_1(VAR_2, VAR_0,
   VAR_3[0]);
 FUNC_1(VAR_2, VAR_0,
   VAR_3[1]);

 if (FUNC_0(VAR_2, VAR_0) == VAR_1)
  return 0;

 return -1;
}
