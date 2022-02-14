
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct hllhdr {char* magic; scalar_t__ encoding; } ;
struct TYPE_6__ {struct hllhdr* ptr; } ;
typedef TYPE_1__ robj ;
typedef int client ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(client *VAR_6, robj *VAR_7) {
    struct hllhdr *VAR_8;


    if (FUNC_1(VAR_6,VAR_7,VAR_5))
        return VAR_0;

    if (!FUNC_2(VAR_7)) goto invalid;
    if (FUNC_4(VAR_7) < sizeof(*VAR_8)) goto invalid;
    VAR_8 = VAR_7->ptr;


    if (VAR_8->magic[0] != 'H' || VAR_8->magic[1] != 'Y' ||
        VAR_8->magic[2] != 'L' || VAR_8->magic[3] != 'L') goto invalid;

    if (VAR_8->encoding > VAR_4) goto invalid;


    if (VAR_8->encoding == VAR_2 &&
        FUNC_4(VAR_7) != VAR_3) goto invalid;


    return VAR_1;

invalid:
    FUNC_0(VAR_6,
        FUNC_3("-WRONGTYPE Key is not a valid "
               "HyperLogLog string value.\r\n"));
    return VAR_0;
}
