
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct wspace {int* derrlocs; int* errlocs; int * s; int * r; int * c; int * corr; } ;
struct rs_control {TYPE_1__* codec; } ;
struct estat {int nwords; int dwrong; int wepos; int irv; } ;
struct TYPE_2__ {int nroots; } ;





 int FUNC_0 (struct rs_control*,int *,int,int *) ;
 int FUNC_1 (struct rs_control*,int *,int *,int,int *,int,int*,int ,int *) ;
 int FUNC_2 (int *,int,int *,int*) ;
 int FUNC_3 (struct rs_control*,struct wspace*,int,int,int) ;
 scalar_t__ FUNC_4 (int *,int *,int) ;

__attribute__((used)) static void FUNC_5(struct rs_control *VAR_0, int VAR_1, int VAR_2,
  int VAR_3, int VAR_4, struct estat *VAR_5,
  struct wspace *VAR_6, int VAR_7)
{
 int VAR_8 = VAR_1 - VAR_0->codec->nroots;
 int *VAR_9 = VAR_6->derrlocs;
 int *VAR_10 = VAR_6->errlocs;
 uint16_t *VAR_11 = VAR_6->corr;
 uint16_t *VAR_12 = VAR_6->c;
 uint16_t *VAR_13 = VAR_6->r;
 uint16_t *VAR_14 = VAR_6->s;
 int VAR_15, VAR_16;
 int VAR_17, VAR_18;

 for (VAR_18 = 0; VAR_18 < VAR_4; VAR_18++) {
  VAR_16 = FUNC_3(VAR_0, VAR_6, VAR_1, VAR_2, VAR_3);

  switch (VAR_7) {
  case 129:
   VAR_15 = FUNC_1(VAR_0, VAR_13, VAR_13 + VAR_8, VAR_8,
     ((void*)0), VAR_3, VAR_9, 0, VAR_11);
   FUNC_2(VAR_13, VAR_15, VAR_11, VAR_9);
   break;
  case 130:
   FUNC_0(VAR_0, VAR_13, VAR_1, VAR_14);
   VAR_15 = FUNC_1(VAR_0, ((void*)0), ((void*)0), VAR_8,
     VAR_14, VAR_3, VAR_9, 0, VAR_11);
   FUNC_2(VAR_13, VAR_15, VAR_11, VAR_9);
   break;
  case 128:
   VAR_15 = FUNC_1(VAR_0, VAR_13, VAR_13 + VAR_8, VAR_8,
     ((void*)0), VAR_3, VAR_9, 0, ((void*)0));
   break;
  default:
   continue;
  }

  if (VAR_15 != VAR_16)
   VAR_5->irv++;

  if (VAR_7 != 128) {
   for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++) {
    if (VAR_10[VAR_9[VAR_17]] != 1)
     VAR_5->wepos++;
   }
  }

  if (FUNC_4(VAR_13, VAR_12, VAR_1 * sizeof(*VAR_13)))
   VAR_5->dwrong++;
 }
 VAR_5->nwords += VAR_4;
}
