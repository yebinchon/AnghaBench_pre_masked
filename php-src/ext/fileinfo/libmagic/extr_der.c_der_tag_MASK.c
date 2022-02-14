
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;


 size_t VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*,size_t,char*,size_t) ;
 int FUNC_1 (char*,int ,size_t) ;

__attribute__((used)) static const char *
FUNC_2(char *VAR_2, size_t VAR_3, uint32_t VAR_4)
{
 if (VAR_4 < VAR_0)
  FUNC_1(VAR_2, VAR_1[VAR_4], VAR_3);
 else
  FUNC_0(VAR_2, VAR_3, "%#x", VAR_4);
 return VAR_2;
}
