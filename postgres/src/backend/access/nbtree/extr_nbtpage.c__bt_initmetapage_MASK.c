
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint32 ;
struct TYPE_7__ {double btm_last_cleanup_num_heap_tuples; int btm_oldest_btpo_xact; void* btm_fastlevel; void* btm_fastroot; void* btm_level; void* btm_root; int btm_version; int btm_magic; } ;
struct TYPE_6__ {int btpo_flags; } ;
struct TYPE_5__ {int pd_lower; } ;
typedef TYPE_1__* PageHeader ;
typedef scalar_t__ Page ;
typedef void* BlockNumber ;
typedef TYPE_2__* BTPageOpaque ;
typedef TYPE_3__ BTMetaPageData ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;

void
FUNC_3(Page VAR_5, BlockNumber VAR_6, uint32 VAR_7)
{
 BTMetaPageData *VAR_8;
 BTPageOpaque VAR_9;

 FUNC_2(VAR_5, VAR_0);

 VAR_8 = FUNC_0(VAR_5);
 VAR_8->btm_magic = VAR_2;
 VAR_8->btm_version = VAR_3;
 VAR_8->btm_root = VAR_6;
 VAR_8->btm_level = VAR_7;
 VAR_8->btm_fastroot = VAR_6;
 VAR_8->btm_fastlevel = VAR_7;
 VAR_8->btm_oldest_btpo_xact = VAR_4;
 VAR_8->btm_last_cleanup_num_heap_tuples = -1.0;

 VAR_9 = (BTPageOpaque) FUNC_1(VAR_5);
 VAR_9->btpo_flags = VAR_1;






 ((PageHeader) VAR_5)->pd_lower =
  ((char *) VAR_8 + sizeof(BTMetaPageData)) - (char *) VAR_5;
}
