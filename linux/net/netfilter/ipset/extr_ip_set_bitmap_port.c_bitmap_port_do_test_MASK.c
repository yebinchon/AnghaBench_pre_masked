
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmap_port_adt_elem {int id; } ;
struct bitmap_port {int members; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline int
FUNC_1(const struct bitmap_port_adt_elem *VAR_0,
      const struct bitmap_port *VAR_1, size_t VAR_2)
{
 return !!FUNC_0(VAR_0->id, VAR_1->members);
}
