
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * comparator; } ;
typedef TYPE_1__* SortSupport ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_6(Oid VAR_3, Oid VAR_4, SortSupport VAR_5)
{
 Oid VAR_6;


 VAR_6 = FUNC_5(VAR_3, VAR_4, VAR_4,
           VAR_1);
 if (FUNC_1(VAR_6))
 {




  FUNC_0(VAR_6, FUNC_2(VAR_5));
 }

 if (VAR_5->comparator == ((void*)0))
 {
  Oid VAR_7;

  VAR_7 = FUNC_5(VAR_3, VAR_4, VAR_4,
           VAR_0);

  if (!FUNC_1(VAR_7))
   FUNC_4(VAR_2, "missing support function %d(%u,%u) in opfamily %u",
     VAR_0, VAR_4, VAR_4, VAR_3);


  FUNC_3(VAR_7, VAR_5);
 }
}
