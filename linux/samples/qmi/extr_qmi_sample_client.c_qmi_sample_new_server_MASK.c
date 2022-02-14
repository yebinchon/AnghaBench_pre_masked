
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_qrtr {int member_2; int member_1; int member_0; } ;
struct qmi_service {struct platform_device* priv; int port; int node; } ;
struct qmi_handle {int dummy; } ;
struct platform_device {int dummy; } ;
typedef int sq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct platform_device*,struct sockaddr_qrtr*,int) ;
 struct platform_device* FUNC_2 (char*,int ) ;
 int FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct qmi_handle *VAR_3,
     struct qmi_service *VAR_4)
{
 struct platform_device *VAR_5;
 struct sockaddr_qrtr VAR_6 = { VAR_0, VAR_4->node, VAR_4->port };
 int VAR_7;

 VAR_5 = FUNC_2("qmi_sample_client", VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_7 = FUNC_1(VAR_5, &VAR_6, sizeof(VAR_6));
 if (VAR_7)
  goto err_put_device;

 VAR_7 = FUNC_0(VAR_5);
 if (VAR_7)
  goto err_put_device;

 VAR_4->priv = VAR_5;

 return 0;

err_put_device:
 FUNC_3(VAR_5);

 return VAR_7;
}
