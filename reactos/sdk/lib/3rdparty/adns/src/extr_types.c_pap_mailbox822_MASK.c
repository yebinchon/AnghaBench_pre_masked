
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {size_t used; int buf; } ;
typedef TYPE_1__ vbuf ;
struct TYPE_13__ {unsigned char* dgram; TYPE_8__* qu; int ads; int dglen; } ;
typedef TYPE_2__ parseinfo ;
typedef int findlabel_state ;
typedef unsigned char const byte ;
typedef scalar_t__ adns_status ;
struct TYPE_14__ {TYPE_1__ vb; } ;


 int VAR_0 ;
 char* FUNC_0 (TYPE_8__*,size_t) ;
 scalar_t__ FUNC_1 (int *,int*,int*) ;
 int FUNC_2 (int *,int ,int,TYPE_8__*,unsigned char*,int ,int,int,int*) ;
 scalar_t__ FUNC_3 (int *,int ,TYPE_8__*,TYPE_1__*,int ,unsigned char*) ;
 int FUNC_4 (TYPE_1__*,unsigned char*,int) ;
 int FUNC_5 (TYPE_1__*,unsigned char const*,int) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (char*,int ,size_t) ;

__attribute__((used)) static adns_status FUNC_10(const parseinfo *VAR_3, int *VAR_4, int VAR_5,
      char **VAR_6) {
  int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
  const unsigned char *VAR_14;
  char *VAR_15;
  findlabel_state VAR_16;
  adns_status VAR_17;
  vbuf *VAR_18;

  VAR_18= &VAR_3->qu->vb;
  VAR_18->used= 0;
  FUNC_2(&VAR_16, VAR_3->ads,
   -1, VAR_3->qu,
   VAR_3->dgram, VAR_3->dglen, VAR_5,
   *VAR_4, VAR_4);
  VAR_17= FUNC_1(&VAR_16,&VAR_7,&VAR_8);
  if (!VAR_7) {
    FUNC_6(VAR_18,".");
    goto x_ok;
  }

  VAR_13= 1;
  for (VAR_9=0, VAR_10=0, VAR_14= VAR_3->dgram+VAR_8; VAR_9<VAR_7; VAR_9++) {
    VAR_11= *VAR_14++;
    if ((VAR_11&~128) < 32 || (VAR_11&~128) == 127) return VAR_1;
    if (VAR_11 == '.' && !VAR_13) VAR_13= 1;
    else if (VAR_11==' ' || VAR_11>=127 || FUNC_8(VAR_11)) VAR_10++;
    else VAR_13= 0;
  }

  if (VAR_10 || VAR_13) {
    VAR_12= FUNC_7(VAR_18, VAR_7+VAR_10+4); if (!VAR_12) VAR_0;
    FUNC_5(VAR_18,(byte*)"\"",1);
    for (VAR_9=0, VAR_10=0, VAR_14= VAR_3->dgram+VAR_8; VAR_9<VAR_7; VAR_9++, VAR_14++) {
      VAR_11= *VAR_14;
      if (VAR_11 == '"' || VAR_11=='\\') FUNC_5(VAR_18,(byte*)"\\",1);
      FUNC_5(VAR_18,VAR_14,1);
    }
    FUNC_5(VAR_18,(byte*)"\"",1);
  } else {
    VAR_12= FUNC_4(VAR_18, VAR_3->dgram+VAR_8, VAR_7); if (!VAR_12) VAR_0;
  }

  VAR_12= FUNC_6(VAR_18,"@"); if (!VAR_12) VAR_0;

  VAR_17= FUNC_3(&VAR_16,VAR_3->ads, VAR_3->qu,VAR_18,0, VAR_3->dgram);
  if (VAR_17) return VAR_17;

 x_ok:
  VAR_15= FUNC_0(VAR_3->qu, (size_t) VAR_18->used+1); if (!VAR_15) VAR_0;
  FUNC_9(VAR_15,VAR_18->buf,(size_t) VAR_18->used);
  VAR_15[VAR_18->used]= 0;
  *VAR_6= VAR_15;
  return VAR_2;
}
