
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; int rank; } ;
typedef TYPE_1__ witness_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(const witness_t *VAR_0, void *VAR_1, const witness_t *VAR_2,
    void *VAR_3) {
 FUNC_1(VAR_0->rank, VAR_2->rank, "Witnesses should have equal rank");

 FUNC_0(VAR_1 == (void *)VAR_0);
 FUNC_0(VAR_3 == (void *)VAR_2);

 return -FUNC_2(VAR_0->name, VAR_2->name);
}
