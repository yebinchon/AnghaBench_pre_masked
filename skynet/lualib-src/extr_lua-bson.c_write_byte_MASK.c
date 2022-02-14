
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bson {int size; int * ptr; } ;


 int FUNC_0 (struct bson*,int) ;

__attribute__((used)) static inline void
FUNC_1(struct bson *VAR_0, uint8_t VAR_1) {
 FUNC_0(VAR_0,1);
 VAR_0->ptr[VAR_0->size++] = VAR_1;
}
