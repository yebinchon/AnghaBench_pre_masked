
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int SDL_mutex ;
typedef int SDL_cond ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static inline int
FUNC_3(SDL_cond *VAR_0, SDL_mutex *VAR_1, uint32_t VAR_2) {
    int VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
    if (VAR_3 < 0) {
        FUNC_0("Could not wait on condition with timeout");
        FUNC_2();
    }
    return VAR_3;
}
