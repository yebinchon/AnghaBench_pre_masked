
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpi_response {scalar_t__ error; } ;
struct hpi_message {int dummy; } ;
struct hpi_hw_obj {int prHDCR; } ;
struct hpi_adapter_obj {struct hpi_hw_obj* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hpi_adapter_obj*,int ,int ,int ) ;
 int FUNC_1 (struct hpi_adapter_obj*) ;
 int FUNC_2 (struct hpi_adapter_obj*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct hpi_adapter_obj *VAR_3,
 struct hpi_message *VAR_4, struct hpi_response *VAR_5)
{
 struct hpi_hw_obj *VAR_6;

 if (!VAR_3) {
  VAR_5->error = VAR_2;
  return;
 }
 VAR_6 = VAR_3->priv;


 FUNC_0(VAR_3, 0, VAR_0, 0);

 FUNC_3(VAR_1, VAR_6->prHDCR);

 FUNC_1(VAR_3);
 FUNC_2(VAR_3);
 VAR_5->error = 0;
}
