
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct al_table {int bits; int d; } ;
typedef int real ;
struct TYPE_4__ {int stereo; int II_sblimit; int jsbound; int down_sample_sblimit; int ** muls; struct al_table* alloc; } ;
typedef TYPE_1__ mpg123_handle ;


 int FUNC_0 (double) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 int const* VAR_1 ;
 int const* VAR_2 ;
 int const* VAR_3 ;

__attribute__((used)) static void FUNC_5(unsigned int *VAR_4,real VAR_5[2][4][VAR_0],int *VAR_6,mpg123_handle *VAR_7,int VAR_8)
{
 int VAR_9,VAR_10,VAR_11,VAR_12;
 int VAR_13 = VAR_7->stereo;
 int VAR_14 = VAR_7->II_sblimit;
 int VAR_15 = VAR_7->jsbound;
 const struct al_table *VAR_16,*VAR_17 = VAR_7->alloc;
 unsigned int *VAR_18=VAR_4;
 int VAR_19,VAR_20;

 for(VAR_9=0;VAR_9<VAR_15;VAR_9++,VAR_17+=(1<<VAR_20))
 {
  VAR_20 = VAR_17->bits;
  for(VAR_10=0;VAR_10<VAR_13;VAR_10++)
  {
   if( (VAR_12=*VAR_18++) )
   {
    VAR_11=(VAR_16 = VAR_17+VAR_12)->bits;
    if( (VAR_19=VAR_16->d) < 0)
    {
     real VAR_21=VAR_7->muls[VAR_11][VAR_6[VAR_8]];
     VAR_5[VAR_10][0][VAR_9] = FUNC_2(FUNC_1((int)FUNC_4(VAR_7, VAR_11) + VAR_19), VAR_21);
     VAR_5[VAR_10][1][VAR_9] = FUNC_2(FUNC_1((int)FUNC_4(VAR_7, VAR_11) + VAR_19), VAR_21);
     VAR_5[VAR_10][2][VAR_9] = FUNC_2(FUNC_1((int)FUNC_4(VAR_7, VAR_11) + VAR_19), VAR_21);
    }
    else
    {
     const int *VAR_22[] = { 0,0,0,VAR_1,0,VAR_2,0,0,0,VAR_3 };
     unsigned int VAR_23,*VAR_24,VAR_25=VAR_6[VAR_8];
     VAR_23 = (unsigned int) FUNC_4(VAR_7, VAR_11);
     VAR_24 = (unsigned int *) (VAR_22[VAR_19] + VAR_23 + VAR_23 + VAR_23);
     VAR_5[VAR_10][0][VAR_9] = FUNC_3(VAR_7->muls[*VAR_24++][VAR_25]);
     VAR_5[VAR_10][1][VAR_9] = FUNC_3(VAR_7->muls[*VAR_24++][VAR_25]);
     VAR_5[VAR_10][2][VAR_9] = FUNC_3(VAR_7->muls[*VAR_24][VAR_25]);
    }
    VAR_6+=3;
   }
   else
   VAR_5[VAR_10][0][VAR_9] = VAR_5[VAR_10][1][VAR_9] = VAR_5[VAR_10][2][VAR_9] = FUNC_0(0.0);
  }
 }

 for(VAR_9=VAR_15;VAR_9<VAR_14;VAR_9++,VAR_17+=(1<<VAR_20))
 {
  VAR_20 = VAR_17->bits;
  VAR_18++;
  if( (VAR_12=*VAR_18++) )
  {
   VAR_11=(VAR_16 = VAR_17+VAR_12)->bits;
   if( (VAR_19=VAR_16->d) < 0)
   {
    real VAR_26;
    VAR_26=VAR_7->muls[VAR_11][VAR_6[VAR_8+3]];
    VAR_5[0][0][VAR_9] = FUNC_1((int)FUNC_4(VAR_7, VAR_11) + VAR_19);
    VAR_5[0][1][VAR_9] = FUNC_1((int)FUNC_4(VAR_7, VAR_11) + VAR_19);
    VAR_5[0][2][VAR_9] = FUNC_1((int)FUNC_4(VAR_7, VAR_11) + VAR_19);
    VAR_5[1][0][VAR_9] = FUNC_2(VAR_5[0][0][VAR_9], VAR_26);
    VAR_5[1][1][VAR_9] = FUNC_2(VAR_5[0][1][VAR_9], VAR_26);
    VAR_5[1][2][VAR_9] = FUNC_2(VAR_5[0][2][VAR_9], VAR_26);
    VAR_26=VAR_7->muls[VAR_11][VAR_6[VAR_8]];
    VAR_5[0][0][VAR_9] = FUNC_2(VAR_5[0][0][VAR_9], VAR_26);
    VAR_5[0][1][VAR_9] = FUNC_2(VAR_5[0][1][VAR_9], VAR_26);
    VAR_5[0][2][VAR_9] = FUNC_2(VAR_5[0][2][VAR_9], VAR_26);
   }
   else
   {
    const int *VAR_27[] = { 0,0,0,VAR_1,0,VAR_2,0,0,0,VAR_3 };
    unsigned int VAR_28,*VAR_29,VAR_30,VAR_31;
    VAR_30 = VAR_6[VAR_8]; VAR_31 = VAR_6[VAR_8+3];
    VAR_28 = (unsigned int) FUNC_4(VAR_7, VAR_11);
    VAR_29 = (unsigned int *) (VAR_27[VAR_19] + VAR_28 + VAR_28 + VAR_28);
    VAR_5[0][0][VAR_9] = FUNC_3(VAR_7->muls[*VAR_29][VAR_30]); VAR_5[1][0][VAR_9] = FUNC_3(VAR_7->muls[*VAR_29++][VAR_31]);
    VAR_5[0][1][VAR_9] = FUNC_3(VAR_7->muls[*VAR_29][VAR_30]); VAR_5[1][1][VAR_9] = FUNC_3(VAR_7->muls[*VAR_29++][VAR_31]);
    VAR_5[0][2][VAR_9] = FUNC_3(VAR_7->muls[*VAR_29][VAR_30]); VAR_5[1][2][VAR_9] = FUNC_3(VAR_7->muls[*VAR_29][VAR_31]);
   }
   VAR_6+=6;
  }
  else
  {
   VAR_5[0][0][VAR_9] = VAR_5[0][1][VAR_9] = VAR_5[0][2][VAR_9] =
   VAR_5[1][0][VAR_9] = VAR_5[1][1][VAR_9] = VAR_5[1][2][VAR_9] = FUNC_0(0.0);
  }
 }

 if(VAR_14 > (VAR_7->down_sample_sblimit) )
 VAR_14 = VAR_7->down_sample_sblimit;

 for(VAR_9=VAR_14;VAR_9<VAR_0;VAR_9++)
 for (VAR_10=0;VAR_10<VAR_13;VAR_10++)
 VAR_5[VAR_10][0][VAR_9] = VAR_5[VAR_10][1][VAR_9] = VAR_5[VAR_10][2][VAR_9] = FUNC_0(0.0);
}
