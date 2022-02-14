
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int stbds_array_header ;
struct TYPE_3__ {size_t capacity; scalar_t__ hash_table; scalar_t__ length; } ;


 void* FUNC_0 (int *,TYPE_1__*,size_t) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (void*) ;
 size_t FUNC_3 (void*) ;
 TYPE_1__* FUNC_4 (void*) ;

void *FUNC_5(void *VAR_1, size_t VAR_2, size_t VAR_3, size_t VAR_4)
{
  void *VAR_5;
  size_t VAR_6 = FUNC_3(VAR_1) + VAR_3;


  if (VAR_6 > VAR_4)
    VAR_4 = VAR_6;

  if (VAR_4 <= FUNC_2(VAR_1))
    return VAR_1;


  if (VAR_4 < 2 * FUNC_2(VAR_1))
    VAR_4 = 2 * FUNC_2(VAR_1);
  else if (VAR_4 < 4)
    VAR_4 = 4;

  VAR_5 = FUNC_0(((void*)0), (VAR_1) ? FUNC_4(VAR_1) : 0, VAR_2 * VAR_4 + sizeof(stbds_array_header));
  VAR_5 = (char *) VAR_5 + sizeof(stbds_array_header);
  if (VAR_1 == ((void*)0)) {
    FUNC_4(VAR_5)->length = 0;
    FUNC_4(VAR_5)->hash_table = 0;
  } else {
    FUNC_1(++VAR_0);
  }
  FUNC_4(VAR_5)->capacity = VAR_4;
  return VAR_5;
}
