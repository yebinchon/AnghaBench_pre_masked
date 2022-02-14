
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int gist_page_id; int flags; int rightlink; } ;
typedef int Size ;
typedef int Page ;
typedef int GISTPageOpaqueData ;
typedef TYPE_1__* GISTPageOpaque ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int) ;

void
FUNC_4(Buffer VAR_2, uint32 VAR_3)
{
 GISTPageOpaque VAR_4;
 Page VAR_5;
 Size VAR_6;

 VAR_6 = FUNC_1(VAR_2);
 VAR_5 = FUNC_0(VAR_2);
 FUNC_3(VAR_5, VAR_6, sizeof(GISTPageOpaqueData));

 VAR_4 = FUNC_2(VAR_5);


 VAR_4->rightlink = VAR_1;
 VAR_4->flags = VAR_3;
 VAR_4->gist_page_id = VAR_0;
}
