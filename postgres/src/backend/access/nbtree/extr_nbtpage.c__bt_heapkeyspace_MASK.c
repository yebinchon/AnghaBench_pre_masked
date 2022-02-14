
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_10__ {scalar_t__ btm_root; scalar_t__ btm_version; scalar_t__ btm_magic; scalar_t__ btm_fastroot; } ;
struct TYPE_9__ {int * rd_amcache; int rd_indexcxt; } ;
typedef TYPE_1__* Relation ;
typedef int Buffer ;
typedef TYPE_2__ BTMetaPageData ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int ,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 TYPE_2__* FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int *,TYPE_2__*,int) ;

bool
FUNC_6(Relation VAR_7)
{
 BTMetaPageData *VAR_8;

 if (VAR_7->rd_amcache == ((void*)0))
 {
  Buffer VAR_9;

  VAR_9 = FUNC_2(VAR_7, VAR_1, VAR_5);
  VAR_8 = FUNC_3(VAR_7, VAR_9);






  if (VAR_8->btm_root == VAR_6)
  {
   uint32 VAR_10 = VAR_8->btm_version;

   FUNC_4(VAR_7, VAR_9);
   return VAR_10 > VAR_3;
  }
  VAR_7->rd_amcache = FUNC_1(VAR_7->rd_indexcxt,
            sizeof(BTMetaPageData));
  FUNC_5(VAR_7->rd_amcache, VAR_8, sizeof(BTMetaPageData));
  FUNC_4(VAR_7, VAR_9);
 }


 VAR_8 = (BTMetaPageData *) VAR_7->rd_amcache;

 FUNC_0(VAR_8->btm_magic == VAR_0);
 FUNC_0(VAR_8->btm_version >= VAR_2);
 FUNC_0(VAR_8->btm_version <= VAR_4);
 FUNC_0(VAR_8->btm_fastroot != VAR_6);

 return VAR_8->btm_version > VAR_3;
}
