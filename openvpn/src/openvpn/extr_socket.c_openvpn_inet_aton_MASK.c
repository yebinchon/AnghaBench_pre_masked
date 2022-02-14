
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct in_addr) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (char const*,char*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_3 (char const*,int,int ) ;

int
FUNC_4(const char *VAR_5, struct in_addr *VAR_6)
{
    unsigned int VAR_7, VAR_8, VAR_9, VAR_10;

    FUNC_0(*VAR_6);
    if (FUNC_2(VAR_5, "%u.%u.%u.%u", &VAR_7, &VAR_8, &VAR_9, &VAR_10) == 4)
    {
        if (VAR_7 < 256 && VAR_8 < 256 && VAR_9 < 256 && VAR_10 < 256)
        {
            VAR_6->s_addr = FUNC_1(VAR_7<<24 | VAR_8<<16 | VAR_9<<8 | VAR_10);
            return VAR_4;
        }
    }
    if (FUNC_3(VAR_5, VAR_0|VAR_1, 0))
    {
        return VAR_2;
    }
    else
    {
        return VAR_3;
    }
}
