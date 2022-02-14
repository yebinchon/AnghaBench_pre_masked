
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int loff_t ;


 scalar_t__ FUNC_0 (int,int,int,int*,int) ;

__attribute__((used)) static loff_t FUNC_1( int VAR_0, loff_t VAR_1, int VAR_2 )
{
    loff_t VAR_3;

    if (FUNC_0(VAR_0, VAR_1>>32, VAR_1&0xffffffff, &VAR_3, VAR_2) != 0)
 return (loff_t)-1;
    return VAR_3;
}
