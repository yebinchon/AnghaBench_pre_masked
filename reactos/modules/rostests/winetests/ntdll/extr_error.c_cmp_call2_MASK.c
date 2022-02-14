
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int NTSTATUS ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,char const*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(NTSTATUS VAR_2, ULONG VAR_3, const char* VAR_4)
{
    ULONG VAR_5;

    VAR_5 = FUNC_1(VAR_2);
    FUNC_0(VAR_5 == VAR_3 ||
       (!VAR_1 && VAR_5 == VAR_0),
       "%s (%x): got %u, expected %u (or MID_NOT_FOUND)\n",
       VAR_4, VAR_2, VAR_5, VAR_3);
}
