
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG_PTR ;
typedef int UCHAR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,int*) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static BOOLEAN FUNC_4(
    ULONG_PTR VAR_8)
{
    UCHAR VAR_9;

    FUNC_0(VAR_4, ("Probing address 0x%x\n", VAR_8));


    FUNC_2(VAR_8 + VAR_6, 0);


    FUNC_2(VAR_8 + VAR_5, VAR_2 | VAR_0);


    FUNC_3(1600);


    FUNC_1(VAR_8 + VAR_5, &VAR_9);

    if ((VAR_9 == (VAR_0 | VAR_2)) || (VAR_9 == (VAR_0 | VAR_2 | VAR_1)))
        return VAR_7;
    else
        return VAR_3;
}
