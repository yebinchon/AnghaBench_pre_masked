
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmPmgiHeader {int signature; int free_space; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char**,unsigned int*,int ,int) ;
 int FUNC_1 (unsigned char**,unsigned int*,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;

__attribute__((used)) static BOOL FUNC_3(unsigned char **VAR_4,
                                   unsigned int *VAR_5,
                                   struct chmPmgiHeader *VAR_6)
{

    if (*VAR_5 != VAR_2)
        return VAR_0;


    FUNC_0(VAR_4, VAR_5, VAR_6->signature, 4);
    FUNC_1 (VAR_4, VAR_5, &VAR_6->free_space);


    if (FUNC_2(VAR_6->signature, VAR_3, 4) != 0)
        return VAR_0;

    return VAR_1;
}
