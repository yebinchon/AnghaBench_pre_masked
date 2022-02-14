
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REFIID ;
typedef int IStream ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(REFIID VAR_1, void *VAR_2)
{
    if(!VAR_2) return;

    if(FUNC_2(VAR_1, &VAR_0))
        FUNC_1((IStream *)VAR_2);
    else
        FUNC_0("Unhandled data format %s\n", FUNC_3(VAR_1));
}
