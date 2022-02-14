
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_uint8_t ;
typedef int zip_uint64_t ;
typedef int zip_flags_t ;
struct zip_error {int dummy; } ;
struct zip_dirent {int filename; } ;
struct zip {int dummy; } ;


 struct zip_dirent* FUNC_0 (struct zip*,int ,int ,struct zip_error*) ;
 int * FUNC_1 (int ,int *,int ,struct zip_error*) ;

const char *
FUNC_2(struct zip *VAR_0, zip_uint64_t VAR_1, zip_flags_t VAR_2, struct zip_error *VAR_3)
{
    struct zip_dirent *VAR_4;
    const zip_uint8_t *VAR_5;

    if ((VAR_4=FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3)) == ((void*)0))
 return ((void*)0);

    if ((VAR_5=FUNC_1(VAR_4->filename, ((void*)0), VAR_2, VAR_3)) == ((void*)0))
 return ((void*)0);

    return (const char *)VAR_5;
}
