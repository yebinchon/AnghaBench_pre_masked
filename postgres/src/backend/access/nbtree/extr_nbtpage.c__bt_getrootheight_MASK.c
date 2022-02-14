
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ btm_root; scalar_t__ btm_magic; scalar_t__ btm_version; scalar_t__ btm_fastroot; int btm_fastlevel; } ;
struct TYPE_9__ {int * rd_amcache; int rd_indexcxt; } ;
typedef TYPE_1__* Relation ;
typedef int Buffer ;
typedef TYPE_2__ BTMetaPageData ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int ,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 TYPE_2__* FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int *,TYPE_2__*,int) ;

int
FUNC_6(Relation VAR_6)
{
 BTMetaPageData *VAR_7;

 if (VAR_6->rd_amcache == ((void*)0))
 {
  Buffer VAR_8;

  VAR_8 = FUNC_2(VAR_6, VAR_1, VAR_4);
  VAR_7 = FUNC_3(VAR_6, VAR_8);






  if (VAR_7->btm_root == VAR_5)
  {
   FUNC_4(VAR_6, VAR_8);
   return 0;
  }




  VAR_6->rd_amcache = FUNC_1(VAR_6->rd_indexcxt,
            sizeof(BTMetaPageData));
  FUNC_5(VAR_6->rd_amcache, VAR_7, sizeof(BTMetaPageData));
  FUNC_4(VAR_6, VAR_8);
 }


 VAR_7 = (BTMetaPageData *) VAR_6->rd_amcache;

 FUNC_0(VAR_7->btm_magic == VAR_0);
 FUNC_0(VAR_7->btm_version >= VAR_2);
 FUNC_0(VAR_7->btm_version <= VAR_3);
 FUNC_0(VAR_7->btm_fastroot != VAR_5);

 return VAR_7->btm_fastlevel;
}
