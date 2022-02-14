
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* rd_indam; } ;
struct TYPE_4__ {int (* amestimateparallelscan ) () ;} ;
typedef int Snapshot ;
typedef int Size ;
typedef TYPE_2__* Relation ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_2 ;
 int FUNC_4 () ;

Size
FUNC_5(Relation VAR_3, Snapshot VAR_4)
{
 Size VAR_5;

 VAR_1;

 VAR_5 = FUNC_3(VAR_0, VAR_2);
 VAR_5 = FUNC_2(VAR_5, FUNC_0(VAR_4));
 VAR_5 = FUNC_1(VAR_5);






 if (VAR_3->rd_indam->amestimateparallelscan != ((void*)0))
  VAR_5 = FUNC_2(VAR_5,
        VAR_3->rd_indam->amestimateparallelscan());

 return VAR_5;
}
