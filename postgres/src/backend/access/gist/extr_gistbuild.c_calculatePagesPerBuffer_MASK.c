
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int freespace; scalar_t__ indtuples; scalar_t__ indtuplesSize; } ;
typedef double Size ;
typedef int ItemIdData ;
typedef int GISTPageOpaqueData ;
typedef TYPE_1__ GISTBuildState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (double,int) ;
 scalar_t__ FUNC_1 (double) ;

__attribute__((used)) static int
FUNC_2(GISTBuildState *VAR_2, int VAR_3)
{
 double VAR_4;
 double VAR_5;
 double VAR_6;
 Size VAR_7;


 VAR_7 = VAR_0 - VAR_1 - sizeof(GISTPageOpaqueData)
  - sizeof(ItemIdData)
  - VAR_2->freespace;





 VAR_6 = (double) VAR_2->indtuplesSize /
  (double) VAR_2->indtuples;

 VAR_5 = VAR_7 / VAR_6;




 VAR_4 = 2 * FUNC_0(VAR_5, VAR_3);

 return (int) FUNC_1(VAR_4);
}
