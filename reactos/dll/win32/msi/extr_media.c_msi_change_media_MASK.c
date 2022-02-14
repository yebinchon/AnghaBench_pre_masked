
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_14__ {int * disk_prompt; } ;
struct TYPE_13__ {int db; } ;
struct TYPE_12__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef TYPE_2__ MSIPACKAGE ;
typedef TYPE_3__ MSIMEDIAINFO ;
typedef int LPWSTR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (TYPE_1__*,int,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int VAR_4 ;

__attribute__((used)) static UINT FUNC_8(MSIPACKAGE *VAR_5, MSIMEDIAINFO *VAR_6)
{
    MSIRECORD *VAR_7;
    LPWSTR VAR_8;
    UINT VAR_9 = VAR_0;

    VAR_8 = FUNC_4(VAR_5->db, VAR_4);
    VAR_7 = FUNC_0(2);

    while (VAR_9 == VAR_0 && !FUNC_7(VAR_6, VAR_8))
    {
        FUNC_3(VAR_7, 0, ((void*)0));
        FUNC_2(VAR_7, 1, VAR_3);
        FUNC_3(VAR_7, 2, VAR_6->disk_prompt);
        VAR_9 = FUNC_1(VAR_5, VAR_1 | VAR_2, VAR_7);
    }

    FUNC_6(&VAR_7->hdr);
    FUNC_5(VAR_8);

    return VAR_9;
}
