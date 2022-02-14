
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmPmglHeader {unsigned int free_space; unsigned int unknown_0008; int signature; int block_next; int block_prev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char**,unsigned int*,int ,int) ;
 int FUNC_1 (unsigned char**,unsigned int*,int *) ;
 int FUNC_2 (unsigned char**,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(unsigned char **VAR_2,
                                  unsigned int *VAR_3,
                                  unsigned int VAR_4,
                                  struct chmPmglHeader *VAR_5)
{

    if (*VAR_3 != VAR_0)
        return 0;

    if (VAR_4 < VAR_0)
        return 0;


    FUNC_0(VAR_2, VAR_3, VAR_5->signature, 4);
    FUNC_2 (VAR_2, VAR_3, &VAR_5->free_space);
    FUNC_2 (VAR_2, VAR_3, &VAR_5->unknown_0008);
    FUNC_1 (VAR_2, VAR_3, &VAR_5->block_prev);
    FUNC_1 (VAR_2, VAR_3, &VAR_5->block_next);


    if (FUNC_3(VAR_5->signature, VAR_1, 4) != 0)
        return 0;

    if (VAR_5->free_space > VAR_4 - VAR_0)
        return 0;

    return 1;
}
