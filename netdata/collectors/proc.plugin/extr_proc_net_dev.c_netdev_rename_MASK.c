
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_rename {int processed; } ;
struct netdev {int hash; int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct netdev*,struct netdev_rename*) ;
 struct netdev_rename* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct netdev *VAR_1) {
    struct netdev_rename *VAR_2 = FUNC_1(VAR_1->name, VAR_1->hash);
    if(FUNC_2(VAR_2 && !VAR_2->processed)) {
        FUNC_0(VAR_1, VAR_2);
        VAR_2->processed = 1;
        VAR_0--;
    }
}
