
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0 (int VAR_3)
{
    static const int VAR_4[][4] = {{130, 0, 0, 0},
                                    {130, 133, 0, 0},
                                    {134, 129, 132, 0},
                                    {128, 131, 133, 0},
                                    {128, 131, 0, 0},
                                    {129, 133, 0, 0}};
    int VAR_5 = VAR_3 & VAR_2;
    int VAR_6 = (VAR_3 & VAR_1) / VAR_0;

    return VAR_4[VAR_5][VAR_6];
}
