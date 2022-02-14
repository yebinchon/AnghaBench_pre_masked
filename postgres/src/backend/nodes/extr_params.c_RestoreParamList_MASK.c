
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_6__ {int ptype; int pflags; int isnull; int value; } ;
struct TYPE_5__ {TYPE_2__* params; } ;
typedef TYPE_1__* ParamListInfo ;
typedef TYPE_2__ ParamExternData ;
typedef int Oid ;


 int FUNC_0 (char**,int *) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int*,char*,int) ;

ParamListInfo
FUNC_3(char **VAR_0)
{
 ParamListInfo VAR_1;
 int VAR_2;

 FUNC_2(&VAR_2, *VAR_0, sizeof(int));
 *VAR_0 += sizeof(int);

 VAR_1 = FUNC_1(VAR_2);

 for (int VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
 {
  ParamExternData *VAR_4 = &VAR_1->params[VAR_3];


  FUNC_2(&VAR_4->ptype, *VAR_0, sizeof(Oid));
  *VAR_0 += sizeof(Oid);


  FUNC_2(&VAR_4->pflags, *VAR_0, sizeof(uint16));
  *VAR_0 += sizeof(uint16);


  VAR_4->value = FUNC_0(VAR_0, &VAR_4->isnull);
 }

 return VAR_1;
}
