
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmPmgiHeader {unsigned int free_space; int signature; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char**,unsigned int*,int ,int) ;
 int FUNC_1 (unsigned char**,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(unsigned char **VAR_2,
                                  unsigned int *VAR_3,
                                  unsigned int VAR_4,
                                  struct chmPmgiHeader *VAR_5)
{

    if (*VAR_3 != VAR_0)
        return 0;

    if (VAR_4 < VAR_0)
        return 0;


    FUNC_0(VAR_2, VAR_3, VAR_5->signature, 4);
    FUNC_1 (VAR_2, VAR_3, &VAR_5->free_space);


    if (FUNC_2(VAR_5->signature, VAR_1, 4) != 0)
        return 0;

    if (VAR_5->free_space > VAR_4 - VAR_0)
        return 0;

    return 1;
}
