
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int chksum_str ;
struct TYPE_3__ {int len; int block_buf; int checksum; } ;
typedef TYPE_1__ CDCDescriptor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*,int,char*,char*) ;
 int FUNC_5 (int,int ,int ) ;

__attribute__((used)) static int FUNC_6 (CDCDescriptor *VAR_5)
{
    char VAR_6[VAR_1];
    char VAR_7[VAR_0 *2 + 1];
    int VAR_8, VAR_9;

    FUNC_2(VAR_7, 0, sizeof(VAR_7));
    FUNC_3 (VAR_5->checksum, VAR_7, VAR_0);
    FUNC_4 (VAR_6, VAR_1, "./%s", VAR_7);
    VAR_8 = FUNC_1 (VAR_6, VAR_4 | VAR_3 | VAR_2, 0644);
    if (VAR_8 < 0)
        return -1;

    VAR_9 = FUNC_5 (VAR_8, VAR_5->block_buf, VAR_5->len);
    FUNC_0 (VAR_8);
    return VAR_9;
}
