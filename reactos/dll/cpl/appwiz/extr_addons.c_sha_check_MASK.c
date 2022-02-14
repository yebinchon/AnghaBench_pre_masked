
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sha ;
typedef int WCHAR ;
typedef int ULONG ;
struct TYPE_2__ {int sha; } ;
typedef int SHA_CTX ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char const*,int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int *,int ,int ,int ,int *) ;
 scalar_t__ FUNC_5 (int const*,int ,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (scalar_t__,int *) ;
 scalar_t__ VAR_4 ;
 unsigned char* FUNC_7 (scalar_t__,int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (unsigned char const*) ;
 int FUNC_9 (char*,char*,int ) ;
 TYPE_1__* VAR_8 ;
 int FUNC_10 (char*,char*,unsigned char) ;
 scalar_t__ FUNC_11 (char*,int ) ;

__attribute__((used)) static BOOL FUNC_12(const WCHAR *VAR_9)
{
    const unsigned char *VAR_10;
    HANDLE VAR_11, VAR_12;
    ULONG VAR_13[5];
    char VAR_14[2*sizeof(VAR_13)+1];
    SHA_CTX VAR_15;
    DWORD VAR_16, VAR_17;

    VAR_11 = FUNC_5(VAR_9, VAR_3, 0, ((void*)0), VAR_5, VAR_1, ((void*)0));
    if(VAR_11 == VAR_4)
        return VAR_0;

    VAR_16 = FUNC_6(VAR_11, ((void*)0));

    VAR_12 = FUNC_4(VAR_11, ((void*)0), VAR_6, 0, 0, ((void*)0));
    FUNC_3(VAR_11);
    if(!VAR_12)
        return VAR_0;

    VAR_10 = FUNC_7(VAR_12, VAR_2, 0, 0, 0);
    FUNC_3(VAR_12);
    if(!VAR_10)
        return VAR_0;

    FUNC_1(&VAR_15);
    FUNC_2(&VAR_15, VAR_10, VAR_16);
    FUNC_0(&VAR_15, VAR_13);

    FUNC_8(VAR_10);

    for(VAR_17=0; VAR_17 < sizeof(VAR_13); VAR_17++)
        FUNC_10(VAR_14 + VAR_17*2, "%02x", *((unsigned char*)VAR_13+VAR_17));

    if(FUNC_11(VAR_14, VAR_8->sha)) {
        FUNC_9("Got %s, expected %s\n", VAR_14, VAR_8->sha);
        return VAR_0;
    }

    return VAR_7;
}
