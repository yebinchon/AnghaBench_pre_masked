
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MemWrittenTracker {scalar_t__ written; scalar_t__ cbData; scalar_t__ pbData; } ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,void const*,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_2(void *VAR_3, const void *VAR_4, DWORD VAR_5)
{
    struct MemWrittenTracker *VAR_6 = VAR_3;
    BOOL VAR_7;

    if (VAR_6->written + VAR_5 > VAR_6->cbData)
    {
        FUNC_0(VAR_0);


        VAR_6->written += VAR_5;
        VAR_7 = VAR_1;
    }
    else
    {
        FUNC_1(VAR_6->pbData + VAR_6->written, VAR_4, VAR_5);
        VAR_6->written += VAR_5;
        VAR_7 = VAR_2;
    }
    return VAR_7;
}
