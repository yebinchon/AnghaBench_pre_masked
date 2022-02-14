
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int nlacons; struct subre* lacons; } ;
struct subre {int subno; int cnfa; struct state* end; struct state* begin; } ;
struct state {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct subre*,int) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct vars *VAR_1,
   struct state *VAR_2,
   struct state *VAR_3,
   int VAR_4)
{
 int VAR_5;
 struct subre *VAR_6;
 struct subre *VAR_7;

 if (VAR_1->nlacons == 0)
 {
  VAR_5 = 1;
  VAR_6 = (struct subre *) FUNC_1(2 * sizeof(struct subre));
 }
 else
 {
  VAR_5 = VAR_1->nlacons;
  VAR_6 = (struct subre *) FUNC_2(VAR_1->lacons,
            (VAR_5 + 1) * sizeof(struct subre));
 }
 if (VAR_6 == ((void*)0))
 {
  FUNC_0(VAR_0);
  return 0;
 }
 VAR_1->lacons = VAR_6;
 VAR_1->nlacons = VAR_5 + 1;
 VAR_7 = &VAR_1->lacons[VAR_5];
 VAR_7->begin = VAR_2;
 VAR_7->end = VAR_3;
 VAR_7->subno = VAR_4;
 FUNC_3(VAR_7->cnfa);
 return VAR_5;
}
