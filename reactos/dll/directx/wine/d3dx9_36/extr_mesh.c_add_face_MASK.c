
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct face_array {int count; int * items; } ;
typedef int face ;



__attribute__((used)) static inline face *FUNC_0(struct face_array *VAR_0)
{
    return &VAR_0->items[VAR_0->count++];
}
