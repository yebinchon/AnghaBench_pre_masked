
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_uint64_t ;
typedef int zip_int64_t ;
typedef scalar_t__ uLong ;
struct zip_filelist {int dummy; } ;
struct zip {int error; } ;
typedef scalar_t__ off_t ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct zip*,struct zip_filelist const*,int ,int *) ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,int ,scalar_t__*,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char*,int,int,int *) ;
 int FUNC_6 (char*,int,char*,long) ;
 scalar_t__ FUNC_7 (struct zip*,int ,int ) ;

__attribute__((used)) static int
FUNC_8(struct zip *VAR_6, const struct zip_filelist *VAR_7, zip_uint64_t VAR_8, FILE *VAR_9)
{
    off_t VAR_10, VAR_11;
    zip_int64_t VAR_12;
    uLong VAR_13;
    char VAR_14[VAR_1+1];

    VAR_10 = FUNC_4(VAR_9);
 if (VAR_10 < 0)
  return -1;

    if ((VAR_12=FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9)) < 0)
 return -1;

    VAR_11 = FUNC_4(VAR_9);

    if (FUNC_7(VAR_6, VAR_2, 0) == 0)
 return 0;




    if (FUNC_2(VAR_9, VAR_10, VAR_12, &VAR_13, &VAR_6->error) < 0)
 return -1;

    FUNC_6(VAR_14, sizeof(VAR_14), "%08lX", (long)VAR_13);

    if (FUNC_3(VAR_9, VAR_11-VAR_1, VAR_0) < 0) {
 FUNC_1(&VAR_6->error, VAR_3, VAR_5);
 return -1;
    }

    if (FUNC_5(VAR_14, VAR_1, 1, VAR_9) != 1) {
 FUNC_1(&VAR_6->error, VAR_4, VAR_5);
 return -1;
    }

    return 0;
}
