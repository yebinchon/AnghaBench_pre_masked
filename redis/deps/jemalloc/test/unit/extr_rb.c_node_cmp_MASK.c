
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ key; int magic; } ;
typedef TYPE_1__ node_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;

__attribute__((used)) static int
FUNC_1(const node_t *VAR_1, const node_t *VAR_2) {
 int VAR_3;

 FUNC_0(VAR_1->magic, VAR_0, "Bad magic");
 FUNC_0(VAR_2->magic, VAR_0, "Bad magic");

 VAR_3 = (VAR_1->key > VAR_2->key) - (VAR_1->key < VAR_2->key);
 if (VAR_3 == 0) {




  VAR_3 = (((uintptr_t)VAR_1) > ((uintptr_t)VAR_2))
      - (((uintptr_t)VAR_1) < ((uintptr_t)VAR_2));
 }
 return VAR_3;
}
