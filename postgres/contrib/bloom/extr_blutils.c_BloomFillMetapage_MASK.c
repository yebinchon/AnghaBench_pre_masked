
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int opts; int magickNumber; } ;
struct TYPE_8__ {scalar_t__ pd_lower; scalar_t__ pd_upper; } ;
struct TYPE_7__ {scalar_t__ rd_options; } ;
typedef TYPE_1__* Relation ;
typedef TYPE_2__* PageHeader ;
typedef scalar_t__ Page ;
typedef int BloomOptions ;
typedef TYPE_3__ BloomMetaPageData ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ) ;
 TYPE_3__* FUNC_2 (scalar_t__) ;
 int * FUNC_3 () ;
 int FUNC_4 (TYPE_3__*,int ,int) ;

void
FUNC_5(Relation VAR_2, Page VAR_3)
{
 BloomOptions *VAR_4;
 BloomMetaPageData *VAR_5;





 VAR_4 = (BloomOptions *) VAR_2->rd_options;
 if (!VAR_4)
  VAR_4 = FUNC_3();





 FUNC_1(VAR_3, VAR_1);
 VAR_5 = FUNC_2(VAR_3);
 FUNC_4(VAR_5, 0, sizeof(BloomMetaPageData));
 VAR_5->magickNumber = VAR_0;
 VAR_5->opts = *VAR_4;
 ((PageHeader) VAR_3)->pd_lower += sizeof(BloomMetaPageData);


 FUNC_0(((PageHeader) VAR_3)->pd_lower <= ((PageHeader) VAR_3)->pd_upper);
}
