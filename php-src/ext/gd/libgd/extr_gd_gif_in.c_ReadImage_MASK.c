
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
typedef int gdIOCtx ;
struct TYPE_4__ {unsigned char* red; unsigned char* green; unsigned char* blue; int* open; int colorsTotal; } ;
typedef int LZW_STATIC_DATA ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int ,unsigned char,int*) ;
 unsigned char VAR_4 ;
 int FUNC_1 (int *,unsigned char*,int) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,int,int,int) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_3(gdImagePtr VAR_7, gdIOCtx *VAR_8, int VAR_9, int VAR_10, unsigned char (*VAR_11)[256], int VAR_12, int *VAR_13)
{
 unsigned char VAR_14;
 int VAR_15;
 int VAR_16 = 0, VAR_17 = 0, VAR_18 = 0;
 int VAR_19;
 LZW_STATIC_DATA VAR_20;





 if (! FUNC_1(VAR_8,&VAR_14,1)) {
  return;
 }

 if (VAR_14 > VAR_4) {
  return;
 }


 for (VAR_19=0; (VAR_19<VAR_6); VAR_19++) {
  VAR_7->red[VAR_19] = VAR_11[VAR_2][VAR_19];
  VAR_7->green[VAR_19] = VAR_11[VAR_1][VAR_19];
  VAR_7->blue[VAR_19] = VAR_11[VAR_0][VAR_19];
  VAR_7->open[VAR_19] = 1;
 }

 VAR_7->colorsTotal = VAR_6;
 if (FUNC_0(VAR_8, &VAR_20, VAR_5, VAR_14, VAR_13) < 0) {
  return;
 }
 while ((VAR_15 = FUNC_0(VAR_8, &VAR_20, VAR_3, VAR_14, VAR_13)) >= 0) {
  if (VAR_15 >= VAR_6) {
   VAR_15 = 0;
  }

  if (VAR_7->open[VAR_15]) {
   VAR_7->open[VAR_15] = 0;
  }
  FUNC_2(VAR_7, VAR_16, VAR_17, VAR_15);
  ++VAR_16;
  if (VAR_16 == VAR_9) {
   VAR_16 = 0;
   if (VAR_12) {
    switch (VAR_18) {
     case 0:
     case 1:
      VAR_17 += 8; break;
     case 2:
      VAR_17 += 4; break;
     case 3:
      VAR_17 += 2; break;
    }

    if (VAR_17 >= VAR_10) {
     ++VAR_18;
     switch (VAR_18) {
      case 1:
       VAR_17 = 4; break;
      case 2:
       VAR_17 = 2; break;
      case 3:
       VAR_17 = 1; break;
      default:
       goto fini;
     }
    }
   } else {
    ++VAR_17;
   }
  }
  if (VAR_17 >= VAR_10)
   break;
 }

fini:
 if (FUNC_0(VAR_8, &VAR_20, VAR_3, VAR_14, VAR_13) >=0) {

 }
}
