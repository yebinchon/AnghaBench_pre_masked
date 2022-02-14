
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* zip_uint64_t ;
struct zip_source {int dummy; } ;
struct zip {int error; } ;
struct window {void* left; void* len; void* skip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 struct zip_source* FUNC_2 (struct zip*,struct zip_source*,int ,struct window*) ;

struct zip_source *
FUNC_3(struct zip *VAR_3, struct zip_source *VAR_4, zip_uint64_t VAR_5, zip_uint64_t VAR_6)
{
    struct window *VAR_7;

    if (VAR_4 == ((void*)0)) {
 FUNC_0(&VAR_3->error, VAR_0, 0);
 return ((void*)0);
    }

    if ((VAR_7=(struct window *)FUNC_1(sizeof(*VAR_7))) == ((void*)0)) {
 FUNC_0(&VAR_3->error, VAR_1, 0);
 return ((void*)0);
    }

    VAR_7->skip = VAR_5;
    VAR_7->len = VAR_6;
    VAR_7->left = VAR_6;

    return FUNC_2(VAR_3, VAR_4, VAR_2, VAR_7);
}
