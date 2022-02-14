
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct size {int dummy; } ;
struct screen {int window; struct size windowed_window_size; scalar_t__ fullscreen; } ;


 struct size FUNC_0 (int ) ;

__attribute__((used)) static struct size
FUNC_1(const struct screen *VAR_0) {
    if (VAR_0->fullscreen) {
        return VAR_0->windowed_window_size;
    }
    return FUNC_0(VAR_0->window);
}
