
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zip_uint8_t ;
typedef scalar_t__ zip_uint64_t ;
typedef scalar_t__ zip_uint16_t ;
struct zip_extra_field {int dummy; } ;
struct zip_entry {TYPE_2__* changes; TYPE_1__* orig; } ;
struct zip {scalar_t__ nentry; int error; int zp; struct zip_entry* entry; } ;
typedef int off_t ;
typedef int b ;
struct TYPE_4__ {int local_extra_fields_read; int extra_fields; } ;
struct TYPE_3__ {int local_extra_fields_read; int extra_fields; scalar_t__ offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct zip_extra_field*) ;
 struct zip_extra_field* FUNC_1 (int *,scalar_t__,int ,int *) ;
 struct zip_extra_field* FUNC_2 (struct zip_extra_field*) ;
 int FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (unsigned char const**) ;
 int * FUNC_5 (int *,int ,scalar_t__,int ,int *) ;
 int VAR_6 ;
 int FUNC_6 (unsigned char*,int,int,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (int ,int ,int ) ;

int
FUNC_10(struct zip *VAR_7, zip_uint64_t VAR_8)
{
    struct zip_entry *VAR_9;
    unsigned char VAR_10[4];
    const unsigned char *VAR_11;
    zip_uint16_t VAR_12, VAR_13;

    if (VAR_8 >= VAR_7->nentry) {
 FUNC_3(&VAR_7->error, VAR_3, 0);
 return -1;
    }

    VAR_9 = VAR_7->entry+VAR_8;

    if (VAR_9->orig == ((void*)0) || VAR_9->orig->local_extra_fields_read)
 return 0;


    if (FUNC_9(VAR_7->zp, (off_t)(VAR_9->orig->offset + 26), VAR_1) < 0) {
 FUNC_3(&VAR_7->error, VAR_5, VAR_6);
 return -1;
    }

    if (FUNC_6(VAR_10, sizeof(VAR_10), 1, VAR_7->zp) != 1) {
 FUNC_3(&VAR_7->error, VAR_4, VAR_6);
 return -1;
    }

    VAR_11 = VAR_10;
    VAR_12 = FUNC_4(&VAR_11);
    VAR_13 = FUNC_4(&VAR_11);

    if (VAR_13 > 0) {
 struct zip_extra_field *VAR_14;
 zip_uint8_t *VAR_15;

 if (FUNC_8(VAR_7->zp, VAR_12, VAR_0) < 0) {
     FUNC_3(&VAR_7->error, VAR_5, VAR_6);
     return -1;
 }

 VAR_15 = FUNC_5(((void*)0), VAR_7->zp, VAR_13, 0, &VAR_7->error);

 if (VAR_15 == ((void*)0))
     return -1;

 if ((VAR_14=FUNC_1(VAR_15, VAR_13, VAR_2, &VAR_7->error)) == ((void*)0)) {
     FUNC_7(VAR_15);
     return -1;
 }
 FUNC_7(VAR_15);

        VAR_14 = FUNC_2(VAR_14);
 VAR_9->orig->extra_fields = FUNC_0(VAR_9->orig->extra_fields, VAR_14);
    }

    VAR_9->orig->local_extra_fields_read = 1;

    if (VAR_9->changes && VAR_9->changes->local_extra_fields_read == 0) {
 VAR_9->changes->extra_fields = VAR_9->orig->extra_fields;
 VAR_9->changes->local_extra_fields_read = 1;
    }

    return 0;
}
