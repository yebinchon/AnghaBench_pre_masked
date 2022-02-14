
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct hw*,int ) ;

__attribute__((used)) static int FUNC_1(struct hw *VAR_2)
{
 int VAR_3 = 0x400000;
 unsigned int VAR_4;

 do {
  VAR_4 = FUNC_0(VAR_2, VAR_1);
 } while ((!(VAR_4 & VAR_0)) && --VAR_3);

 return VAR_3;
}
