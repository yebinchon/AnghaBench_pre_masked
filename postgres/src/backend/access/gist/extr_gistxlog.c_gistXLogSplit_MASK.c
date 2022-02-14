
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_6__ {int origleaf; int markfollowright; int npage; int orignsn; int origrlink; } ;
typedef TYPE_2__ gistxlogPageSplit ;
typedef int XLogRecPtr ;
struct TYPE_5__ {int num; } ;
struct TYPE_7__ {int lenlist; scalar_t__ list; TYPE_1__ block; int buffer; struct TYPE_7__* next; } ;
typedef TYPE_3__ SplitedPageLayout ;
typedef int GistNSN ;
typedef int Buffer ;
typedef int BlockNumber ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 (char*,int) ;

XLogRecPtr
FUNC_6(bool VAR_4,
     SplitedPageLayout *VAR_5,
     BlockNumber VAR_6, GistNSN VAR_7,
     Buffer VAR_8, bool VAR_9)
{
 gistxlogPageSplit VAR_10;
 SplitedPageLayout *VAR_11;
 int VAR_12 = 0;
 XLogRecPtr VAR_13;
 int VAR_14;

 for (VAR_11 = VAR_5; VAR_11; VAR_11 = VAR_11->next)
  VAR_12++;

 VAR_10.origrlink = VAR_6;
 VAR_10.orignsn = VAR_7;
 VAR_10.origleaf = VAR_4;
 VAR_10.npage = (uint16) VAR_12;
 VAR_10.markfollowright = VAR_9;

 FUNC_1();





 if (FUNC_0(VAR_8))
  FUNC_4(0, VAR_8, VAR_0);
 FUNC_5((char *) &VAR_10, sizeof(gistxlogPageSplit));

 VAR_14 = 1;
 for (VAR_11 = VAR_5; VAR_11; VAR_11 = VAR_11->next)
 {
  FUNC_4(VAR_14, VAR_11->buffer, VAR_1);
  FUNC_3(VAR_14, (char *) &(VAR_11->block.num), sizeof(int));
  FUNC_3(VAR_14, (char *) VAR_11->list, VAR_11->lenlist);
  VAR_14++;
 }

 VAR_13 = FUNC_2(VAR_2, VAR_3);

 return VAR_13;
}
