
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct davinci_mcasp {int streams; } ;


 int VAR_0 ;
 int FUNC_0 (struct davinci_mcasp*) ;
 int FUNC_1 (struct davinci_mcasp*) ;

__attribute__((used)) static void FUNC_2(struct davinci_mcasp *VAR_1, int VAR_2)
{
 VAR_1->streams++;

 if (VAR_2 == VAR_0)
  FUNC_1(VAR_1);
 else
  FUNC_0(VAR_1);
}
