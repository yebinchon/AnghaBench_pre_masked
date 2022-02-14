
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int cur_pos_data; int capacity; TYPE_2__* pxo; void* pdata; } ;
typedef TYPE_3__ parse_buffer ;
typedef int ULONG ;
struct TYPE_6__ {TYPE_1__* root; } ;
struct TYPE_5__ {void* pdata; } ;
typedef void* LPBYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,void*) ;
 int VAR_1 ;
 int FUNC_3 (void*,void*,int) ;

__attribute__((used)) static BOOL FUNC_4(parse_buffer * VAR_2, ULONG VAR_3)
{
  if ((VAR_2->cur_pos_data + VAR_3) > VAR_2->capacity)
  {
    LPBYTE VAR_4;
    ULONG VAR_5 = VAR_2->capacity ? 2 * VAR_2->capacity : 100000;

    VAR_4 = FUNC_1(FUNC_0(), 0, VAR_5);
    if (!VAR_4)
      return VAR_0;
    FUNC_3(VAR_4, VAR_2->pdata, VAR_2->cur_pos_data);
    FUNC_2(FUNC_0(), 0, VAR_2->pdata);
    VAR_2->capacity = VAR_5;
    VAR_2->pdata = VAR_4;
    VAR_2->pxo->root->pdata = VAR_4;
  }
  return VAR_1;
}
