
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmi_sample {int qmi; int de_dir; int de_data; int de_ping; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct qmi_sample* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct qmi_sample *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->de_ping);
 FUNC_0(VAR_1->de_data);
 FUNC_0(VAR_1->de_dir);

 FUNC_2(&VAR_1->qmi);

 return 0;
}
