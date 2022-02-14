
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint ;
typedef int uchar ;
typedef int outBlock ;
struct TYPE_5__ {int len; int breakNdx; int * fin; struct TYPE_5__** block; int crc; int fullBlkCB; int * fout; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (char const*,char*) ;
 int FUNC_4 (int *,int,int,int *) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 TYPE_1__* VAR_8 ;
 int FUNC_8 (char*,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_9 (int) ;
 int FUNC_10 (int ,int ,int ,int,int *,void**) ;

int FUNC_11(int VAR_12, char *VAR_13[]) {
  FUNC_1 (VAR_12==3);
  const char *VAR_14 = VAR_13[1], *VAR_15 = VAR_13[2];
  int VAR_16, VAR_17, VAR_18;
  uint VAR_19;
  void *VAR_20;
  FUNC_1(sizeof(unsigned int) == 4);


  FUNC_1((VAR_7 = FUNC_9(sizeof(*VAR_7))) != ((void*)0));
  FUNC_1((VAR_8 = FUNC_9(sizeof(*VAR_8))) != ((void*)0));

  FUNC_7(VAR_7, 0, sizeof(*VAR_7));
  FUNC_7(VAR_8, 0, sizeof(*VAR_8));


  FUNC_1((VAR_7->fin = FUNC_3(VAR_14, "rb")) != ((void*)0));
  FUNC_5(VAR_7->fin, -4, VAR_1);
  FUNC_1(FUNC_4((uchar*)&(VAR_8->len), 1, 4, VAR_7->fin) == 4);
  VAR_7->len = FUNC_6(VAR_7->fin);
  FUNC_5(VAR_7->fin, 0, VAR_2);

  FUNC_1((VAR_8->fout = FUNC_3(VAR_15, "wb")) != ((void*)0));

  FUNC_8 ("Inflating in=%s out=%s\n", VAR_14, VAR_15);


  VAR_17 = (VAR_8->len > VAR_0) ? VAR_4 :
                                      1 + (VAR_8->len-1) / VAR_5;
  for(VAR_16 = VAR_4 - VAR_17 + 1; VAR_16 <= VAR_4; VAR_16++)
    FUNC_1((VAR_8->block[VAR_16 % VAR_4] = FUNC_9(sizeof(outBlock))) != ((void*)0));

  VAR_8->breakNdx = (VAR_8->len < VAR_5) ? VAR_8->len : VAR_5;
  VAR_8->fullBlkCB = VAR_9;
  VAR_8->crc = ~0;


  VAR_18 = FUNC_10 (VAR_6, VAR_10, VAR_11, VAR_7->len, &VAR_19, &VAR_20);

  if (VAR_18 > 0 && VAR_19 != ~VAR_8->crc)
    VAR_18 = VAR_3;

  for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++)
    FUNC_0(VAR_8->block[VAR_16]);

  FUNC_2(VAR_7->fin);
  FUNC_0(VAR_7);
  FUNC_0(VAR_8);

  if (VAR_18 < 0)
    FUNC_8("Error during decompression: %d\n", VAR_18);

  return (VAR_18 != 0) ? 1: 0;
}
