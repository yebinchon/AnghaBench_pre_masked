
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apartment {int oxid; int refs; } ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static DWORD FUNC_3(struct apartment *VAR_0)
{
    DWORD VAR_1 = FUNC_0(&VAR_0->refs);
    FUNC_1("%s: before = %d\n", FUNC_2(VAR_0->oxid), VAR_1 - 1);
    return VAR_1;
}
