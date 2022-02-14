
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hw*) ;
 unsigned int FUNC_1 (struct hw*,int ) ;
 int FUNC_2 (struct hw*,int ,unsigned int) ;
 int FUNC_3 (unsigned int*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct hw *VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6;

 VAR_6 = 0;
 FUNC_3(&VAR_6, VAR_0, 0x57);

 FUNC_2(VAR_4, VAR_1, VAR_6);

 VAR_5 = FUNC_1(VAR_4, VAR_2);

 FUNC_3(&VAR_5, VAR_3, 0);

 FUNC_2(VAR_4, VAR_2, VAR_5);

 return FUNC_0(VAR_4);
}
