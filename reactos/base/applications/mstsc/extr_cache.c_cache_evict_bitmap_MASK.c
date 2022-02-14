
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8 ;
typedef size_t uint16 ;
struct TYPE_2__ {int next; int previous; scalar_t__ bitmap; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (size_t) ;
 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int * VAR_2 ;
 size_t* VAR_3 ;
 int FUNC_2 (size_t,size_t,int ) ;
 int FUNC_3 (scalar_t__) ;

void
FUNC_4(uint8 VAR_4)
{
 uint16 VAR_5;
 int VAR_6;

 if (!FUNC_1(VAR_4))
  return;

 VAR_5 = VAR_3[VAR_4];
 VAR_6 = VAR_1[VAR_4][VAR_5].next;
 FUNC_0(("evict bitmap: id=%d idx=%d n_idx=%d bmp=%p\n", VAR_4, VAR_5, VAR_6,
      VAR_1[VAR_4][VAR_5].bitmap));

 FUNC_3(VAR_1[VAR_4][VAR_5].bitmap);
 --VAR_2[VAR_4];
 VAR_1[VAR_4][VAR_5].bitmap = 0;

 VAR_3[VAR_4] = VAR_6;
 VAR_1[VAR_4][VAR_6].previous = VAR_0;

 FUNC_2(VAR_4, VAR_5, 0);
}
