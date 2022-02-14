
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_17__ {int namelen; } ;
struct TYPE_16__ {TYPE_3__* pLibInfo; TYPE_2__* pTblDir; } ;
struct TYPE_15__ {int offset; int entry; int * str; } ;
struct TYPE_14__ {int name_list; } ;
struct TYPE_12__ {int length; int offset; } ;
struct TYPE_13__ {TYPE_1__ pNametab; } ;
typedef TYPE_4__ TLBString ;
typedef TYPE_5__ TLBContext ;
typedef TYPE_6__ MSFT_NameIntro ;
typedef int INT16 ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_6__*,int,TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (int ,int,char*,int,int *,int) ;
 int VAR_5 ;
 int * FUNC_4 (int *,int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static HRESULT FUNC_8(TLBContext *VAR_6)
{
    char *VAR_7;
    MSFT_NameIntro VAR_8;
    INT16 VAR_9;
    int VAR_10 = 0, VAR_11;

    FUNC_2(VAR_6, VAR_6->pTblDir->pNametab.offset);
    while (1) {
        TLBString *VAR_12;

        if (VAR_10 >= VAR_6->pTblDir->pNametab.length)
            return VAR_5;

        FUNC_1(&VAR_8, sizeof(MSFT_NameIntro), VAR_6, VAR_1);
        VAR_8.namelen &= 0xFF;
        VAR_9 = VAR_8.namelen + sizeof(MSFT_NameIntro);
        if(VAR_9 % 4)
            VAR_9 = (VAR_9 + 4) & ~0x3;
        if(VAR_9 < 8)
            VAR_9 = 8;

        VAR_7 = FUNC_5(VAR_9 + 1);
        FUNC_0(VAR_7, VAR_9 - sizeof(MSFT_NameIntro), VAR_6, VAR_1);
        VAR_7[VAR_8.namelen] = '\0';

        VAR_11 = FUNC_3(VAR_0, VAR_4 | VAR_3,
                                            VAR_7, -1, ((void*)0), 0);
        if (!VAR_11) {
            FUNC_6(VAR_7);
            return VAR_2;
        }

        VAR_12 = FUNC_5(sizeof(TLBString));

        VAR_12->offset = VAR_10;
        VAR_12->str = FUNC_4(((void*)0), VAR_11 * sizeof(WCHAR));
        FUNC_3(VAR_0, VAR_4, VAR_7, -1, VAR_12->str, VAR_11);

        FUNC_6(VAR_7);

        FUNC_7(&VAR_6->pLibInfo->name_list, &VAR_12->entry);

        VAR_10 += VAR_9;
    }
}
