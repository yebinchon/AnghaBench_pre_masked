
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_error {int dummy; } ;
struct zip {int * tempdir; int * file; scalar_t__ nfile_alloc; scalar_t__ nfile; int * entry; scalar_t__ nentry_alloc; scalar_t__ nentry; scalar_t__ comment_changed; int * comment_changes; int comment_orig; int * default_password; scalar_t__ ch_flags; scalar_t__ flags; int error; scalar_t__ open_flags; int * zp; int * zn; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct zip_error*,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;

struct zip *
FUNC_3(struct zip_error *VAR_1)
{
    struct zip *VAR_2;

    VAR_2 = (struct zip *)FUNC_2(sizeof(struct zip));
    if (!VAR_2) {
 FUNC_1(VAR_1, VAR_0, 0);
 return ((void*)0);
    }

    VAR_2->zn = ((void*)0);
    VAR_2->zp = ((void*)0);
    VAR_2->open_flags = 0;
    FUNC_0(&VAR_2->error);
    VAR_2->flags = VAR_2->ch_flags = 0;
    VAR_2->default_password = ((void*)0);
    VAR_2->comment_orig = *(VAR_2->comment_changes = ((void*)0));
    VAR_2->comment_changed = 0;
    VAR_2->nentry = VAR_2->nentry_alloc = 0;
    VAR_2->entry = ((void*)0);
    VAR_2->nfile = VAR_2->nfile_alloc = 0;
    VAR_2->file = ((void*)0);
    VAR_2->tempdir = ((void*)0);

    return VAR_2;
}
