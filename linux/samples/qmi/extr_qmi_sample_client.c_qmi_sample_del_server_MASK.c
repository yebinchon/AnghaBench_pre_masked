
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmi_service {struct platform_device* priv; } ;
struct qmi_handle {int dummy; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (struct platform_device*) ;

__attribute__((used)) static void FUNC_1(struct qmi_handle *VAR_0,
      struct qmi_service *VAR_1)
{
 struct platform_device *VAR_2 = VAR_1->priv;

 FUNC_0(VAR_2);
}
