
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct dsa_port* dsa_ptr; } ;
struct dsa_port {int tag_ops; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,char*) ;
 struct net_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
       char *VAR_2)
{
 struct net_device *VAR_3 = FUNC_2(VAR_0);
 struct dsa_port *VAR_4 = VAR_3->dsa_ptr;

 return FUNC_1(VAR_2, "%s\n",
         FUNC_0(VAR_4->tag_ops));
}
