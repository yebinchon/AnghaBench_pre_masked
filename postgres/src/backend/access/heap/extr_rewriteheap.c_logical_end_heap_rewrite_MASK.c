
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int vfd; int path; } ;
struct TYPE_5__ {scalar_t__ rs_num_rewrite_mappings; int rs_logical_mappings; int rs_logical_rewrite; } ;
typedef TYPE_1__* RewriteState ;
typedef TYPE_2__ RewriteMappingFile ;
typedef int HASH_SEQ_STATUS ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_9(RewriteState VAR_2)
{
 HASH_SEQ_STATUS VAR_3;
 RewriteMappingFile *VAR_4;


 if (!VAR_2->rs_logical_rewrite)
  return;


 if (VAR_2->rs_num_rewrite_mappings > 0)
  FUNC_8(VAR_2);


 FUNC_6(&VAR_3, VAR_2->rs_logical_mappings);
 while ((VAR_4 = (RewriteMappingFile *) FUNC_7(&VAR_3)) != ((void*)0))
 {
  if (FUNC_1(VAR_4->vfd, VAR_1) != 0)
   FUNC_3(FUNC_2(VAR_0),
     (FUNC_4(),
      FUNC_5("could not fsync file \"%s\": %m", VAR_4->path)));
  FUNC_0(VAR_4->vfd);
 }

}
