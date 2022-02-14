
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_x_ticket_handler {int have_key; scalar_t__ expires; } ;


 scalar_t__ FUNC_0 () ;

__attribute__((used)) static bool FUNC_1(struct ceph_x_ticket_handler *VAR_0)
{
 if (VAR_0->have_key) {
  if (FUNC_0() >= VAR_0->expires)
   VAR_0->have_key = 0;
 }

 return VAR_0->have_key;
}
