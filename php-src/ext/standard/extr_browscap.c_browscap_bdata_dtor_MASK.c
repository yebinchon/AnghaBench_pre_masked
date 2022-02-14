
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {size_t kv_used; char* filename; TYPE_2__* kv; TYPE_2__* htab; } ;
typedef TYPE_1__ browser_data ;
struct TYPE_6__ {int value; int key; } ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(browser_data *VAR_0, int VAR_1)
{
 if (VAR_0->htab != ((void*)0)) {
  uint32_t VAR_2;

  FUNC_1(VAR_0->htab);
  FUNC_0(VAR_0->htab, VAR_1);
  VAR_0->htab = ((void*)0);

  for (VAR_2 = 0; VAR_2 < VAR_0->kv_used; VAR_2++) {
   FUNC_2(VAR_0->kv[VAR_2].key);
   FUNC_2(VAR_0->kv[VAR_2].value);
  }
  FUNC_0(VAR_0->kv, VAR_1);
  VAR_0->kv = ((void*)0);
 }
 VAR_0->filename[0] = '\0';
}
