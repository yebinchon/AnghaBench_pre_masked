
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;
struct pageline {scalar_t__* free_pages_size; } ;


 size_t VAR_0 ;

__attribute__((used)) static inline uint64_t FUNC_0(struct pageline *VAR_1) {
    uint64_t VAR_2 = 0, VAR_3;
    for (VAR_3=0; VAR_3<VAR_0; VAR_3++)
        VAR_2 += VAR_1->free_pages_size[VAR_3];
    return VAR_2;
}
