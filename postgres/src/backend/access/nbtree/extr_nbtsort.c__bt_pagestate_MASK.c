
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_6__ {int btps_full; int * btps_next; scalar_t__ btps_level; int btps_lastoff; int * btps_lowkey; scalar_t__ btps_blkno; int btps_page; } ;
struct TYPE_5__ {int index; int btws_pages_alloced; } ;
typedef TYPE_1__ BTWriteState ;
typedef TYPE_2__ BTPageState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static BTPageState *
FUNC_3(BTWriteState *VAR_4, uint32 VAR_5)
{
 BTPageState *VAR_6 = (BTPageState *) FUNC_2(sizeof(BTPageState));


 VAR_6->btps_page = FUNC_1(VAR_5);


 VAR_6->btps_blkno = VAR_4->btws_pages_alloced++;

 VAR_6->btps_lowkey = ((void*)0);

 VAR_6->btps_lastoff = VAR_3;
 VAR_6->btps_level = VAR_5;

 if (VAR_5 > 0)
  VAR_6->btps_full = (VAR_0 * (100 - VAR_2) / 100);
 else
  VAR_6->btps_full = FUNC_0(VAR_4->index,
                VAR_1);

 VAR_6->btps_next = ((void*)0);

 return VAR_6;
}
