
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nextFree; int fd; } ;
typedef TYPE_1__ Vfd ;
typedef int Size ;
typedef int Index ;
typedef size_t File ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int) ;

__attribute__((used)) static File
FUNC_8(void)
{
 Index VAR_6;
 File VAR_7;

 FUNC_1(FUNC_3(VAR_2, "AllocateVfd. Size %zu", VAR_3));

 FUNC_0(VAR_3 > 0);

 if (VAR_5[0].nextFree == 0)
 {





  Size VAR_8 = VAR_3 * 2;
  Vfd *VAR_9;

  if (VAR_8 < 32)
   VAR_8 = 32;




  VAR_9 = (Vfd *) FUNC_7(VAR_5, sizeof(Vfd) * VAR_8);
  if (VAR_9 == ((void*)0))
   FUNC_4(VAR_1,
     (FUNC_5(VAR_0),
      FUNC_6("out of memory")));
  VAR_5 = VAR_9;




  for (VAR_6 = VAR_3; VAR_6 < VAR_8; VAR_6++)
  {
   FUNC_2((char *) &(VAR_5[VAR_6]), 0, sizeof(Vfd));
   VAR_5[VAR_6].nextFree = VAR_6 + 1;
   VAR_5[VAR_6].fd = VAR_4;
  }
  VAR_5[VAR_8 - 1].nextFree = 0;
  VAR_5[0].nextFree = VAR_3;




  VAR_3 = VAR_8;
 }

 VAR_7 = VAR_5[0].nextFree;

 VAR_5[0].nextFree = VAR_5[VAR_7].nextFree;

 return VAR_7;
}
