
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct wspace {int* derrlocs; int * r; int * corr; } ;
struct rs_control {TYPE_1__* codec; } ;
struct bcstat {int nwords; int rfail; int noncw; int rsuccess; } ;
struct TYPE_2__ {int nroots; } ;


 int FUNC_0 (struct rs_control*,int *,int *,int,int *,int,int*,int ,int *) ;
 int FUNC_1 (struct rs_control*,int *,int,int *,int ) ;
 int FUNC_2 (int *,int,int *,int*) ;
 int FUNC_3 (struct rs_control*,struct wspace*,int,int,int) ;
 scalar_t__ FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static void FUNC_6(struct rs_control *VAR_0, int VAR_1, int VAR_2,
  int VAR_3, int VAR_4, struct bcstat *VAR_5,
  struct wspace *VAR_6)
{
 int VAR_7 = VAR_0->codec->nroots;
 int VAR_8 = VAR_1 - VAR_7;
 int *VAR_9 = VAR_6->derrlocs;
 uint16_t *VAR_10 = VAR_6->corr;
 uint16_t *VAR_11 = VAR_6->r;
 int VAR_12, VAR_13;

 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
  FUNC_3(VAR_0, VAR_6, VAR_1, VAR_2, VAR_3);
  VAR_12 = FUNC_0(VAR_0, VAR_11, VAR_11 + VAR_8, VAR_8,
    ((void*)0), VAR_3, VAR_9, 0, VAR_10);
  FUNC_2(VAR_11, VAR_12, VAR_10, VAR_9);

  if (VAR_12 >= 0) {
   VAR_5->rsuccess++;
   FUNC_5(VAR_10, 0, VAR_7 * sizeof(*VAR_10));
   FUNC_1(VAR_0, VAR_11, VAR_8, VAR_10, 0);

   if (FUNC_4(VAR_11 + VAR_8, VAR_10, VAR_7 * sizeof(*VAR_10)))
    VAR_5->noncw++;
  } else {
   VAR_5->rfail++;
  }
 }
 VAR_5->nwords += VAR_4;
}
