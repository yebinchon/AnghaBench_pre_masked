
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int data; } ;
typedef TYPE_2__ vncBuffer ;
typedef int uint8 ;
typedef int uint32 ;
struct TYPE_8__ {int bitsPerPixel; } ;
struct TYPE_10__ {TYPE_1__ serverFormat; } ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int,int,int ) ;
 int FUNC_2 (int ,int *,int) ;
 TYPE_5__* VAR_0 ;
 int FUNC_3 (TYPE_5__*,int,int,int,int,TYPE_2__*,int,int) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int,int,int) ;
 scalar_t__ FUNC_6 (int*,int*,int*,int*) ;

void
FUNC_7(uint32 VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 uint8 *VAR_6;
 vncBuffer *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_10 = VAR_11 = 0;
 VAR_8 = VAR_2;
 VAR_9 = VAR_3;

 VAR_1 *= FUNC_0(VAR_0->serverFormat.bitsPerPixel);
 VAR_6 = FUNC_1(VAR_1, VAR_4, VAR_5, FUNC_0(VAR_0->serverFormat.bitsPerPixel));
 if (VAR_6 == ((void*)0))
  return;

 VAR_7 = FUNC_5(VAR_4, VAR_5, 8);
 FUNC_2(VAR_7->data, VAR_6, VAR_4 * VAR_5 * 1);

 if (FUNC_6(&VAR_2, &VAR_3, &VAR_4, &VAR_5))
 {
  VAR_10 += VAR_2 - VAR_8;
  VAR_11 += VAR_3 - VAR_9;
  FUNC_3(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5, VAR_7, VAR_10, VAR_11);
 }
 FUNC_4(VAR_7);
}
