
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ zip_uint64_t ;
typedef int zip_int64_t ;
typedef int zip_flags_t ;
struct zip_source {int dummy; } ;
struct zip {scalar_t__ nentry; TYPE_1__* entry; int error; } ;
struct TYPE_5__ {int changed; int comp_method; } ;
struct TYPE_4__ {struct zip_source* source; TYPE_3__* changes; int * orig; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct zip*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct zip*) ;
 TYPE_3__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct zip*,char const*,int,int *) ;
 scalar_t__ FUNC_6 (struct zip*,scalar_t__,char const*,int) ;
 int FUNC_7 (TYPE_1__*) ;

zip_int64_t
FUNC_8(struct zip *VAR_6, zip_uint64_t VAR_7, const char *VAR_8, struct zip_source *VAR_9, zip_flags_t VAR_10)
{
    zip_uint64_t VAR_11;

    if (FUNC_0(VAR_6)) {
 FUNC_4(&VAR_6->error, VAR_3, 0);
 return -1;
    }

    VAR_11 = VAR_6->nentry;
    if (VAR_7 == VAR_5) {
 zip_int64_t VAR_12 = -1;

 if (VAR_10 & VAR_4)
     VAR_12 = FUNC_5(VAR_6, VAR_8, VAR_10, ((void*)0));

 if (VAR_12 == -1) {

     if ((VAR_12=FUNC_1(VAR_6)) < 0)
  return -1;
 }
 VAR_7 = (zip_uint64_t)VAR_12;
    }

    if (VAR_8 && FUNC_6(VAR_6, VAR_7, VAR_8, VAR_10) != 0) {
 if (VAR_6->nentry != VAR_11) {
     FUNC_3(VAR_6->entry+VAR_7);
     VAR_6->nentry = VAR_11;
 }
 return -1;
    }



    FUNC_7(VAR_6->entry+VAR_7);

    if (VAR_6->entry[VAR_7].orig != ((void*)0) && (VAR_6->entry[VAR_7].changes == ((void*)0) || (VAR_6->entry[VAR_7].changes->changed & VAR_1) == 0)) {
        if (VAR_6->entry[VAR_7].changes == ((void*)0)) {
            if ((VAR_6->entry[VAR_7].changes=FUNC_2(VAR_6->entry[VAR_7].orig)) == ((void*)0)) {
                FUNC_4(&VAR_6->error, VAR_2, 0);
                return -1;
            }
        }

        VAR_6->entry[VAR_7].changes->comp_method = VAR_0;
        VAR_6->entry[VAR_7].changes->changed |= VAR_1;
    }

    VAR_6->entry[VAR_7].source = VAR_9;

    return (zip_int64_t)VAR_7;
}
