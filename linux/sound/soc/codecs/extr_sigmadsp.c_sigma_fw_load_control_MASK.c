
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigmadsp_control {char* name; unsigned int num_bytes; int head; int samplerates; void* addr; } ;
struct sigmadsp {int ctrl_list; } ;
struct sigma_fw_chunk_control {int addr; int name; int num_bytes; } ;
struct sigma_fw_chunk {int samplerates; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct sigmadsp_control*) ;
 void* FUNC_1 (size_t,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (char*,int ,size_t) ;
 int FUNC_6 (int ,size_t) ;

__attribute__((used)) static int FUNC_7(struct sigmadsp *VAR_4,
 const struct sigma_fw_chunk *VAR_5, unsigned int VAR_6)
{
 const struct sigma_fw_chunk_control *VAR_7;
 struct sigmadsp_control *VAR_8;
 unsigned int VAR_9;
 size_t VAR_10;
 char *VAR_11;
 int VAR_12;

 if (VAR_6 <= sizeof(*VAR_7))
  return -VAR_0;

 VAR_7 = (const struct sigma_fw_chunk_control *)VAR_5;

 VAR_10 = VAR_6 - sizeof(*VAR_7);
 if (VAR_10 >= VAR_3)
  VAR_10 = VAR_3 - 1;


 if (!FUNC_6(VAR_7->name, VAR_10))
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_7->num_bytes);
 VAR_8 = FUNC_1(sizeof(*VAR_8) + VAR_9, VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_11 = FUNC_1(VAR_10 + 1, VAR_2);
 if (!VAR_11) {
  VAR_12 = -VAR_1;
  goto err_free_ctrl;
 }
 FUNC_5(VAR_11, VAR_7->name, VAR_10);
 VAR_11[VAR_10] = '\0';
 VAR_8->name = VAR_11;

 VAR_8->addr = FUNC_2(VAR_7->addr);
 VAR_8->num_bytes = VAR_9;
 VAR_8->samplerates = FUNC_3(VAR_5->samplerates);

 FUNC_4(&VAR_8->head, &VAR_4->ctrl_list);

 return 0;

err_free_ctrl:
 FUNC_0(VAR_8);

 return VAR_12;
}
