
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zip_uint8_t ;
typedef scalar_t__ zip_uint64_t ;
typedef int zip_uint16_t ;
typedef scalar_t__ zip_int64_t ;
typedef int zip_flags_t ;
struct zip_string {int encoding; } ;
struct zip_entry {TYPE_1__* changes; TYPE_3__* orig; } ;
struct zip {scalar_t__ nentry; int error; struct zip_entry* entry; } ;
struct TYPE_5__ {int filename; } ;
struct TYPE_4__ {int changed; struct zip_string* filename; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct zip*) ;
 TYPE_1__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (struct zip_string*,int ) ;
 scalar_t__ FUNC_5 (struct zip*,char const*,int ,int *) ;
 int FUNC_6 (int ,struct zip_string*) ;
 int FUNC_7 (struct zip_string*) ;
 struct zip_string* FUNC_8 (int const*,int ,int,int *) ;
 scalar_t__ FUNC_9 (char const*) ;

int
FUNC_10(struct zip *VAR_10, zip_uint64_t VAR_11, const char *VAR_12, zip_flags_t VAR_13)
{
    struct zip_entry *VAR_14;
    struct zip_string *VAR_15;
    int VAR_16;
    zip_int64_t VAR_17;

    if (VAR_11 >= VAR_10->nentry) {
 FUNC_3(&VAR_10->error, VAR_5, 0);
 return -1;
    }

    if (FUNC_0(VAR_10)) {
 FUNC_3(&VAR_10->error, VAR_7, 0);
 return -1;
    }

    if (VAR_12 && FUNC_9(VAR_12) > 0) {

 if ((VAR_15=FUNC_8((const zip_uint8_t *)VAR_12, (zip_uint16_t)FUNC_9(VAR_12), VAR_13, &VAR_10->error)) == ((void*)0))
     return -1;
 if ((VAR_13 & VAR_8) == VAR_9 && FUNC_4(VAR_15, VAR_1) == VAR_2)
     VAR_15->encoding = VAR_3;
    }
    else
 VAR_15 = ((void*)0);


    if ((VAR_17=FUNC_5(VAR_10, VAR_12, 0, ((void*)0))) >= 0 && (zip_uint64_t)VAR_17 != VAR_11) {
 FUNC_7(VAR_15);
 FUNC_3(&VAR_10->error, VAR_4, 0);
 return -1;
    }


    if (VAR_17>=0 && (zip_uint64_t)VAR_17 == VAR_11) {
 FUNC_7(VAR_15);
 return 0;
    }

    VAR_14 = VAR_10->entry+VAR_11;

    if (VAR_14->changes) {
 FUNC_7(VAR_14->changes->filename);
 VAR_14->changes->filename = ((void*)0);
 VAR_14->changes->changed &= ~VAR_0;
    }

    if (VAR_14->orig)
 VAR_16 = !FUNC_6(VAR_14->orig->filename, VAR_15);
    else
 VAR_16 = 1;

    if (VAR_16) {
        if (VAR_14->changes == ((void*)0)) {
            if ((VAR_14->changes=FUNC_1(VAR_14->orig)) == ((void*)0)) {
                FUNC_3(&VAR_10->error, VAR_6, 0);
  FUNC_7(VAR_15);
                return -1;
            }
        }
        VAR_14->changes->filename = VAR_15;
        VAR_14->changes->changed |= VAR_0;
    }
    else {
 FUNC_7(VAR_15);
 if (VAR_14->changes && VAR_14->changes->changed == 0) {
     FUNC_2(VAR_14->changes);
     VAR_14->changes = ((void*)0);
 }
    }

    return 0;
}
