
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gdImagePtr ;


 int FUNC_0 (int ,float**,float,int ) ;

int FUNC_1(gdImagePtr VAR_0, float VAR_1)
{
 float VAR_2[3][3] = {{1.0,1.0,1.0},
    {1.0,0.0,1.0},
    {1.0,1.0,1.0}};

 VAR_2[1][1] = VAR_1;

 return FUNC_0(VAR_0, VAR_2, VAR_1+8, 0);
}
