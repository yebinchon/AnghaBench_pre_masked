
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ctrlTimeout; scalar_t__ loggedIn; scalar_t__ connected; void* ctrlSocketW; void* ctrlSocketR; int cout; int cin; int ctrlSrl; } ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (scalar_t__) ;
 void* VAR_0 ;

void
FUNC_4(const FTPCIPtr VAR_1)
{







 if (VAR_1->ctrlTimeout > 0)
  (void) FUNC_3(VAR_1->ctrlTimeout);
 FUNC_0(&VAR_1->cin);
 FUNC_0(&VAR_1->cout);
 VAR_1->ctrlSocketR = VAR_0;
 VAR_1->ctrlSocketW = VAR_0;
 if (VAR_1->ctrlTimeout > 0)
  (void) FUNC_3(0);

 VAR_1->connected = 0;
 VAR_1->loggedIn = 0;
}
