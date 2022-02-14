
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_4__ {int spgist_page_id; int flags; } ;
typedef int SpGistPageOpaqueData ;
typedef TYPE_1__* SpGistPageOpaque ;
typedef int Page ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

void
FUNC_4(Page VAR_2, uint16 VAR_3)
{
 SpGistPageOpaque VAR_4;

 FUNC_1(VAR_2, VAR_0, FUNC_0(sizeof(SpGistPageOpaqueData)));
 VAR_4 = FUNC_2(VAR_2);
 FUNC_3(VAR_4, 0, sizeof(SpGistPageOpaqueData));
 VAR_4->flags = VAR_3;
 VAR_4->spgist_page_id = VAR_1;
}
