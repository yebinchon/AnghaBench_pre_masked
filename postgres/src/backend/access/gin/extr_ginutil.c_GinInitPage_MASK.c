
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_4__ {int rightlink; int flags; } ;
typedef int Size ;
typedef int Page ;
typedef int GinPageOpaqueData ;
typedef TYPE_1__* GinPageOpaque ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

void
FUNC_3(Page VAR_1, uint32 VAR_2, Size VAR_3)
{
 GinPageOpaque VAR_4;

 FUNC_1(VAR_1, VAR_3, sizeof(GinPageOpaqueData));

 VAR_4 = FUNC_0(VAR_1);
 FUNC_2(VAR_4, 0, sizeof(GinPageOpaqueData));
 VAR_4->flags = VAR_2;
 VAR_4->rightlink = VAR_0;
}
