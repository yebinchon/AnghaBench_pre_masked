
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int end; int start; } ;
struct fl_flow_mask {TYPE_1__ range; int key; } ;


 int FUNC_0 (size_t,int) ;
 int FUNC_1 (size_t,int) ;

__attribute__((used)) static void FUNC_2(struct fl_flow_mask *VAR_0)
{
 const u8 *VAR_1 = (const u8 *) &VAR_0->key;
 size_t VAR_2 = sizeof(VAR_0->key);
 size_t VAR_3, VAR_4 = 0, VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (VAR_1[VAR_3]) {
   VAR_4 = VAR_3;
   break;
  }
 }
 VAR_5 = VAR_4;
 for (VAR_3 = VAR_2 - 1; VAR_3 != VAR_4; VAR_3--) {
  if (VAR_1[VAR_3]) {
   VAR_5 = VAR_3;
   break;
  }
 }
 VAR_0->range.start = FUNC_0(VAR_4, sizeof(long));
 VAR_0->range.end = FUNC_1(VAR_5 + 1, sizeof(long));
}
