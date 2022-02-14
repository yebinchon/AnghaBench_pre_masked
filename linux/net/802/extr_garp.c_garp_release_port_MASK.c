
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int garp_port; } ;
struct garp_port {int * applicants; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct garp_port*,int ) ;
 int VAR_1 ;
 struct garp_port* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2)
{
 struct garp_port *VAR_3 = FUNC_2(VAR_2->garp_port);
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 <= VAR_0; VAR_4++) {
  if (FUNC_2(VAR_3->applicants[VAR_4]))
   return;
 }
 FUNC_0(VAR_2->garp_port, ((void*)0));
 FUNC_1(VAR_3, VAR_1);
}
