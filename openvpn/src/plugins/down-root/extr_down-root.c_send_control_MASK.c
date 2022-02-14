
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int c ;


 int FUNC_0 (int,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_1(int VAR_0, int VAR_1)
{
    unsigned char VAR_2 = (unsigned char) VAR_1;
    const ssize_t VAR_3 = FUNC_0(VAR_0, &VAR_2, sizeof(VAR_2));
    if (VAR_3 == sizeof(VAR_2))
    {
        return (int) VAR_3;
    }
    else
    {
        return -1;
    }
}
