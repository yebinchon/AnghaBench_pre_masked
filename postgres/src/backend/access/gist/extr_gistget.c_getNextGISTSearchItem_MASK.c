
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int queue; } ;
typedef int GISTSearchItem ;
typedef TYPE_1__* GISTScanOpaque ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static GISTSearchItem *
FUNC_2(GISTScanOpaque VAR_0)
{
 GISTSearchItem *VAR_1;

 if (!FUNC_0(VAR_0->queue))
 {
  VAR_1 = (GISTSearchItem *) FUNC_1(VAR_0->queue);
 }
 else
 {

  VAR_1 = ((void*)0);
 }


 return VAR_1;
}
