
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ btm_magic; scalar_t__ btm_version; } ;
typedef int Relation ;
typedef int Page ;
typedef int Buffer ;
typedef scalar_t__ BTPageOpaque ;
typedef TYPE_1__ BTMetaPageData ;


 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ,...) ;

__attribute__((used)) static BTMetaPageData *
FUNC_8(Relation VAR_5, Buffer VAR_6)
{
 Page VAR_7;
 BTPageOpaque VAR_8;
 BTMetaPageData *VAR_9;

 VAR_7 = FUNC_1(VAR_6);
 VAR_8 = (BTPageOpaque) FUNC_3(VAR_7);
 VAR_9 = FUNC_0(VAR_7);


 if (!FUNC_2(VAR_8) ||
  VAR_9->btm_magic != VAR_0)
  FUNC_5(VAR_4,
    (FUNC_6(VAR_3),
     FUNC_7("index \"%s\" is not a btree",
      FUNC_4(VAR_5))));

 if (VAR_9->btm_version < VAR_1 ||
  VAR_9->btm_version > VAR_2)
  FUNC_5(VAR_4,
    (FUNC_6(VAR_3),
     FUNC_7("version mismatch in index \"%s\": file version %d, "
      "current version %d, minimal supported version %d",
      FUNC_4(VAR_5),
      VAR_9->btm_version, VAR_2, VAR_1)));

 return VAR_9;
}
