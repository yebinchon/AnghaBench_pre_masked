
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int orig_sig; int sig; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_5 (int ,int ,int ,TYPE_1__*,int *) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int ,int ) ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_10(void)
{
 int VAR_11;

 VAR_7 = FUNC_2(VAR_10,
         VAR_1, ((void*)0));
 if (!FUNC_0(VAR_7)) {
  FUNC_9(VAR_7, VAR_3);
  FUNC_4(VAR_8);
  VAR_11 = FUNC_5(VAR_4, 0,
     VAR_9,
     VAR_8, ((void*)0));
  if (VAR_11)
   goto put;

  if (!FUNC_6(VAR_2, VAR_8->sig, 10)) {
   FUNC_7(VAR_8->sig, VAR_8->orig_sig, 10);

   VAR_11 = FUNC_5(VAR_5, VAR_6,
      VAR_9,
      VAR_8, ((void*)0));
  } else {
   VAR_11 = -VAR_0;
  }

put:
  if (VAR_11)
   FUNC_3(VAR_7, VAR_1);
  else
   FUNC_8("Image signature found, resuming\n");
 } else {
  VAR_11 = FUNC_1(VAR_7);
 }

 if (VAR_11)
  FUNC_8("Image not found (code %d)\n", VAR_11);

 return VAR_11;
}
