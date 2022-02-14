
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cmdlen; int cmdpos; int cmdspos; scalar_t__ cmdbuff; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void
FUNC_5()
{
    int VAR_6, VAR_7, VAR_8;

    FUNC_3();
    if (VAR_1)
    {
 VAR_7 = VAR_0 * VAR_3;
 if (VAR_7 < 0)
     VAR_7 = VAR_2;
    }
    else
 VAR_7 = VAR_2;
    for (VAR_6 = 0; VAR_6 < VAR_4.cmdlen && VAR_6 < VAR_4.cmdpos; ++VAR_6)
    {
 VAR_8 = FUNC_0(VAR_6);







 if ((VAR_4.cmdspos += VAR_8) >= VAR_7)
 {
     VAR_4.cmdspos -= VAR_8;
     break;
 }




    }
}
