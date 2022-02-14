
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_8__ {TYPE_1__* rd_indam; } ;
struct TYPE_7__ {int kill_prior_tuple; TYPE_4__* indexRelation; } ;
struct TYPE_6__ {int (* amgetbitmap ) (TYPE_2__*,int *) ;} ;
typedef int TIDBitmap ;
typedef TYPE_2__* IndexScanDesc ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_2__*,int *) ;

int64
FUNC_3(IndexScanDesc VAR_2, TIDBitmap *VAR_3)
{
 int64 VAR_4;

 VAR_0;
 FUNC_0(VAR_1);


 VAR_2->kill_prior_tuple = 0;




 VAR_4 = VAR_2->indexRelation->rd_indam->amgetbitmap(VAR_2, VAR_3);

 FUNC_1(VAR_2->indexRelation, VAR_4);

 return VAR_4;
}
