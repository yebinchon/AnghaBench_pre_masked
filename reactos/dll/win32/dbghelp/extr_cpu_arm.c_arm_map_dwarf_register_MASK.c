
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,unsigned int) ;

__attribute__((used)) static unsigned FUNC_1(unsigned VAR_3, BOOL VAR_4)
{
    if (VAR_3 <= 15) return VAR_2 + VAR_3;
    if (VAR_3 == 128) return VAR_0;

    FUNC_0("Don't know how to map register %d\n", VAR_3);
    return VAR_1;
}
