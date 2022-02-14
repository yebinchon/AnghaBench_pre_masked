
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swaybar {int running; int display; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(int VAR_0, short VAR_1, void *VAR_2) {
 struct swaybar *VAR_3 = VAR_2;
 if (FUNC_0(VAR_3->display) == -1) {
  VAR_3->running = 0;
 }
}
