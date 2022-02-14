
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mhz; int sslope; int sfreq; int bwadj; int fbdiv; int refdiv; int outdiv; } ;
typedef TYPE_1__ PLL_CONFIG ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (char*,unsigned int) ;

int FUNC_4(int VAR_3)
{
 int VAR_4 = (VAR_3 - VAR_2) / VAR_1;
 const PLL_CONFIG *VAR_5;

 if (VAR_4 < 0 || VAR_4 > FUNC_0(VAR_0)) {
  FUNC_1("Freq %d MHz out of range, default to lowest\n", VAR_3);
  VAR_4 = 0;
 }
 VAR_5 = &VAR_0[VAR_4];

 FUNC_3("Attempting to set PLLA to %d MHz ...\n", (unsigned) VAR_5->mhz);
 FUNC_2(VAR_5->outdiv, VAR_5->refdiv, VAR_5->fbdiv, VAR_5->bwadj,
                VAR_5->sfreq, VAR_5->sslope);

 return VAR_5->mhz;
}
