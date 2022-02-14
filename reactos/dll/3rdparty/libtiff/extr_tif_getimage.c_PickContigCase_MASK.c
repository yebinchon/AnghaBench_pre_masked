
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_9__ {int * contig; } ;
struct TYPE_10__ {int photometric; int bitspersample; int samplesperpixel; TYPE_1__ put; int * get; int tif; int alpha; int Map; } ;
typedef TYPE_2__ TIFFRGBAImage ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;







 int FUNC_2 (int ,int ,int*,int*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 int * VAR_18 ;
 int * VAR_19 ;
 int * VAR_20 ;
 int * VAR_21 ;
 int * VAR_22 ;
 int * VAR_23 ;
 int * VAR_24 ;
 int * VAR_25 ;
 int * VAR_26 ;
 int * VAR_27 ;
 int * VAR_28 ;
 int * VAR_29 ;

__attribute__((used)) static int
FUNC_7(TIFFRGBAImage* VAR_30)
{
 VAR_30->get = FUNC_3(VAR_30->tif) ? VAR_4 : VAR_3;
 VAR_30->put.contig = ((void*)0);
 switch (VAR_30->photometric) {
  case 130:
   switch (VAR_30->bitspersample) {
    case 8:
     if (VAR_30->alpha == VAR_0 &&
      VAR_30->samplesperpixel >= 4)
      VAR_30->put.contig = VAR_14;
     else if (VAR_30->alpha == VAR_1 &&
        VAR_30->samplesperpixel >= 4)
     {
      if (FUNC_1(VAR_30))
       VAR_30->put.contig = VAR_16;
     }
     else if( VAR_30->samplesperpixel >= 3 )
      VAR_30->put.contig = VAR_20;
     break;
    case 16:
     if (VAR_30->alpha == VAR_0 &&
      VAR_30->samplesperpixel >=4 )
     {
      if (FUNC_0(VAR_30))
       VAR_30->put.contig = VAR_13;
     }
     else if (VAR_30->alpha == VAR_1 &&
        VAR_30->samplesperpixel >=4 )
     {
      if (FUNC_0(VAR_30) &&
          FUNC_1(VAR_30))
       VAR_30->put.contig = VAR_15;
     }
     else if( VAR_30->samplesperpixel >=3 )
     {
      if (FUNC_0(VAR_30))
       VAR_30->put.contig = VAR_17;
     }
     break;
   }
   break;
  case 129:
   if (VAR_30->samplesperpixel >=4 && FUNC_4(VAR_30)) {
    if (VAR_30->bitspersample == 8) {
     if (!VAR_30->Map)
      VAR_30->put.contig = VAR_19;
     else
      VAR_30->put.contig = VAR_18;
    }
   }
   break;
  case 131:
   if (FUNC_4(VAR_30)) {
    switch (VAR_30->bitspersample) {
     case 8:
      VAR_30->put.contig = VAR_12;
      break;
     case 4:
      VAR_30->put.contig = VAR_11;
      break;
     case 2:
      VAR_30->put.contig = VAR_9;
      break;
     case 1:
      VAR_30->put.contig = VAR_7;
      break;
    }
   }
   break;
  case 132:
  case 133:
   if (FUNC_4(VAR_30)) {
    switch (VAR_30->bitspersample) {
     case 16:
      VAR_30->put.contig = VAR_5;
      break;
     case 8:
      if (VAR_30->alpha && VAR_30->samplesperpixel == 2)
       VAR_30->put.contig = VAR_21;
      else
       VAR_30->put.contig = VAR_29;
      break;
     case 4:
      VAR_30->put.contig = VAR_10;
      break;
     case 2:
      VAR_30->put.contig = VAR_8;
      break;
     case 1:
      VAR_30->put.contig = VAR_6;
      break;
    }
   }
   break;
  case 128:
   if ((VAR_30->bitspersample==8) && (VAR_30->samplesperpixel==3))
   {
    if (FUNC_6(VAR_30)!=0)
    {
     uint16 VAR_31;
     uint16 VAR_32;
     FUNC_2(VAR_30->tif, VAR_2, &VAR_31, &VAR_32);
     switch ((VAR_31<<4)|VAR_32) {
      case 0x44:
       VAR_30->put.contig = VAR_28;
       break;
      case 0x42:
       VAR_30->put.contig = VAR_27;
       break;
      case 0x41:
       VAR_30->put.contig = VAR_26;
       break;
      case 0x22:
       VAR_30->put.contig = VAR_25;
       break;
      case 0x21:
       VAR_30->put.contig = VAR_24;
       break;
      case 0x12:
       VAR_30->put.contig = VAR_23;
       break;
      case 0x11:
       VAR_30->put.contig = VAR_22;
       break;
     }
    }
   }
   break;
  case 134:
   if (VAR_30->samplesperpixel == 3 && FUNC_4(VAR_30)) {
    if (VAR_30->bitspersample == 8)
     VAR_30->put.contig = FUNC_5(VAR_30);
    break;
   }
 }
 return ((VAR_30->get!=((void*)0)) && (VAR_30->put.contig!=((void*)0)));
}
