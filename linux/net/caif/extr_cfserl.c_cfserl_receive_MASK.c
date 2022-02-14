
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_3__ {TYPE_2__* up; } ;
struct cfserl {int sync; scalar_t__ usestx; TYPE_1__ layer; struct cfpkt* incomplete_frm; } ;
struct cfpkt {int dummy; } ;
struct cflayer {int dummy; } ;
struct TYPE_4__ {int (* receive ) (TYPE_2__*,struct cfpkt*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cfpkt*,scalar_t__*,int) ;
 void* FUNC_2 (struct cfpkt*,struct cfpkt*,int) ;
 int FUNC_3 (struct cfpkt*) ;
 int FUNC_4 (struct cfpkt*,scalar_t__*,int) ;
 int FUNC_5 (struct cfpkt*) ;
 scalar_t__ FUNC_6 (struct cfpkt*) ;
 int FUNC_7 (struct cfpkt*,int*,int) ;
 struct cfpkt* FUNC_8 (struct cfpkt*,int) ;
 struct cfserl* FUNC_9 (struct cflayer*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_2__*,struct cfpkt*) ;

__attribute__((used)) static int FUNC_14(struct cflayer *VAR_6, struct cfpkt *VAR_7)
{
 struct cfserl *VAR_8 = FUNC_9(VAR_6);
 u16 VAR_9;
 struct cfpkt *VAR_10 = ((void*)0);
 struct cfpkt *VAR_11 = ((void*)0);
 u8 VAR_12;
 u16 VAR_13;
 u8 VAR_14 = VAR_0;
 int VAR_15;
 u16 VAR_16 = 0;

 FUNC_0(VAR_7 != ((void*)0));
 FUNC_11(&VAR_8->sync);

 if (VAR_8->incomplete_frm != ((void*)0)) {
  VAR_8->incomplete_frm =
      FUNC_2(VAR_8->incomplete_frm, VAR_7, VAR_16);
  VAR_10 = VAR_8->incomplete_frm;
  if (VAR_10 == ((void*)0)) {
   FUNC_12(&VAR_8->sync);
   return -VAR_2;
  }
 } else {
  VAR_10 = VAR_7;
 }
 VAR_8->incomplete_frm = ((void*)0);

 do {

  if (VAR_8->usestx) {
   FUNC_4(VAR_10, &VAR_12, 1);
   if (VAR_12 != VAR_0) {
    while (FUNC_6(VAR_10)
           && VAR_12 != VAR_0) {
     FUNC_4(VAR_10, &VAR_12, 1);
    }
    if (!FUNC_6(VAR_10)) {
     FUNC_3(VAR_10);
     VAR_8->incomplete_frm = ((void*)0);
     FUNC_12(&VAR_8->sync);
     return -VAR_3;
    }
   }
  }

  VAR_9 = FUNC_5(VAR_10);







  if (VAR_9 < 2) {
   if (VAR_8->usestx)
    FUNC_1(VAR_10, &VAR_14, 1);
   VAR_8->incomplete_frm = VAR_10;
   FUNC_12(&VAR_8->sync);
   return 0;
  }





  FUNC_7(VAR_10, &VAR_13, 2);
  VAR_16 = FUNC_10(VAR_13) + 2;



  if (VAR_16 < VAR_5
      || VAR_16 > VAR_4) {
   if (!VAR_8->usestx) {
    if (VAR_10 != ((void*)0))
     FUNC_3(VAR_10);
    VAR_8->incomplete_frm = ((void*)0);
    VAR_16 = 0;
    FUNC_12(&VAR_8->sync);
    return -VAR_3;
   }
   continue;
  }

  if (VAR_9 < VAR_16) {

   if (VAR_8->usestx)
    FUNC_1(VAR_10, &VAR_14, 1);
   VAR_8->incomplete_frm = VAR_10;
   FUNC_12(&VAR_8->sync);
   return 0;
  }





  if (VAR_9 > VAR_16)
   VAR_11 = FUNC_8(VAR_10, VAR_16);
  else
   VAR_11 = ((void*)0);


  FUNC_12(&VAR_8->sync);
  VAR_15 = VAR_8->layer.up->receive(VAR_8->layer.up, VAR_10);
  FUNC_11(&VAR_8->sync);
  if (VAR_15 == -VAR_1) {
   if (VAR_8->usestx) {
    if (VAR_11 != ((void*)0))
     VAR_10 = FUNC_2(VAR_10, VAR_11, 0);

    continue;
   } else {
    FUNC_3(VAR_10);
    VAR_10 = ((void*)0);
   }
  }

  VAR_10 = VAR_11;

 } while (VAR_10 != ((void*)0));

 FUNC_12(&VAR_8->sync);
 return 0;
}
