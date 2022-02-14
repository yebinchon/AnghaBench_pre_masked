
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int data; } ;
typedef TYPE_2__ vncBuffer ;
typedef int uint32 ;
struct TYPE_6__ {int bitsPerPixel; } ;
struct TYPE_8__ {TYPE_1__ serverFormat; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int,int,int ,int ) ;
 TYPE_4__* VAR_0 ;
 TYPE_2__* FUNC_2 (TYPE_4__*,int,int,int,int) ;

void
FUNC_3(uint32 VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 vncBuffer *VAR_6;

 VAR_6 = FUNC_2(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5);
 VAR_1 *= FUNC_0(VAR_0->serverFormat.bitsPerPixel);
 FUNC_1(VAR_1, VAR_4, VAR_5, VAR_4, FUNC_0(VAR_0->serverFormat.bitsPerPixel),
     (VAR_6->data));
}
