
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct PktData {int type; int len; } ;
typedef int PullFilter ;
typedef int PGP_Context ;


 int VAR_0 ;
 int FUNC_0 (int **,int *,struct PktData*,int *) ;
 struct PktData* FUNC_1 (int) ;
 int FUNC_2 (struct PktData*) ;

int
FUNC_3(PullFilter **VAR_1, PullFilter *VAR_2, int VAR_3,
       int VAR_4, PGP_Context *VAR_5)
{
 int VAR_6;
 struct PktData *VAR_7 = FUNC_1(sizeof(*VAR_7));

 VAR_7->type = VAR_4;
 VAR_7->len = VAR_3;
 VAR_6 = FUNC_0(VAR_1, &VAR_0, VAR_7, VAR_2);
 if (VAR_6 < 0)
  FUNC_2(VAR_7);
 return VAR_6;
}
