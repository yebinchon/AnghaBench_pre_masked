
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_long ;



__attribute__((used)) static zend_long FUNC_0(char *VAR_0, size_t VAR_1, int VAR_2, int *VAR_3)
{
 zend_long VAR_4;
 char *VAR_5 = (char *) &VAR_4;
 size_t VAR_6;

 VAR_4 = VAR_2 ? -1 : 0;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_5[VAR_3[VAR_6]] = *VAR_0++;
 }

 return VAR_4;
}
