
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
typedef unsigned int u16 ;
struct hw20k2 {int addr_size; } ;
struct hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hw*) ;
 void* FUNC_1 (struct hw*,int ) ;
 int FUNC_2 (struct hw*,int ,unsigned int) ;
 int FUNC_3 (unsigned int*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct hw *VAR_4, u16 VAR_5, u32 *VAR_6)
{
 struct hw20k2 *VAR_7 = (struct hw20k2 *)VAR_4;
 unsigned int VAR_8;

 VAR_8 = FUNC_1(VAR_4, VAR_1);
 FUNC_3(&VAR_8, VAR_3,
    (4 == VAR_7->addr_size) ? 0 : VAR_7->addr_size);
 FUNC_2(VAR_4, VAR_1, VAR_8);
 if (!FUNC_0(VAR_4))
  return -1;

 FUNC_2(VAR_4, VAR_2, VAR_5);
 if (!FUNC_0(VAR_4))
  return -1;


 FUNC_2(VAR_4, VAR_0, 0);
 if (!FUNC_0(VAR_4))
  return -1;

 *VAR_6 = FUNC_1(VAR_4, VAR_0);

 return 0;
}
