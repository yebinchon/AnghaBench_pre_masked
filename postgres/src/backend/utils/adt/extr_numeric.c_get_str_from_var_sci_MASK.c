
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_10__ {scalar_t__ ndigits; int weight; int * digits; } ;
typedef TYPE_1__ NumericVar ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const*,TYPE_1__*,TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 char* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;
 char* FUNC_5 (size_t) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int,TYPE_1__*,int) ;
 int FUNC_8 (char*,size_t,char*,char*,int) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static char *
FUNC_10(const NumericVar *VAR_2, int VAR_3)
{
 int32 VAR_4;
 NumericVar VAR_5;
 NumericVar VAR_6;
 int VAR_7;
 size_t VAR_8;
 char *VAR_9;
 char *VAR_10;

 if (VAR_3 < 0)
  VAR_3 = 0;







 if (VAR_2->ndigits > 0)
 {
  VAR_4 = (VAR_2->weight + 1) * VAR_0;





  VAR_4 -= VAR_0 - (int) FUNC_4(VAR_2->digits[0]);
 }
 else
 {







  VAR_4 = 0;
 }







 if (VAR_4 < 0)
  VAR_7 = -VAR_4;
 else
  VAR_7 = 0;

 FUNC_3(&VAR_5);
 FUNC_3(&VAR_6);

 FUNC_7(&VAR_1, VAR_4, &VAR_5, VAR_7);
 FUNC_0(VAR_2, &VAR_5, &VAR_6, VAR_3, 1);
 VAR_10 = FUNC_2(&VAR_6);

 FUNC_1(&VAR_5);
 FUNC_1(&VAR_6);
 VAR_8 = FUNC_9(VAR_10) + 13;
 VAR_9 = FUNC_5(VAR_8);
 FUNC_8(VAR_9, VAR_8, "%se%+03d", VAR_10, VAR_4);

 FUNC_6(VAR_10);

 return VAR_9;
}
