
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* storage; struct TYPE_4__* next; } ;
typedef TYPE_1__ stbds_string_block ;
struct TYPE_5__ {size_t remaining; size_t block; TYPE_1__* storage; } ;
typedef TYPE_2__ stbds_string_arena ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (char*) ;

char *FUNC_4(stbds_string_arena *VAR_2, char *VAR_3)
{
  char *VAR_4;
  size_t VAR_5 = FUNC_3(VAR_3)+1;
  if (VAR_5 > VAR_2->remaining) {

    size_t VAR_6 = VAR_2->block;



    VAR_6 = (size_t) (VAR_1) << (VAR_6>>1);


    if (VAR_6 < (size_t)(VAR_0))
      ++VAR_2->block;

    if (VAR_5 > VAR_6) {




      stbds_string_block *VAR_7 = (stbds_string_block *) FUNC_1(((void*)0), 0, sizeof(*VAR_7)-8 + VAR_5);
      FUNC_2(VAR_7->storage, VAR_3, VAR_5);
      if (VAR_2->storage) {

        VAR_7->next = VAR_2->storage->next;
        VAR_2->storage->next = VAR_7;
      } else {
        VAR_7->next = 0;
        VAR_2->storage = VAR_7;
        VAR_2->remaining = 0;
      }
      return VAR_7->storage;
    } else {
      stbds_string_block *VAR_8 = (stbds_string_block *) FUNC_1(((void*)0), 0, sizeof(*VAR_8)-8 + VAR_6);
      VAR_8->next = VAR_2->storage;
      VAR_2->storage = VAR_8;
      VAR_2->remaining = VAR_6;
    }
  }

  FUNC_0(VAR_5 <= VAR_2->remaining);
  VAR_4 = VAR_2->storage->storage + VAR_2->remaining - VAR_5;
  VAR_2->remaining -= VAR_5;
  FUNC_2(VAR_4, VAR_3, VAR_5);
  return VAR_4;
}
