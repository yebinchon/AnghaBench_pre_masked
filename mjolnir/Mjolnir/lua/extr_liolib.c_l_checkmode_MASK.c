
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int * FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,int ) ;

__attribute__((used)) static int FUNC_3 (const char *VAR_1) {
  return (*VAR_1 != '\0' && FUNC_0("rwa", *(VAR_1++)) != ((void*)0) &&
         (*VAR_1 != '+' || (++VAR_1, 1)) &&
         (FUNC_2(VAR_1, VAR_0) == FUNC_1(VAR_1)));
}
