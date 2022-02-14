
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct word_array {scalar_t__ count; int * items; } ;
struct dynamic_array {int dummy; } ;
typedef int WORD ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dynamic_array*,scalar_t__,int) ;

__attribute__((used)) static HRESULT FUNC_1(struct word_array *VAR_2, WORD VAR_3)
{
    if (!FUNC_0((struct dynamic_array *)VAR_2, VAR_2->count + 1, sizeof(VAR_2->items[0])))
        return VAR_0;

    VAR_2->items[VAR_2->count++] = VAR_3;
    return VAR_1;
}
