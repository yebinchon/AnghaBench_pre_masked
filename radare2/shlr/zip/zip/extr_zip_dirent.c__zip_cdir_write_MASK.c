
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t zip_uint64_t ;
typedef size_t zip_uint32_t ;
typedef size_t zip_uint16_t ;
typedef int zip_int64_t ;
struct zip_string {size_t length; int raw; } ;
struct zip_filelist {int idx; } ;
struct zip_entry {scalar_t__ orig; scalar_t__ changes; } ;
struct zip {int error; struct zip_string* comment_orig; struct zip_string* comment_changes; scalar_t__ comment_changed; struct zip_entry* entry; } ;
typedef scalar_t__ off_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (scalar_t__,int *,int ,int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (size_t,int *) ;
 int FUNC_3 (size_t,int *) ;
 int FUNC_4 (size_t,int *) ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ,int,int,int *) ;

zip_int64_t
FUNC_8(struct zip *VAR_10, const struct zip_filelist *VAR_11, zip_uint64_t VAR_12, FILE *VAR_13)
{
    off_t VAR_14;
    zip_uint64_t VAR_15, VAR_16;
    struct zip_string *VAR_17;
    zip_uint64_t VAR_18;
    int VAR_19;
    int VAR_20;

    if ((VAR_14=FUNC_6(VAR_13)) < 0) {
        FUNC_1(&VAR_10->error, VAR_4, VAR_9);
        return -1;
    }
    VAR_15 = (zip_uint64_t)VAR_14;

    VAR_19 = 0;

    for (VAR_18=0; VAR_18<VAR_12; VAR_18++) {
 struct zip_entry *VAR_21 = VAR_10->entry+VAR_11[VAR_18].idx;

 if ((VAR_20=FUNC_0(VAR_21->changes ? VAR_21->changes : VAR_21->orig, VAR_13, VAR_6, &VAR_10->error)) < 0)
     return -1;
 if (VAR_20)
     VAR_19 = 1;
    }

    if ((VAR_14=FUNC_6(VAR_13)) < 0) {
        FUNC_1(&VAR_10->error, VAR_4, VAR_9);
        return -1;
    }
    VAR_16 = (zip_uint64_t)VAR_14 - VAR_15;

    if (VAR_15 > VAR_8 || VAR_12 > VAR_7)
 VAR_19 = 1;

    if (VAR_19) {
 FUNC_7(VAR_2, 1, 4, VAR_13);
 FUNC_4(VAR_0-12, VAR_13);
 FUNC_2(45, VAR_13);
 FUNC_2(45, VAR_13);
 FUNC_3(0, VAR_13);
 FUNC_3(0, VAR_13);
 FUNC_4(VAR_12, VAR_13);
 FUNC_4(VAR_12, VAR_13);
 FUNC_4(VAR_16, VAR_13);
 FUNC_4(VAR_15, VAR_13);

 FUNC_7(VAR_1, 1, 4, VAR_13);
 FUNC_3(0, VAR_13);
 FUNC_4(VAR_15+VAR_16, VAR_13);
 FUNC_3(1, VAR_13);

    }


    FUNC_7(VAR_3, 1, 4, VAR_13);
    FUNC_3(0, VAR_13);
    FUNC_2(VAR_12 >= VAR_7 ? VAR_7 : (zip_uint16_t)VAR_12, VAR_13);
    FUNC_2(VAR_12 >= VAR_7 ? VAR_7 : (zip_uint16_t)VAR_12, VAR_13);
    FUNC_3(VAR_16 >= VAR_8 ? VAR_8 : (zip_uint32_t)VAR_16, VAR_13);
    FUNC_3(VAR_15 >= VAR_8 ? VAR_8 : (zip_uint32_t)VAR_15, VAR_13);

    VAR_17 = VAR_10->comment_changed ? VAR_10->comment_changes : VAR_10->comment_orig;

    FUNC_2(VAR_17 ? VAR_17->length : 0, VAR_13);
    if (VAR_17)
 FUNC_7(VAR_17->raw, 1, VAR_17->length, VAR_13);

    if (FUNC_5(VAR_13)) {
 FUNC_1(&VAR_10->error, VAR_5, VAR_9);
 return -1;
    }

    return (zip_int64_t)VAR_16;
}
