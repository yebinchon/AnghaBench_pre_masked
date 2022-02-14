
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int itemIdSortData ;
typedef TYPE_1__* itemIdSort ;
struct TYPE_8__ {int lp_off; } ;
struct TYPE_7__ {int pd_special; int pd_upper; } ;
struct TYPE_6__ {int alignedlen; int itemoff; scalar_t__ offsetindex; } ;
typedef TYPE_2__* PageHeader ;
typedef scalar_t__ Page ;
typedef int Offset ;
typedef TYPE_3__* ItemId ;


 TYPE_3__* FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int,int,int ) ;

__attribute__((used)) static void
FUNC_3(itemIdSort VAR_1, int VAR_2, Page VAR_3)
{
 PageHeader VAR_4 = (PageHeader) VAR_3;
 Offset VAR_5;
 int VAR_6;


 FUNC_2((char *) VAR_1, VAR_2, sizeof(itemIdSortData),
    VAR_0);

 VAR_5 = VAR_4->pd_special;
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
 {
  itemIdSort VAR_7 = &VAR_1[VAR_6];
  ItemId VAR_8;

  VAR_8 = FUNC_0(VAR_3, VAR_7->offsetindex + 1);
  VAR_5 -= VAR_7->alignedlen;
  FUNC_1((char *) VAR_3 + VAR_5,
    (char *) VAR_3 + VAR_7->itemoff,
    VAR_7->alignedlen);
  VAR_8->lp_off = VAR_5;
 }

 VAR_4->pd_upper = VAR_5;
}
