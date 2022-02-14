
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {char* signature; int* reserved; int filenum; void* attributes; void* group_id; void* user_id; } ;
typedef TYPE_1__ iso9660_xa_t ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;

iso9660_xa_t *
FUNC_2 (iso9660_xa_t *VAR_0, uint16_t VAR_1, uint16_t VAR_2, uint16_t VAR_3,
       uint8_t VAR_4)
{
  FUNC_0 (VAR_0 != ((void*)0));

  VAR_0->user_id = FUNC_1 (VAR_1);
  VAR_0->group_id = FUNC_1 (VAR_2);
  VAR_0->attributes = FUNC_1 (VAR_3);

  VAR_0->signature[0] = 'X';
  VAR_0->signature[1] = 'A';

  VAR_0->filenum = VAR_4;

  VAR_0->reserved[0]
    = VAR_0->reserved[1]
    = VAR_0->reserved[2]
    = VAR_0->reserved[3]
    = VAR_0->reserved[4] = 0x00;

  return VAR_0;
}
