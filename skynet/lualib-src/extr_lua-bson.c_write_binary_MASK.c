
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bson {scalar_t__ size; scalar_t__ ptr; } ;


 int FUNC_0 (struct bson*,size_t) ;
 int FUNC_1 (scalar_t__,void const*,size_t) ;
 int FUNC_2 (struct bson*) ;
 int FUNC_3 (struct bson*,size_t,int) ;

__attribute__((used)) static void
FUNC_4(struct bson *VAR_0, const void * VAR_1, size_t VAR_2) {
 int VAR_3 = FUNC_2(VAR_0);
 FUNC_0(VAR_0,VAR_2);
 FUNC_1(VAR_0->ptr + VAR_0->size, VAR_1, VAR_2);
 VAR_0->size+=VAR_2;
 FUNC_3(VAR_0, VAR_2-1, VAR_3);
}
