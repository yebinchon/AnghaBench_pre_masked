
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {int high; int * mid; int * low; int choice2; int choice; } ;
typedef TYPE_1__ lzma_length_encoder ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,size_t) ;

__attribute__((used)) static void
FUNC_3(lzma_length_encoder *VAR_3,
  const uint32_t VAR_4, const bool VAR_5)
{
 FUNC_0(VAR_3->choice);
 FUNC_0(VAR_3->choice2);

 for (size_t VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6) {
  FUNC_1(VAR_3->low[VAR_6], VAR_1);
  FUNC_1(VAR_3->mid[VAR_6], VAR_2);
 }

 FUNC_1(VAR_3->high, VAR_0);

 if (!VAR_5)
  for (size_t VAR_7 = 0; VAR_7 < VAR_4;
    ++VAR_7)
   FUNC_2(VAR_3, VAR_7);

 return;
}
