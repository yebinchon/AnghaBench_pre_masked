
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int16 ;
struct TYPE_4__ {int ssup_reverse; int * comparator; } ;
typedef TYPE_1__* SortSupport ;
typedef int Oid ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,int *,int *,scalar_t__*) ;

void
FUNC_4(Oid VAR_2, SortSupport VAR_3)
{
 Oid VAR_4;
 Oid VAR_5;
 int16 VAR_6;

 FUNC_0(VAR_3->comparator == ((void*)0));


 if (!FUNC_3(VAR_2, &VAR_4, &VAR_5,
         &VAR_6))
  FUNC_2(VAR_1, "operator %u is not a valid ordering operator",
    VAR_2);
 VAR_3->ssup_reverse = (VAR_6 == VAR_0);

 FUNC_1(VAR_4, VAR_5, VAR_3);
}
