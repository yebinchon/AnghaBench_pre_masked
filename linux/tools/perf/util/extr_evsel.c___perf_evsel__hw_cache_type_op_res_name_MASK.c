
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int ** VAR_0 ;
 int ** VAR_1 ;
 int ** VAR_2 ;
 int FUNC_0 (char*,size_t,char*,int ,int ,...) ;

int FUNC_1(u8 VAR_3, u8 VAR_4, u8 VAR_5,
         char *VAR_6, size_t VAR_7)
{
 if (VAR_5) {
  return FUNC_0(VAR_6, VAR_7, "%s-%s-%s", VAR_0[VAR_3][0],
     VAR_1[VAR_4][0],
     VAR_2[VAR_5][0]);
 }

 return FUNC_0(VAR_6, VAR_7, "%s-%s", VAR_0[VAR_3][0],
    VAR_1[VAR_4][1]);
}
