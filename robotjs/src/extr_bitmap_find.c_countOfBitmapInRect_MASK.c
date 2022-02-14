
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int UTHashTable ;
struct TYPE_7__ {int width; } ;
typedef int MMRect ;
typedef int MMPoint ;
typedef TYPE_1__* MMBitmapRef ;


 int FUNC_0 (int ,size_t const,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__*,int *,int ,float,int ,int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;

size_t FUNC_4(MMBitmapRef VAR_1, MMBitmapRef VAR_2,
                           MMRect VAR_3, float VAR_4)
{
 size_t VAR_5 = 0;
 MMPoint VAR_6 = VAR_0;
 UTHashTable VAR_7;

 FUNC_3(&VAR_7, VAR_1);
 while (FUNC_2(VAR_1, VAR_2, &VAR_6, VAR_3,
                           VAR_4, VAR_6, &VAR_7) == 0) {
  const size_t VAR_8 = (VAR_2->width - VAR_1->width) + 1;
  ++VAR_5;
  FUNC_0(VAR_6, VAR_8, 0);
 }
 FUNC_1(&VAR_7);

 return VAR_5;
}
