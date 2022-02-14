
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_error {int dummy; } ;
struct zip {unsigned int open_flags; int * zn; } ;


 int VAR_0 ;
 struct zip* FUNC_0 (struct zip_error*) ;
 int FUNC_1 (int*,struct zip_error*,int ) ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 (struct zip*) ;

__attribute__((used)) static struct zip *
FUNC_4(const char *VAR_1, unsigned int VAR_2, int *VAR_3)
{
    struct zip *VAR_4;
    struct zip_error VAR_5;

    if ((VAR_4=FUNC_0(&VAR_5)) == ((void*)0)) {
 FUNC_1(VAR_3, &VAR_5, 0);
 return ((void*)0);
    }

    if (VAR_1 == ((void*)0))
 VAR_4->zn = ((void*)0);
    else {
 VAR_4->zn = FUNC_2(VAR_1);
 if (!VAR_4->zn) {
     FUNC_3(VAR_4);
     FUNC_1(VAR_3, ((void*)0), VAR_0);
     return ((void*)0);
 }
    }
    VAR_4->open_flags = VAR_2;
    return VAR_4;
}
