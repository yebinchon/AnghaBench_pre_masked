
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int garp_port; } ;
struct garp_port {int * applicants; } ;
struct garp_attr {int dummy; } ;
struct garp_application {size_t type; } ;
struct garp_applicant {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct garp_attr* FUNC_0 (struct garp_applicant*,void const*,int ,int ) ;
 int FUNC_1 (struct garp_applicant*,struct garp_attr*,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(const struct net_device *VAR_2,
        const struct garp_application *VAR_3,
        const void *VAR_4, u8 VAR_5, u8 VAR_6)
{
 struct garp_port *VAR_7 = FUNC_2(VAR_2->garp_port);
 struct garp_applicant *VAR_8 = FUNC_2(VAR_7->applicants[VAR_3->type]);
 struct garp_attr *VAR_9;

 FUNC_3(&VAR_8->lock);
 VAR_9 = FUNC_0(VAR_8, VAR_4, VAR_5, VAR_6);
 if (!VAR_9) {
  FUNC_4(&VAR_8->lock);
  return -VAR_0;
 }
 FUNC_1(VAR_8, VAR_9, VAR_1);
 FUNC_4(&VAR_8->lock);
 return 0;
}
