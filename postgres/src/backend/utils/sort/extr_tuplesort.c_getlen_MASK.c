
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int len ;
struct TYPE_3__ {int tapeset; } ;
typedef TYPE_1__ Tuplesortstate ;


 int VAR_0 ;
 int FUNC_0 (int ,int,unsigned int*,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static unsigned int
FUNC_2(Tuplesortstate *VAR_1, int VAR_2, bool VAR_3)
{
 unsigned int VAR_4;

 if (FUNC_0(VAR_1->tapeset, VAR_2,
      &VAR_4, sizeof(VAR_4)) != sizeof(VAR_4))
  FUNC_1(VAR_0, "unexpected end of tape");
 if (VAR_4 == 0 && !VAR_3)
  FUNC_1(VAR_0, "unexpected end of data");
 return VAR_4;
}
