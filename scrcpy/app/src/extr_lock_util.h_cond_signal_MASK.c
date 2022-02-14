
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SDL_cond ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;

__attribute__((used)) static inline void
FUNC_3(SDL_cond *VAR_0) {
    if (FUNC_1(VAR_0)) {
        FUNC_0("Could not signal a condition");
        FUNC_2();
    }
}
