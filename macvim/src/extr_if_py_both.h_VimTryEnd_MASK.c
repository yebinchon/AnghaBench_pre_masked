
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int char_u ;
struct TYPE_2__ {scalar_t__ value; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int * FUNC_6 (int *,int ,int *,int*) ;
 void* VAR_6 ;
 int ** VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(void)
{
    --VAR_8;



    VAR_4 = VAR_1;

    if (VAR_6)
    {
 if (VAR_5)
     FUNC_4();
 VAR_6 = VAR_1;
 FUNC_2(VAR_2);
 return -1;
    }
    else if (VAR_7 != ((void*)0) && *VAR_7 != ((void*)0))
    {
 int VAR_9;
 char_u *VAR_10;

 VAR_10 = FUNC_6(*VAR_7, VAR_0, ((void*)0), &VAR_9);

 if (VAR_10 == ((void*)0))
 {
     FUNC_0();
     return -1;
 }

 FUNC_3((char *) VAR_10);

 FUNC_5();

 if (VAR_9)
     FUNC_7(VAR_10);

 return -1;
    }
    else if (!VAR_5)
 return (FUNC_1() ? -1 : 0);

    else if (FUNC_1())
    {
 FUNC_4();
 return -1;
    }

    else
    {
 FUNC_3((char *)VAR_3->value);
 FUNC_4();
 return -1;
    }
}
