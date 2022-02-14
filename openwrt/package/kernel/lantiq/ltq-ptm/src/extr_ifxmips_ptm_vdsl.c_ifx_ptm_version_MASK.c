
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_1 (char*,char*,unsigned int,unsigned int,...) ;

__attribute__((used)) static inline int FUNC_2(char *VAR_3)
{
    int VAR_4 = 0;
    unsigned int VAR_5, VAR_6;

    FUNC_0(&VAR_5, &VAR_6);

    VAR_4 += FUNC_1(VAR_3 + VAR_4, "PTM %d.%d.%d", VAR_0, VAR_1, VAR_2);
    VAR_4 += FUNC_1(VAR_3 + VAR_4, "    PTM (E1) firmware version %d.%d\n", VAR_5, VAR_6);

    return VAR_4;
}
