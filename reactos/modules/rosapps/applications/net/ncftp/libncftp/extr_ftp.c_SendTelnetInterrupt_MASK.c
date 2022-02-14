
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * cout; int ctrlSocketW; } ;
typedef TYPE_1__* FTPCIPtr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__* const,int ,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,int,int ) ;

void
FUNC_4(const FTPCIPtr VAR_5)
{
 char VAR_6[4];





 if (VAR_5->cout != ((void*)0))
  (void) FUNC_1(VAR_5->cout);

 VAR_6[0] = (char) (unsigned char) VAR_1;
 VAR_6[1] = (char) (unsigned char) VAR_2;
 (void) FUNC_3(VAR_5->ctrlSocketW, VAR_6, 2, 0);



 VAR_6[0] = (char) (unsigned char) VAR_1;
 VAR_6[1] = (char) (unsigned char) VAR_0;
 if (FUNC_3(VAR_5->ctrlSocketW, VAR_6, 2, VAR_3) != 2)
  FUNC_0(VAR_5, VAR_4, "Could not send an urgent message.\n");
}
