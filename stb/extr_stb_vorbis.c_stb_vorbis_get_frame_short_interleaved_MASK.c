
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int channels; } ;
typedef TYPE_1__ stb_vorbis ;


 int FUNC_0 (int,short*,int ,float**,int ,int) ;
 int FUNC_1 (TYPE_1__*,int *,float***) ;
 int FUNC_2 (TYPE_1__*,int,short**,int) ;

int FUNC_3(stb_vorbis *VAR_0, int VAR_1, short *VAR_2, int VAR_3)
{
   float **VAR_4;
   int VAR_5;
   if (VAR_1 == 1) return FUNC_2(VAR_0,VAR_1,&VAR_2, VAR_3);
   VAR_5 = FUNC_1(VAR_0, ((void*)0), &VAR_4);
   if (VAR_5) {
      if (VAR_5*VAR_1 > VAR_3) VAR_5 = VAR_3 / VAR_1;
      FUNC_0(VAR_1, VAR_2, VAR_0->channels, VAR_4, 0, VAR_5);
   }
   return VAR_5;
}
