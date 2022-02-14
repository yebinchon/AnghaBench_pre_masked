
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_13__ {int dwFileHashInfoSize; void** dwData; } ;
struct TYPE_17__ {TYPE_1__ hash; int File; } ;
struct TYPE_16__ {int db; } ;
struct TYPE_15__ {int hdr; } ;
struct TYPE_14__ {int hdr; } ;
typedef TYPE_2__ MSIRECORD ;
typedef TYPE_3__ MSIQUERY ;
typedef TYPE_4__ MSIPACKAGE ;
typedef int MSIFILEHASHINFO ;
typedef TYPE_5__ MSIFILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_3__**,char const*,int ) ;
 void* FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_2__**) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static UINT FUNC_7(MSIPACKAGE *VAR_1, MSIFILE *VAR_2)
{
    static const WCHAR VAR_3[] = {
        'S','E','L','E','C','T',' ','*',' ', 'F','R','O','M',' ',
        '`','M','s','i','F','i','l','e','H','a','s','h','`',' ',
        'W','H','E','R','E',' ','`','F','i','l','e','_','`',' ','=',' ','\'','%','s','\'',0};
    MSIQUERY *VAR_4 = ((void*)0);
    MSIRECORD *VAR_5 = ((void*)0);
    UINT VAR_6;

    FUNC_4("%s\n", FUNC_5(VAR_2->File));

    VAR_6 = FUNC_0(VAR_1->db, &VAR_4, VAR_3, VAR_2->File);
    if (VAR_6 != VAR_0)
        goto done;

    VAR_6 = FUNC_2(VAR_4, ((void*)0));
    if (VAR_6 != VAR_0)
        goto done;

    VAR_6 = FUNC_3(VAR_4, &VAR_5);
    if (VAR_6 != VAR_0)
        goto done;

    VAR_2->hash.dwFileHashInfoSize = sizeof(MSIFILEHASHINFO);
    VAR_2->hash.dwData[0] = FUNC_1(VAR_5, 3);
    VAR_2->hash.dwData[1] = FUNC_1(VAR_5, 4);
    VAR_2->hash.dwData[2] = FUNC_1(VAR_5, 5);
    VAR_2->hash.dwData[3] = FUNC_1(VAR_5, 6);

done:
    if (VAR_4) FUNC_6(&VAR_4->hdr);
    if (VAR_5) FUNC_6(&VAR_5->hdr);
    return VAR_6;
}
