
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct dsa_port* dsa_ptr; } ;
struct dsa_port {int index; } ;


 int VAR_0 ;
 size_t FUNC_0 (char*,size_t,char*,int) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1,
      char *VAR_2, size_t VAR_3)
{
 struct dsa_port *VAR_4 = VAR_1->dsa_ptr;

 if (FUNC_0(VAR_2, VAR_3, "p%d", VAR_4->index) >= VAR_3)
  return -VAR_0;

 return 0;
}
