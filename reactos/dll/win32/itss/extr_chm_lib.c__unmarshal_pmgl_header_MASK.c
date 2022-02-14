
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmPmglHeader {int signature; int block_next; int block_prev; int unknown_0008; int free_space; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char**,unsigned int*,int ,int) ;
 int FUNC_1 (unsigned char**,unsigned int*,int *) ;
 int FUNC_2 (unsigned char**,unsigned int*,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;

__attribute__((used)) static BOOL FUNC_4(unsigned char **VAR_4,
                                   unsigned int *VAR_5,
                                   struct chmPmglHeader *VAR_6)
{

    if (*VAR_5 != VAR_2)
        return VAR_0;


    FUNC_0(VAR_4, VAR_5, VAR_6->signature, 4);
    FUNC_2 (VAR_4, VAR_5, &VAR_6->free_space);
    FUNC_2 (VAR_4, VAR_5, &VAR_6->unknown_0008);
    FUNC_1 (VAR_4, VAR_5, &VAR_6->block_prev);
    FUNC_1 (VAR_4, VAR_5, &VAR_6->block_next);


    if (FUNC_3(VAR_6->signature, VAR_3, 4) != 0)
        return VAR_0;

    return VAR_1;
}
