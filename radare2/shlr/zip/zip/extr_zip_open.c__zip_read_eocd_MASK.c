
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zip_uint64_t ;
struct zip_error {int dummy; } ;
struct zip_cdir {void* offset; void* size; } ;
typedef void* off_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct zip_cdir* FUNC_0 (scalar_t__,struct zip_error*) ;
 int FUNC_1 (struct zip_error*,int ,int ) ;
 scalar_t__ FUNC_2 (unsigned char const**) ;
 scalar_t__ FUNC_3 (unsigned char const**) ;

__attribute__((used)) static struct zip_cdir *
FUNC_4(const unsigned char *VAR_7, const unsigned char *VAR_8, off_t VAR_9, size_t VAR_10,
        unsigned int VAR_11, struct zip_error *VAR_12)
{
    struct zip_cdir *VAR_13;
    const unsigned char *VAR_14;
    zip_uint64_t VAR_15, VAR_16, VAR_17, VAR_18;

    if (VAR_7+VAR_1 > VAR_8+VAR_10) {
 FUNC_1(VAR_12, VAR_3, 0);
 return ((void*)0);
    }

    VAR_14 = VAR_7 + 8;


    VAR_15 = FUNC_2(&VAR_14);

    VAR_16 = FUNC_2(&VAR_14);

    if (VAR_16 != VAR_15) {
 FUNC_1(VAR_12, VAR_4, 0);
 return ((void*)0);
    }

    VAR_17 = FUNC_3(&VAR_14);
    VAR_18 = FUNC_3(&VAR_14);

    if (VAR_17 > VAR_6 || VAR_18 > VAR_6 || VAR_18+VAR_17 > VAR_6) {
        FUNC_1(VAR_12, VAR_5, VAR_0);
        return ((void*)0);
    }

    if (VAR_18+VAR_17 > (zip_uint64_t)(VAR_9 + (VAR_7-VAR_8))) {

 FUNC_1(VAR_12, VAR_3, 0);
 return ((void*)0);
    }

    if ((VAR_11 & VAR_2) && VAR_18+VAR_17 != (zip_uint64_t)(VAR_9 + (VAR_7-VAR_8))) {
 FUNC_1(VAR_12, VAR_3, 0);
 return ((void*)0);
    }

    if ((VAR_13=FUNC_0(VAR_16, VAR_12)) == ((void*)0))
 return ((void*)0);

    VAR_13->size = (off_t)VAR_17;
    VAR_13->offset = (off_t)VAR_18;

    return VAR_13;
}
