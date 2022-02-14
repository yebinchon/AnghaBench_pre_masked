
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ magic; } ;
typedef TYPE_1__* SPIPlanPtr ;
typedef int ParamListInfo ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ,int,int,long) ;

int
FUNC_3(SPIPlanPtr VAR_3, ParamListInfo VAR_4,
        bool VAR_5, long VAR_6)
{
 int VAR_7;

 if (VAR_3 == ((void*)0) || VAR_3->magic != VAR_2 || VAR_6 < 0)
  return VAR_1;

 VAR_7 = FUNC_0(1);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_3, VAR_4,
       VAR_0, VAR_0,
       VAR_5, 1, VAR_6);

 FUNC_1(1);
 return VAR_7;
}
