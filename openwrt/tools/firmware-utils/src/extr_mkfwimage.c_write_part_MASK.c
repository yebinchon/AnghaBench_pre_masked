
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void* name; void* magic; void* entryaddr; void* memaddr; void* baseaddr; void* part_size; void* data_size; void* index; } ;
typedef TYPE_2__ part_t ;
struct TYPE_6__ {int st_size; } ;
struct TYPE_8__ {char* partition_name; TYPE_1__ stats; int partition_entryaddr; int partition_memaddr; int partition_baseaddr; int partition_length; int partition_index; int filename; } ;
typedef TYPE_3__ part_data_t ;
struct TYPE_9__ {long pad; void* crc; } ;
typedef TYPE_4__ part_crc_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (long,void*,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (void*,char*,int ) ;
 int FUNC_5 (void*,int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int ,int,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(void* VAR_7, part_data_t* VAR_8)
{
 char* VAR_9;
 int VAR_10;
 part_t* VAR_11 = VAR_7;
 part_crc_t* VAR_12 = VAR_7 + sizeof(part_t) + VAR_8->stats.st_size;

 VAR_10 = FUNC_8(VAR_8->filename, VAR_4);
 if (VAR_10 < 0)
 {
  FUNC_0("Failed opening file '%s'\n", VAR_8->filename);
  return -1;
 }

 if ((VAR_9=(char*)FUNC_6(0, VAR_8->stats.st_size, VAR_6, VAR_3, VAR_10, 0)) == VAR_2)
 {
  FUNC_0("Failed mmaping memory for file '%s'\n", VAR_8->filename);
  FUNC_1(VAR_10);
  return -2;
 }

 FUNC_4(VAR_7 + sizeof(part_t), VAR_9, VAR_8->stats.st_size);
 FUNC_7(VAR_9, VAR_8->stats.st_size);

 FUNC_5(VAR_11->name, 0, VAR_5);
 FUNC_4(VAR_11->magic, VAR_1, VAR_0);
 FUNC_4(VAR_11->name, VAR_8->partition_name, VAR_5);

 VAR_11->index = FUNC_3(VAR_8->partition_index);
 VAR_11->data_size = FUNC_3(VAR_8->stats.st_size);
 VAR_11->part_size = FUNC_3(VAR_8->partition_length);
 VAR_11->baseaddr = FUNC_3(VAR_8->partition_baseaddr);
 VAR_11->memaddr = FUNC_3(VAR_8->partition_memaddr);
 VAR_11->entryaddr = FUNC_3(VAR_8->partition_entryaddr);

 VAR_12->crc = FUNC_3(FUNC_2(0L, VAR_7, VAR_8->stats.st_size + sizeof(part_t)));
 VAR_12->pad = 0L;

 return 0;
}
