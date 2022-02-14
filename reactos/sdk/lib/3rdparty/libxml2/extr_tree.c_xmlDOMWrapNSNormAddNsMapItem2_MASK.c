
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlNsPtr ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(xmlNsPtr **VAR_0, int *VAR_1, int *VAR_2,
   xmlNsPtr VAR_3, xmlNsPtr VAR_4)
{
    if (*VAR_0 == ((void*)0)) {
 *VAR_0 = (xmlNsPtr *) FUNC_0(6 * sizeof(xmlNsPtr));
 if (*VAR_0 == ((void*)0)) {
     FUNC_2("alloc ns map item");
     return(-1);
 }
 *VAR_1 = 3;
 *VAR_2 = 0;
    } else if ((*VAR_2) >= (*VAR_1)) {
 *VAR_1 *= 2;
 *VAR_0 = (xmlNsPtr *) FUNC_1(*VAR_0,
     (*VAR_1) * 2 * sizeof(xmlNsPtr));
 if (*VAR_0 == ((void*)0)) {
     FUNC_2("realloc ns map item");
     return(-1);
 }
    }
    (*VAR_0)[2 * (*VAR_2)] = VAR_3;
    (*VAR_0)[2 * (*VAR_2) +1] = VAR_4;
    (*VAR_2)++;
    return (0);
}
