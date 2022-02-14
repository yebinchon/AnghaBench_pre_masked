
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ea_magic; } ;
typedef TYPE_1__ ExpandedArrayHeader ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *) ;

ExpandedArrayHeader *
FUNC_5(Datum VAR_2)
{

 if (FUNC_3(FUNC_2(VAR_2)))
 {
  ExpandedArrayHeader *VAR_3 = (ExpandedArrayHeader *) FUNC_1(VAR_2);

  FUNC_0(VAR_3->ea_magic == VAR_1);
  return VAR_3;
 }


 VAR_2 = FUNC_4(VAR_2, VAR_0, ((void*)0));
 return (ExpandedArrayHeader *) FUNC_1(VAR_2);
}
