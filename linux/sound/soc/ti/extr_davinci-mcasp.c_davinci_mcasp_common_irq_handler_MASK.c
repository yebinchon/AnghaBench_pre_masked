
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct davinci_mcasp {scalar_t__* substreams; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int,void*) ;
 int FUNC_1 (int,void*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct davinci_mcasp *VAR_5 = (struct davinci_mcasp *)VAR_4;
 irqreturn_t VAR_6 = VAR_0;

 if (VAR_5->substreams[VAR_2])
  VAR_6 = FUNC_1(VAR_3, VAR_4);

 if (VAR_5->substreams[VAR_1])
  VAR_6 |= FUNC_0(VAR_3, VAR_4);

 return VAR_6;
}
