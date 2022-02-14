
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_4__ {int bloom_page_id; int flags; } ;
typedef int Page ;
typedef int BloomPageOpaqueData ;
typedef TYPE_1__* BloomPageOpaque ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

void
FUNC_3(Page VAR_2, uint16 VAR_3)
{
 BloomPageOpaque VAR_4;

 FUNC_1(VAR_2, VAR_0, sizeof(BloomPageOpaqueData));

 VAR_4 = FUNC_0(VAR_2);
 FUNC_2(VAR_4, 0, sizeof(BloomPageOpaqueData));
 VAR_4->flags = VAR_3;
 VAR_4->bloom_page_id = VAR_1;
}
