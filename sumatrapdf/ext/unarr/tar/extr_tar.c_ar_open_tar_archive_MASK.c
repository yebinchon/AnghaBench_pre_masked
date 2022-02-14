
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ar_stream ;
struct TYPE_4__ {int checksum; } ;
struct TYPE_5__ {TYPE_1__ entry; } ;
typedef TYPE_2__ ar_archive_tar ;
typedef int ar_archive ;


 int VAR_0 ;
 int * FUNC_0 (int *,int,int ,int ,int ,int ,int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_4 ;

ar_archive *FUNC_4(ar_stream *VAR_5)
{
    ar_archive *VAR_6;
    ar_archive_tar *VAR_7;

    if (!FUNC_1(VAR_5, 0, VAR_0))
        return ((void*)0);

    VAR_6 = FUNC_0(VAR_5, sizeof(ar_archive_tar), VAR_1, VAR_3, VAR_2, VAR_4, ((void*)0), 0);
    if (!VAR_6)
        return ((void*)0);

    VAR_7 = (ar_archive_tar *)VAR_6;
    if (!FUNC_3(VAR_7) || !VAR_7->entry.checksum) {
        FUNC_2(VAR_6);
        return ((void*)0);
    }

    return VAR_6;
}
