
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int magic; } ;
typedef TYPE_1__ node_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_1__ const*,TYPE_1__ const*) ;

__attribute__((used)) static int
FUNC_2(const node_t *VAR_1, const node_t *VAR_2) {

 FUNC_0(VAR_1->magic, VAR_0, "Bad magic");
 FUNC_0(VAR_2->magic, VAR_0, "Bad magic");

 return FUNC_1(VAR_1, VAR_2);
}
