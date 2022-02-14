
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int idReserved; int idType; } ;
struct TYPE_3__ {int bWidth; int bHeight; int dwDIBOffset; int dwDIBSize; } ;
struct test_ico {TYPE_2__ header; TYPE_1__ direntry; } ;
typedef int ico ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct test_ico VAR_3 ;
 int FUNC_0 (struct test_ico*,int,int ) ;
 int FUNC_1 (struct test_ico*,int,int ) ;

__attribute__((used)) static void FUNC_2(void)
{
    struct test_ico VAR_4;


    VAR_4 = VAR_3;
    VAR_4.direntry.bWidth = 2;
    VAR_4.direntry.bHeight = 2;
    FUNC_0(&VAR_4, sizeof(VAR_4), VAR_0);


    VAR_4 = VAR_3;
    VAR_4.direntry.dwDIBOffset = sizeof(VAR_4);
    FUNC_0(&VAR_4, sizeof(VAR_4), VAR_1);

    VAR_4 = VAR_3;
    VAR_4.direntry.dwDIBSize = sizeof(VAR_4);
    FUNC_0(&VAR_4, sizeof(VAR_4), VAR_1);


    VAR_4 = VAR_3;
    VAR_4.header.idReserved = 1;
    FUNC_1(&VAR_4, sizeof(VAR_4), VAR_0);
    VAR_4.header.idReserved = 0;
    VAR_4.header.idType = 100;
    FUNC_1(&VAR_4, sizeof(VAR_4), VAR_0);


    VAR_4 = VAR_3;
    FUNC_0(&VAR_4, sizeof(VAR_4.header) - 1, VAR_2);
    FUNC_0(&VAR_4, sizeof(VAR_4.header) + sizeof(VAR_4.direntry) - 1, VAR_1);
}
