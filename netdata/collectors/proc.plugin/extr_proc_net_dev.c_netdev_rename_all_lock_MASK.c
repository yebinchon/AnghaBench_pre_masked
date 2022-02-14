
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev {struct netdev* next; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct netdev*) ;
 int VAR_1 ;
 struct netdev* VAR_2 ;

__attribute__((used)) static inline void FUNC_3(void) {
    FUNC_0(&VAR_1);

    struct netdev *VAR_3;
    for(VAR_3 = VAR_2; VAR_3 ; VAR_3 = VAR_3->next)
        FUNC_2(VAR_3);

    VAR_0 = 0;
    FUNC_1(&VAR_1);
}
