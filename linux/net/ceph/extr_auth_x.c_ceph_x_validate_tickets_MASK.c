
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_x_ticket_handler {int dummy; } ;
struct ceph_x_info {int have_keys; } ;
struct ceph_auth_client {int want_keys; struct ceph_x_info* private; } ;


 scalar_t__ FUNC_0 (struct ceph_x_ticket_handler*) ;
 struct ceph_x_ticket_handler* FUNC_1 (struct ceph_auth_client*,int) ;
 int FUNC_2 (struct ceph_x_ticket_handler*) ;
 scalar_t__ FUNC_3 (struct ceph_x_ticket_handler*) ;

__attribute__((used)) static void FUNC_4(struct ceph_auth_client *VAR_0, int *VAR_1)
{
 int VAR_2 = VAR_0->want_keys;
 struct ceph_x_info *VAR_3 = VAR_0->private;
 int VAR_4;

 *VAR_1 = VAR_0->want_keys & ~(VAR_3->have_keys);

 for (VAR_4 = 1; VAR_4 <= VAR_2; VAR_4 <<= 1) {
  struct ceph_x_ticket_handler *VAR_5;

  if (!(VAR_0->want_keys & VAR_4))
   continue;

  if (*VAR_1 & VAR_4)
   continue;

  VAR_5 = FUNC_1(VAR_0, VAR_4);
  if (FUNC_0(VAR_5)) {
   *VAR_1 |= VAR_4;
   continue;
  }

  if (FUNC_3(VAR_5))
   *VAR_1 |= VAR_4;
  if (!FUNC_2(VAR_5))
   VAR_3->have_keys &= ~VAR_4;
 }
}
