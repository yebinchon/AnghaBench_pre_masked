
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hpi_response_header {int version; int error; int type; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hpi_response_header*,int ,int ) ;

void FUNC_1(struct hpi_response_header *VAR_2, u16 VAR_3,
 u16 VAR_4, u16 VAR_5)
{
 (void)VAR_4;
 (void)VAR_5;
 FUNC_0(VAR_2, 0, VAR_3);
 VAR_2->size = VAR_3;
 VAR_2->version = 1;
 VAR_2->type = VAR_1;
 VAR_2->error = VAR_0;
}
