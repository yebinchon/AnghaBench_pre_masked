
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_qrtr {int sq_node; int sq_port; } ;
struct sockaddr {int dummy; } ;
struct TYPE_3__ {int sock; } ;
struct qmi_sample {TYPE_1__ qmi; void* de_dir; void* de_data; void* de_ping; } ;
struct platform_device {int dev; } ;
typedef int path ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (char*,int ) ;
 void* FUNC_3 (char*,int,void*,struct qmi_sample*,int *) ;
 int FUNC_4 (void*) ;
 struct sockaddr_qrtr* FUNC_5 (int *) ;
 struct qmi_sample* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int ,struct sockaddr*,int,int ) ;
 int VAR_4 ;
 int FUNC_8 (struct platform_device*,struct qmi_sample*) ;
 int FUNC_9 (char*) ;
 int VAR_5 ;
 int FUNC_10 (TYPE_1__*,int ,int *,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_12 (char*,int,char*,int,int) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_7)
{
 struct sockaddr_qrtr *VAR_8;
 struct qmi_sample *VAR_9;
 char VAR_10[20];
 int VAR_11;

 VAR_9 = FUNC_6(&VAR_7->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_11 = FUNC_10(&VAR_9->qmi, VAR_2,
         ((void*)0),
         VAR_6);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_8 = FUNC_5(&VAR_7->dev);
 VAR_11 = FUNC_7(VAR_9->qmi.sock, (struct sockaddr *)VAR_8,
        sizeof(*VAR_8), 0);
 if (VAR_11 < 0) {
  FUNC_9("failed to connect to remote service port\n");
  goto err_release_qmi_handle;
 }

 FUNC_12(VAR_10, sizeof(VAR_10), "%d:%d", VAR_8->sq_node, VAR_8->sq_port);

 VAR_9->de_dir = FUNC_2(VAR_10, VAR_5);
 if (FUNC_0(VAR_9->de_dir)) {
  VAR_11 = FUNC_1(VAR_9->de_dir);
  goto err_release_qmi_handle;
 }

 VAR_9->de_data = FUNC_3("data", 0600, VAR_9->de_dir,
           VAR_9, &VAR_3);
 if (FUNC_0(VAR_9->de_data)) {
  VAR_11 = FUNC_1(VAR_9->de_data);
  goto err_remove_de_dir;
 }

 VAR_9->de_ping = FUNC_3("ping", 0600, VAR_9->de_dir,
           VAR_9, &VAR_4);
 if (FUNC_0(VAR_9->de_ping)) {
  VAR_11 = FUNC_1(VAR_9->de_ping);
  goto err_remove_de_data;
 }

 FUNC_8(VAR_7, VAR_9);

 return 0;

err_remove_de_data:
 FUNC_4(VAR_9->de_data);
err_remove_de_dir:
 FUNC_4(VAR_9->de_dir);
err_release_qmi_handle:
 FUNC_11(&VAR_9->qmi);

 return VAR_11;
}
