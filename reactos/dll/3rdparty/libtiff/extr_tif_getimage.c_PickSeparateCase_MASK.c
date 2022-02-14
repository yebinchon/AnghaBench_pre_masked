
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_7__ {int * separate; } ;
struct TYPE_8__ {int photometric; int bitspersample; int alpha; int samplesperpixel; TYPE_1__ put; int * get; int tif; } ;
typedef TYPE_2__ TIFFRGBAImage ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;





 int FUNC_2 (int ,int ,int*,int*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_4 (TYPE_2__*) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;

__attribute__((used)) static int
FUNC_5(TIFFRGBAImage* VAR_13)
{
 VAR_13->get = FUNC_3(VAR_13->tif) ? VAR_4 : VAR_3;
 VAR_13->put.separate = ((void*)0);
 switch (VAR_13->photometric) {
 case 131:
 case 132:

 case 130:
  switch (VAR_13->bitspersample) {
  case 8:
   if (VAR_13->alpha == VAR_0)
    VAR_13->put.separate = VAR_7;
   else if (VAR_13->alpha == VAR_1)
   {
    if (FUNC_1(VAR_13))
     VAR_13->put.separate = VAR_9;
   }
   else
    VAR_13->put.separate = VAR_11;
   break;
  case 16:
   if (VAR_13->alpha == VAR_0)
   {
    if (FUNC_0(VAR_13))
     VAR_13->put.separate = VAR_6;
   }
   else if (VAR_13->alpha == VAR_1)
   {
    if (FUNC_0(VAR_13) &&
        FUNC_1(VAR_13))
     VAR_13->put.separate = VAR_8;
   }
   else
   {
    if (FUNC_0(VAR_13))
     VAR_13->put.separate = VAR_10;
   }
   break;
  }
  break;
 case 129:
  if (VAR_13->bitspersample == 8 && VAR_13->samplesperpixel == 4)
  {
   VAR_13->alpha = 1;
   VAR_13->put.separate = VAR_5;
  }
  break;
 case 128:
  if ((VAR_13->bitspersample==8) && (VAR_13->samplesperpixel==3))
  {
   if (FUNC_4(VAR_13)!=0)
   {
    uint16 VAR_14, VAR_15;
    FUNC_2(VAR_13->tif, VAR_2, &VAR_14, &VAR_15);
    switch ((VAR_14<<4)|VAR_15) {
    case 0x11:
     VAR_13->put.separate = VAR_12;
     break;

    }
   }
  }
  break;
 }
 return ((VAR_13->get!=((void*)0)) && (VAR_13->put.separate!=((void*)0)));
}
