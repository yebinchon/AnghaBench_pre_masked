
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdata_static_thread {int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(void *VAR_2) {
    struct netdata_static_thread *VAR_3 = (struct netdata_static_thread *)VAR_2;
    VAR_3->enabled = VAR_1;

    FUNC_0("cleaning up...");

    VAR_3->enabled = VAR_0;
}
