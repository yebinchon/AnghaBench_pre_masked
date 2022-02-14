
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct list {int dummy; } ;
struct TYPE_3__ {struct list* buckets; } ;
typedef TYPE_1__ dictionary ;
typedef size_t DWORD ;


 size_t VAR_0 ;

__attribute__((used)) static inline struct list *FUNC_0(dictionary *VAR_1, DWORD VAR_2)
{
    return &VAR_1->buckets[VAR_2 % VAR_0];
}
