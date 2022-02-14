
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cbyte; int dglen; int max; int* dmend_r; scalar_t__ namelen; int qu; int serv; int ads; scalar_t__ dgram; } ;
typedef TYPE_1__ findlabel_state ;
typedef int adns_status ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

adns_status FUNC_2(findlabel_state *VAR_5,
     int *VAR_6, int *VAR_7) {
  int VAR_8, VAR_9;
  const char *VAR_10;

  VAR_10= (char*)VAR_5->dgram;
  for (;;) {
    if (VAR_5->cbyte >= VAR_5->dglen) goto x_truncated;
    if (VAR_5->cbyte >= VAR_5->max) goto x_badresponse;
    FUNC_0(VAR_5->cbyte,VAR_8);
    if (!(VAR_8 & 0x0c0)) break;
    if ((VAR_8 & 0x0c0) != 0x0c0) return VAR_4;
    if (VAR_5->cbyte >= VAR_5->dglen) goto x_truncated;
    if (VAR_5->cbyte >= VAR_5->max) goto x_badresponse;
    FUNC_0(VAR_5->cbyte,VAR_9);
    VAR_9 |= (VAR_8&0x3f)<<8;
    if (VAR_5->dmend_r) *(VAR_5->dmend_r)= VAR_5->cbyte;
    VAR_5->cbyte= VAR_9;
    VAR_5->dmend_r= 0; VAR_5->max= VAR_5->dglen+1;
  }
  if (VAR_7) *VAR_7= VAR_5->cbyte;
  if (VAR_8) {
    if (VAR_5->namelen) VAR_5->namelen++;
    VAR_5->namelen+= VAR_8;
    if (VAR_5->namelen > VAR_0) return VAR_1;
    VAR_5->cbyte+= VAR_8;
    if (VAR_5->cbyte > VAR_5->dglen) goto x_truncated;
    if (VAR_5->cbyte > VAR_5->max) goto x_badresponse;
  } else {
    if (VAR_5->dmend_r) *(VAR_5->dmend_r)= VAR_5->cbyte;
  }
  *VAR_6= VAR_8;
  return VAR_3;

 x_truncated:
  *VAR_6= -1;
  return VAR_3;

 x_badresponse:
  FUNC_1(VAR_5->ads,VAR_5->serv,VAR_5->qu,"label in domain runs beyond end of domain");
  return VAR_2;
}
