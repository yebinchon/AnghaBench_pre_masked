
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpi_response {int dummy; } ;
struct hpi_message {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*,struct file*) ;

int FUNC_2(struct file *VAR_2)
{
 struct hpi_message VAR_3;
 struct hpi_response VAR_4;



 FUNC_0(&VAR_3, &VAR_4, VAR_0,
  VAR_1);
 FUNC_1(&VAR_3, &VAR_4, VAR_2);
 return 0;
}
