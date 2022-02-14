
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void* entryaddr; void* memaddr; void* baseaddr; void* part_size; void* data_size; void* index; int name; int magic; } ;
typedef TYPE_2__ part_t ;
struct TYPE_6__ {int st_size; } ;
struct TYPE_8__ {TYPE_1__ stats; int partition_entryaddr; int partition_memaddr; int partition_baseaddr; int partition_length; int partition_index; int partition_name; int filename; } ;
typedef TYPE_3__ part_data_t ;
struct TYPE_9__ {long pad; void* crc; } ;
typedef TYPE_4__ part_crc_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (long,void*,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (void*,char*,int ) ;
 int FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int ,int,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int) ;

__attribute__((used)) static int FUNC_10(void* VAR_6, part_data_t* VAR_7)
{
 char* VAR_8;
 int VAR_9;
 part_t* VAR_10 = VAR_6;
 part_crc_t* VAR_11 = VAR_6 + sizeof(part_t) + VAR_7->stats.st_size;

 VAR_9 = FUNC_8(VAR_7->filename, VAR_4);
 if (VAR_9 < 0) {
  FUNC_0("Failed opening file '%s'\n", VAR_7->filename);
  return -1;
 }

 if ((VAR_8=(char*)FUNC_6(0, VAR_7->stats.st_size, VAR_5, VAR_3, VAR_9, 0)) == VAR_2) {
  FUNC_0("Failed mmaping memory for file '%s'\n", VAR_7->filename);
  FUNC_1(VAR_9);
  return -2;
 }

 FUNC_4(VAR_6 + sizeof(part_t), VAR_8, VAR_7->stats.st_size);
 FUNC_7(VAR_8, VAR_7->stats.st_size);

 FUNC_5(VAR_10->name, 0, sizeof(VAR_10->name));
 FUNC_9(VAR_10->magic, VAR_1, VAR_0);
 FUNC_9(VAR_10->name, VAR_7->partition_name, sizeof(VAR_10->name));
 VAR_10->index = FUNC_3(VAR_7->partition_index);
 VAR_10->data_size = FUNC_3(VAR_7->stats.st_size);
 VAR_10->part_size = FUNC_3(VAR_7->partition_length);
 VAR_10->baseaddr = FUNC_3(VAR_7->partition_baseaddr);
 VAR_10->memaddr = FUNC_3(VAR_7->partition_memaddr);
 VAR_10->entryaddr = FUNC_3(VAR_7->partition_entryaddr);

 VAR_11->crc = FUNC_3(FUNC_2(0L, VAR_6, VAR_7->stats.st_size + sizeof(part_t)));
 VAR_11->pad = 0L;

 return 0;
}
