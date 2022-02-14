
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct PATH_LEN_CONSTRAINT {int dwPathLenConstraint; void* fPathLenConstraint; } ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef void* BOOL ;


 void* FUNC_0 (int const*,scalar_t__,scalar_t__,int *,scalar_t__*,scalar_t__*) ;
 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,void*,...) ;
 void* VAR_2 ;

__attribute__((used)) static BOOL FUNC_4(const BYTE *VAR_3,
 DWORD VAR_4, DWORD VAR_5, void *VAR_6, DWORD *VAR_7,
 DWORD *VAR_8)
{
    BOOL VAR_9 = VAR_2;
    DWORD VAR_10 = sizeof(struct PATH_LEN_CONSTRAINT), VAR_11;

    FUNC_3("%p, %d, %08x, %p, %d, %p\n", VAR_3, VAR_4, VAR_5,
     VAR_6, *VAR_7, VAR_8);

    if (!VAR_6)
    {
        VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_5, ((void*)0),
         &VAR_11, VAR_8);
        *VAR_7 = VAR_10;
    }
    else if (*VAR_7 < VAR_10)
    {
        FUNC_2(VAR_0);
        *VAR_7 = VAR_10;
        VAR_9 = VAR_1;
    }
    else
    {
        struct PATH_LEN_CONSTRAINT *VAR_12 = VAR_6;

        *VAR_7 = VAR_10;
        VAR_11 = sizeof(VAR_12->dwPathLenConstraint);
        VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_5,
         &VAR_12->dwPathLenConstraint, &VAR_11, VAR_8);
        if (VAR_9)
            VAR_12->fPathLenConstraint = VAR_2;
        FUNC_3("got an int, dwPathLenConstraint is %d\n",
         VAR_12->dwPathLenConstraint);
    }
    FUNC_3("returning %d (%08x)\n", VAR_9, FUNC_1());
    return VAR_9;
}
