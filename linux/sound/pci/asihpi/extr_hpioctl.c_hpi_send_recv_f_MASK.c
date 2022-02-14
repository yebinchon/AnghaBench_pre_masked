
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpi_response {int error; } ;
struct hpi_message {scalar_t__ adapter_index; scalar_t__ object; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hpi_message*,struct hpi_response*,struct file*) ;

__attribute__((used)) static void FUNC_1(struct hpi_message *VAR_3, struct hpi_response *VAR_4,
 struct file *VAR_5)
{
 if ((VAR_3->adapter_index >= VAR_1)
  && (VAR_3->object != VAR_2))
  VAR_4->error = VAR_0;
 else
  FUNC_0(VAR_3, VAR_4, VAR_5);
}
