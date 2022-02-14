
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xmlChar ;


 size_t VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_0 (int ,char*) ;
 size_t VAR_2 ;
 int ** VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (scalar_t__ const*,int) ;

__attribute__((used)) static
void FUNC_2(const xmlChar *VAR_5) {
    const xmlChar *VAR_6;

    if (VAR_5 == ((void*)0))
 return;
    while (*VAR_5 != 0) {
 if (VAR_2 >= VAR_0) {
     FUNC_0(VAR_4, "MAX_PATHS reached: too many paths\n");
     return;
 }
 VAR_6 = VAR_5;
 while ((*VAR_6 == ' ') || (*VAR_6 == VAR_1))
     VAR_6++;
 VAR_5 = VAR_6;
 while ((*VAR_6 != 0) && (*VAR_6 != ' ') && (*VAR_6 != VAR_1))
     VAR_6++;
 if (VAR_6 != VAR_5) {
     VAR_3[VAR_2] = FUNC_1(VAR_5, VAR_6 - VAR_5);
     if (VAR_3[VAR_2] != ((void*)0))
  VAR_2++;
     VAR_5 = VAR_6;
 }
    }
}
