
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dynamic_array {int capacity; void* items; } ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,int) ;
 void* FUNC_2 (int ,int ,void*,int) ;
 int VAR_1 ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static BOOL FUNC_4(struct dynamic_array *VAR_2, int VAR_3, int VAR_4)
{
    if (VAR_3 > VAR_2->capacity) {
        void *VAR_5;
        int VAR_6;
        if (VAR_2->items && VAR_2->capacity) {
            VAR_6 = FUNC_3(VAR_2->capacity * 2, VAR_3);
            VAR_5 = FUNC_2(FUNC_0(), 0, VAR_2->items, VAR_6 * VAR_4);
        } else {
            VAR_6 = FUNC_3(16, VAR_3);
            VAR_5 = FUNC_1(FUNC_0(), 0, VAR_6 * VAR_4);
        }
        if (!VAR_5)
            return VAR_0;
        VAR_2->items = VAR_5;
        VAR_2->capacity = VAR_6;
    }
    return VAR_1;
}
