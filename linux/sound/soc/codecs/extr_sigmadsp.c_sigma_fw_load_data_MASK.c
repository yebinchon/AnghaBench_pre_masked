
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigmadsp_data {unsigned int length; int head; int data; int samplerates; int addr; } ;
struct sigmadsp {int data_list; } ;
struct sigma_fw_chunk_data {int data; int addr; } ;
struct sigma_fw_chunk {int samplerates; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sigmadsp_data* FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct sigmadsp *VAR_3,
 const struct sigma_fw_chunk *VAR_4, unsigned int VAR_5)
{
 const struct sigma_fw_chunk_data *VAR_6;
 struct sigmadsp_data *VAR_7;

 if (VAR_5 <= sizeof(*VAR_6))
  return -VAR_0;

 VAR_6 = (struct sigma_fw_chunk_data *)VAR_4;

 VAR_5 -= sizeof(*VAR_6);

 VAR_7 = FUNC_0(sizeof(*VAR_7) + VAR_5, VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->addr = FUNC_1(VAR_6->addr);
 VAR_7->length = VAR_5;
 VAR_7->samplerates = FUNC_2(VAR_4->samplerates);
 FUNC_4(VAR_7->data, VAR_6->data, VAR_5);
 FUNC_3(&VAR_7->head, &VAR_3->data_list);

 return 0;
}
